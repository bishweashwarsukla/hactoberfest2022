#include "src/sudoku.h"

#include "src/tree.h"

#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

Sudoku::Sudoku(const std::string& data_in) {
	assert(data_in.size() == 81 && "input string is not valid!!");
	std::transform(data_in.begin(), data_in.end(), data.begin(), [](auto elem) {return elem - '0'; });
	rem_elem_num = std::count(data.begin(), data.end(), 0);
	/*for (int i = 0; i < 81; ++i) {
		data[i] = data_in[i] - '0';
		if (data[i] != 0) {
			--rem_elem_num;
		}
	}*/
}

Sudoku::Sudoku(const std::array<int, 81>& data_in) {
	std::copy(data_in.begin(), data_in.end(), data.begin());
	rem_elem_num = std::count(data.begin(), data.end(), 0);
}

Tree* Sudoku::get_cur_guess() {
	Tree* cur_estimate = &top_estimate_start;
	while (cur_estimate->children_.size() != 0) {
		cur_estimate = &cur_estimate->children_.back();
	}
	return cur_estimate;
}

Tree* Sudoku::get_cur_guess_parent() {
	Tree* cur_estimate = &top_estimate_start;
	Tree* parent_estimate = nullptr;
	while (cur_estimate->children_.size() != 0) {
		parent_estimate = cur_estimate;
		cur_estimate = &cur_estimate->children_.back();
	}
	return parent_estimate;
}

void Sudoku::print_data() const {
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			std::cout << data[i * 9 + j] << ", ";
		}
		std::cout << "\n";
	}
}

int Sudoku::check_map(const std::map<int, int>& cur_map) {
	if (std::any_of(cur_map.begin(), cur_map.end(), [](auto elem) {return elem.second > 1; })) {
		return 1;
	}
	else {
		return 0;
	}
}


