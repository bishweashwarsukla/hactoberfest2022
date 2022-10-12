#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
	if (c == '^'){
		return 3;
    }
	else if (c == '/' || c == '*'){
		return 2;
    }
	else if (c == '+' || c == '-'){
		return 1;
    }
	else{
		return -1;
    }
}

void infixToPostfix(string s)
{

	stack<char> stk; 
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
			result += c;
        }

		else if (c == '('){
			stk.push('(');
        }
		
		else if (c == ')') {
			while (stk.top() != '(') {
				result += stk.top();
				stk.pop();
			}
			stk.pop();
		}

		
		else {
			while (!stk.empty() && prec(s[i]) <= prec(stk.top())) {
				result += stk.top();
				stk.pop();
			}
			stk.push(c);
		}
	}

	while (!stk.empty()) {
		result += stk.top();
		stk.pop();
	}

	cout << "The Postfix Evaluation for the expression is : " << result << endl;
}

int main()
{
	string exp;
    cout << "Enter an Infix Expression which includes '+', '-', '*', '/', '^' : ";
    cin >> exp;
	infixToPostfix(exp);
	return 0;
}
