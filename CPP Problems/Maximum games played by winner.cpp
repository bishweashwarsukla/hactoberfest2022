//There are N players which are playing a tournament. We need to find the maximum number of games the winner can play. In this tournament, two players are allowed to play against each other only if the difference between games played by them is not more than one.
// C/C++ program to find maximum number of
// games played by winner
#include <bits/stdc++.h>
using namespace std;

// method returns maximum games a winner needs
// to play in N-player tournament
int maxGameByWinner(int N)
{
	int dp[N];
	//return 0 if there is only 1 player
	if (N == 1){
	return 0;
	}
	
	// for 0 games, 1 player is needed
	// for 1 game, 2 players are required
	dp[0] = 1;
	dp[1] = 2;
	
	// loop until i-th Fibonacci number is
	// less than or equal to N
	int i = 1;
	while (dp[i++] < N){
	dp[i] = dp[i - 1] + dp[i - 2];
	}
	if (dp[i-1] == N){
	return (i - 1);
	}

	// result is (i - 2) because i will be
	// incremented one extra in while loop
	// and we want the last value which is
	// smaller than N, so one more decrement
	return (i - 2);
}

// Driver code to test above methods
int main()
{
	int N = 10;
	cout << maxGameByWinner(N) << endl;
	return 0;
}