int Sudoku::one_step_v2() {
	best_possible_estimate_num = 9;
	int contradiction{ 0 };
	auto cur_guess = get_cur_guess();
	std::vector<std::set<int>> sudoku_table_available_nums(81);
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (data[i * 9 + j] == 0) {
				std::set<int> available_nums{ 1,2,3,4,5,6,7,8,9 };
				std::set<int> forbidden_nums{};
				std::map<int, int> forbidden_nums_idx{};
				// check same row
				for (int m = 0; m < 9; ++m) {
					int cur_idx = i * 9 + m;
					int cur_val = data[cur_idx];
					if (cur_val != 0) {
						forbidden_nums.insert(cur_val);
						++forbidden_nums_idx[cur_val];
					}
				}
				contradiction = check_map(forbidden_nums_idx);
				if (contradiction) {
					return contradiction;
				}

				forbidden_nums_idx.clear();
				// check same column
				for (int m = 0; m < 9; ++m) {
					int cur_idx = m * 9 + j;
					int cur_val = data[cur_idx];
					if (cur_val != 0) {
						forbidden_nums.insert(cur_val);
						++forbidden_nums_idx[cur_val];
					}
				}
				contradiction = check_map(forbidden_nums_idx);
				if (contradiction) {
					return contradiction;
				}

				forbidden_nums_idx.clear();
				// check same square
				int row_start = (i / 3) * 3;
				int col_start = (j / 3) * 3;
				for (int m = 0; m < 3; ++m) {
					for (int n = 0; n < 3; ++n) {
						int cur_idx = (row_start + m) * 9 + col_start + n;
						int cur_val = data[cur_idx];
						if (cur_val != 0) {
							forbidden_nums.insert(cur_val);
							++forbidden_nums_idx[cur_val];
						}
					}
				}
				contradiction = check_map(forbidden_nums_idx);
				if (contradiction) {
					return contradiction;
				}
				for (const auto& cur_elem : forbidden_nums) {
					if (available_nums.count(cur_elem)) {
						available_nums.erase(cur_elem);
					}
					else {
						std::cout << "shouldn't occur\n";
					}
				}

				if (available_nums.size() == 0) {
					contradiction = 1;
					return contradiction;
				}
				if (best_possible_estimate_num > available_nums.size()) {
					best_possible_estimate_num = available_nums.size();
					best_estimate_idx = i * 9 + j;
					best_estimate_forbiddens = forbidden_nums;
				}
				if (available_nums.size() == 1) {  // we can determine number now
					data[i * 9 + j] = *available_nums.begin();
					cur_guess->changed_indices.push_back(i * 9 + j);
					--rem_elem_num;
				}
				sudoku_table_available_nums[i * 9 + j] = available_nums;
			}
		}
	}

	// find hidden singles
	for (int i = 0; i < 9; ++i) {
		// each row
		std::map<int, int> each_num_possibilities;
		for (int j = 0; j < 9; ++j) {
			auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
			for (const auto& cur_elem : cur_available_nums) {
				++each_num_possibilities[cur_elem];
			}
		}

		for (int cur_num = 1; cur_num < 10; ++cur_num) {
			if (each_num_possibilities[cur_num] == 1) {
				// hidden single found in cur row
				for (int j = 0; j < 9; ++j) {
					auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
					if (cur_available_nums.count(cur_num) == 1 && data[i * 9 + j] == 0) {
						data[i * 9 + j] = cur_num;
						cur_guess->changed_indices.push_back(i * 9 + j);
						--rem_elem_num;
					}
				}
			}
		}

	}

	for (int j = 0; j < 9; ++j) {
		// each column
		std::map<int, int> each_num_possibilities;
		for (int i = 0; i < 9; ++i) {
			auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
			for (const auto& cur_elem : cur_available_nums) {
				++each_num_possibilities[cur_elem];
			}
		}

		for (int cur_num = 1; cur_num < 10; ++cur_num) {
			if (each_num_possibilities[cur_num] == 1) {
				// hidden single found in cur column
				for (int i = 0; i < 9; ++i) {
					auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
					if (cur_available_nums.count(cur_num) == 1 && data[i * 9 + j] == 0) {
						data[i * 9 + j] = cur_num;
						cur_guess->changed_indices.push_back(i * 9 + j);
						--rem_elem_num;
					}
				}
			}
		}

	}

	for (int row_start = 0; row_start < 9; row_start += 3) {
		for (int col_start = 0; col_start < 9; col_start += 3) {
			// check each square
			std::map<int, int> each_num_possibilities;
			for (int i = row_start; i < row_start + 3; ++i) {
				for (int j = col_start; j < col_start + 3; ++j) {
					auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
					for (const auto& cur_elem : cur_available_nums) {
						++each_num_possibilities[cur_elem];
					}
				}
			}

			for (int cur_num = 1; cur_num < 10; ++cur_num) {
				if (each_num_possibilities[cur_num] == 1) {
					// hidden single found in cur square
					for (int i = row_start; i < row_start + 3; ++i) {
						for (int j = col_start; j < col_start + 3; ++j) {
							auto cur_available_nums = sudoku_table_available_nums[9 * i + j];
							if (cur_available_nums.count(cur_num) == 1 && data[i * 9 + j] == 0) {
								data[i * 9 + j] = cur_num;
								cur_guess->changed_indices.push_back(i * 9 + j);
								--rem_elem_num;
							}
						}
					}
				}
			}

		}
	}

	return contradiction;
}

