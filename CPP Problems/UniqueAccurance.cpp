#include <iostream>
using namespace std;

int occ[100];

int countoccurance(int arr[], int size) {
	int key=arr[0], count=1, i, j, a=0;
	
	for(i=0; i<size; i++) {
		
		for(j=i+1; j<size; j++) {
			if(arr[j] == -12451)
				goto end;
			
			if(arr[j] == key) {
				count++;
				arr[j] = -12451;
			}
		}
		
		if(key != -12451) {
			occ[i] = count;
			cout<<"\n\t"<<key<<"  ->  "<<occ[i];
			a++;
		}
		
		key = arr[i+1];
		end:
		count = 1;
	}
	
	return a;
}

int main() {
	int arr[100], n, i, j, flag=0;
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	cout<<"Enter the elements of array: ";
	for(i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	int a = countoccurance(arr, n);
	int key = occ[0];
	
	for(i=0; i<a; i++) {
		for(j=1; j<a; j++) {
			if(key == occ[j]) {
				cout<<"\n\nThere is not an unique occurance";
				flag=1;
				goto final;
			}
		}
	}
	
	final:
	
	if(flag == 0) {
		cout<<"\n\nThere is an unique occurance";
	}

	return 0;
}
