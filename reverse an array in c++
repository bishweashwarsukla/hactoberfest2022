#include <iostream>  
#include <algorithm>  
using namespace std;  
  
// declare disp() function   
void disp(int arr1[], int num)  
{  
    int i;  
    // use for loop to iterate the characters  
    for ( i = 0; i < num; i++)  
    {  
        cout << arr1[i] << " ";  
    }  
}  
  
// define reverse() function to reverse the array elements  
void reverse(int arr1[], int num)  
{  
    reverse(arr1, arr1 + num);   
}  
  
int main ()  
{  
    // declare and initialize an array  
    int arr1[] = {34, 78, 21, 90, 5, 2};  
    int num = sizeof(arr1)/sizeof(arr1[0]);  
      
    // call reverse function and pass parameters  
    reverse(arr1, num);  
    disp(arr1, num); /* call disp() function to print the revrse array. */  
      
    return 0;   
}  
