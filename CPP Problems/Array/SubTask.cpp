//CodeChef Problem Code: SUBTASK
#include <iostream>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m,k,i,f;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		int *arr = new int[n]; i=f=0;
		while(i<n){
			cin>>arr[i++];
		}
		while(m--){
			if(!arr[m]){
				cout<<0<<el;
				f=1;
				break;
			}
		}
		while(n-- && !f){
			if(!arr[n]){
				cout<<k<<el;
				f=1;
				break;
			}
		}
		if(!f){
			cout<<100<<el;
		}
	}	
	return 0;
}
