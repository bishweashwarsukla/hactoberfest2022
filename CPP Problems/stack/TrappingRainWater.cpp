#include <bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n)
{
	stack<int> stk;
	int ans = 0;

	for (int i = 0; i < n; i++) {

		while ((!stk.empty()) && (height[stk.top()] < height[i])) {

			int pop_height = height[stk.top()];
			stk.pop();

			if (stk.empty()){
				break;
            }

			int distance = i - stk.top() - 1;

			int min_height = min(height[stk.top()], height[i]) - pop_height;

			ans += distance * min_height;
		}

		stk.push(i);
	}
	return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n ;
	int arr[n];
    cout << "Enter the Blocks height : ";
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
	cout << "Maximum units of water that we can store in this structure : " << maxWater(arr, n);

	return 0;
}