void Sudoku::solve(bool print_on, int print_every) {
	int prev_rem_elem_num{ 0 };
	int new_elem_found{ 0 };
	int count{ 0 };
	do {
		prev_rem_elem_num = rem_elem_num;
		// int contradiction = one_step();
		int contradiction = one_step_v2();
		new_elem_found = prev_rem_elem_num - rem_elem_num;
		if (contradiction) {
			auto cur_guess = get_cur_guess();
			/*if (new_elem_found != cur_guess->changed_indices.size()) {
				std::cout << "for debugging\n";
			}*/
			if (data[cur_guess->idx_] == 0) {
				std::cout << "shouldnt happen\n";
			}
			data[cur_guess->idx_] = 0;
			++rem_elem_num;
			for (auto cur_idx : cur_guess->changed_indices) {
				if (data[cur_idx] == 0) {
					std::cout << "shouldnt happen\n";
				}
				data[cur_idx] = 0;
				++rem_elem_num;
			}
			auto cur_guess_parent = get_cur_guess_parent();
			cur_guess_parent->children_.pop_back();
			while (cur_guess_parent->children_.size() == 0) {
				data[cur_guess_parent->idx_] = 0;
				++rem_elem_num;
				for (auto cur_idx : cur_guess_parent->changed_indices) {
					if (data[cur_idx] == 0) {
						std::cout << "shouldnt happen\n";
					}
					data[cur_idx] = 0;
					++rem_elem_num;
				}
				cur_guess_parent = get_cur_guess_parent();
				cur_guess_parent->children_.pop_back();
			}

			cur_guess = get_cur_guess();
			if (data[cur_guess->idx_] != 0) {
				std::cout << "shouldnt happen\n";
			}
			data[cur_guess->idx_] = cur_guess->estimate_;
			--rem_elem_num;
		}
		else if (new_elem_found == 0) {
			std::vector<Tree> estimates{};
			for (int i = 1; i < 10; ++i) {
				if (best_estimate_forbiddens.count(i) == 0) {
					estimates.push_back(Tree(i, best_estimate_idx));
				}
			}
			auto cur_guess = get_cur_guess();
			cur_guess->set_children(estimates);
			cur_guess = &cur_guess->children_.back();
			data[cur_guess->idx_] = cur_guess->estimate_;
			--rem_elem_num;
		}
		if (print_on && count % print_every == 0) {
			std::cout << "COUNT: " << count << "\n";
			std::cout << "Remaining Elem Num: " << rem_elem_num << "\n";
			int rem_elem_num_check{ 0 };
			for (int i = 0; i < 81; ++i) {
				if (data[i] == 0) {
					++rem_elem_num_check;
				}
			}
			std::cout << "Remaining Elem Num (Check): " << rem_elem_num_check << "\n";
			print_data();
		}
		++count;
	} while (rem_elem_num > 0 && count < 1000000);
}

int Sudoku::check_initial_sudoku_table() {
	int error{ 0 };
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			std::set<int> available_numbers{ 1,2,3,4,5,6,7,8,9 };
			/*if (9 * i + j == 49) {
				std::cout << "for debugging\n";
			}*/
			// check same row
			for (int k = 0; k < 9; ++k) {
				if (9 * i + k == 9 * i + j) {
					continue;
				}
				int cur_num = data[9 * i + k];
				if (cur_num != 0) {
					if (available_numbers.count(cur_num)) {
						available_numbers.erase(cur_num);
					}
				}
			}

			// check same column
			for (int k = 0; k < 9; ++k) {
				if (9 * k + j == 9 * i + j) {
					continue;
				}
				int cur_num = data[9 * k + j];
				if (cur_num != 0) {
					if (available_numbers.count(cur_num)) {
						available_numbers.erase(cur_num);
					}
				}
			}

			// check same square
			int row_start = static_cast<int>(i / 3) * 3;
			int col_start = static_cast<int>(j / 3) * 3;
			for (int k = 0; k < 3; ++k) {
				for (int m = 0; m < 3; ++m) {
					if ((row_start + k) * 9 + (col_start + m) == 9 * i + j) {
						continue;
					}
					int cur_num = data[(row_start + k) * 9 + (col_start + m)];
					if (cur_num != 0) {
						if (available_numbers.count(cur_num)) {
							available_numbers.erase(cur_num);
						}
					}
				}
			}

			if (data[9 * i + j] == 0 && available_numbers.size() == 0) {
				error = 1;
				return error;
			}
			else if (data[9 * i + j] != 0 && available_numbers.count(data[9 * i + j]) == 0) {
				error = 1;
				return error;
			}
			
		}
	}
	return error;
}
