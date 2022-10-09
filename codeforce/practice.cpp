// // #include<iostream>
// #include<stdio.h>
// // using namespace std;
// int main(){
//    int n;
// //    cin>>n;
//     scanf("%d" ,&n);
//     for(int i=1;i<=n;i++){
//        for(int j=0;j<n-i;j++){
//         //    cout<<"  ";
//            printf("%s" , "  ");
//        }
//        int count=0;
//        for(int j=i;j<=2*i-1;j++){
//            if(j>9){
//             //    cout<<count;
//                printf("%d" , count);
//                printf("%s" , " ");
//                count++;
//            }else{
//         //    cout<<j<<" ";
//            printf("%d" , j);
//            printf("%s" , " ");
//            }
//         }int sum=2;
//         for(int j=2*i-2 ;j>=i;j--){
//              if(j>9){
//             //    cout<<sum<<" ";
//             printf("%d" , sum);
//             printf("%s" , " ");
//                sum--;
//            }else{
//         //    cout<<j<<" ";
//         printf("%d" , j);
//         printf("%s" , " ");
//            }
//         }
//        printf("\n");
//    }
//     return 0;
// }

// #include<bits/stdc++.h>
// #define int long long
// #define ull unsigned long long
// using namespace std;
// signed main()
// {
//     int n;
//     cin>>n;
//     bool flag=true;
//     while(n>0)
//     {
//         if((n%10)==4||(n%10)==7)
//         {
//            continue;
//         }
//         else{
//              flag=false;
//             break;
//         }
//         n=n/10;
//     }
//     if(flag)
//     cout<<"YES\n";
//     else
//     cout<<"NO\n";
//     return 0;
// }

// C++ program to find second largest
// element in an array

// #include <bits/stdc++.h>
// using namespace std;

// /* Function to print the second largest elements */
// void print2largest(int arr[], int arr_size)
// {
// 	cout<<arr_size<<endl;

// /* Driver program to test above function */
// int main()
// {
// 	int arr[] = { 12, 35, 1, 10, 34, 1 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	print2largest(arr, n);
// 	return 0;
// }

// QuickSort
// #include <bits/stdc++.h>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int count = 0;
//     int a = arr[start];
//     for (int i = start + 1; i <= end; i++)
//     {
//         if (arr[i] <= a)
//             count++;
//     }
//     arr[start] = arr[start + count];
//     arr[start + count] = a;
//     int pivotindex = start + count;
//     // int temp = arr[start];
//     // arr[start] = arr[pivotindex];
//     // arr[pivotindex] = temp;
//     int i = start;
//     int j = end;
//     while (i <= pivotindex && j >= pivotindex)
//     {
//         while (arr[i] <= a)
//         {
//             i++;
//         }
//         while (arr[j] > a)
//         {
//             j--;
//         }
//         // else
//         // {
//         //     int temp = arr[i];
//         //     arr[i] = arr[j];
//         //     arr[j] = arr[i];
//         //     i++;
//         //     j--;
//         // }
//         if (i < pivotindex && j > pivotindex)
//         {
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//             i++;
//             j--;
//         }
//     }
//     return count;
// }
// void quickSort(int arr[], int si, int ei)
// {
//     if (si >= ei)
//     {
//         return;
//     }
//     int k = partition(arr, si, ei);
//     quickSort(arr, si, k - 1);
//     quickSort(arr, k + 1, ei);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     quickSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// Subsequences
// #include <bits/stdc++.h>
// using namespace std;
// int subs(string input, string output[])
// {
//     if (input.empty())
//     {
//         output[0] = "";
//         return 1;
//     }
//     string smallString = input.substr(1);
//     int smallOutput = subs(smallString, output);
//     for (int i = 0; i < smallOutput; i++)
//     {
//         output[i + smallOutput] = input[0] + output[i];
//     }
//     return 2 * smallOutput;
// }
// int main()
// {
//     string input;
//     cin >> input;
//     string *output = new string[1000];
//     int count = subs(input, output);
//     for (int i = 0; i < count; i++)
//     {
//         cout << output[i] << "\n";
//     }
// }

// Return Keypad Code
// #include <bits/stdc++.h>
// using namespace std;
// int keypad(int n, string output[])
// {
//     string input;
//     if (n == 0)
//     {
//         output[0] = "";
//         return 1;
//     }
//     int num = n % 10;
//     int smallOutputSize = keypad(n / 10, output);
//     switch (num)
//     {
//     case 2:
//         input = "abc";
//         break;
//     case 3:
//         input = "def";
//         break;
//     case 4:
//         input = "ghi";
//         break;
//     case 5:
//         input = "jkl";
//         break;
//     case 6:
//         input = "mno";
//         break;
//     case 7:
//         input = "pqrs";
//         break;
//     case 8:
//         input = "tuv";
//         break;
//     case 9:
//         input = "wxyz";
//         break;
//     }
//     string *temp = new string[1000];
//     int k = 0;
//     for (int i = 0; i < smallOutputSize; i++)
//     {
//         for (int j = 0; j < input.size(); j++)
//         {
//             temp[k] = output[i] + input[j];
//             k++;
//         }
//     }
//     int ans_size = smallOutputSize * input.size();
//     for (int i = 0; i < ans_size; i++)
//     {
//         output[i] = temp[i];
//     }
//     return ans_size;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string *output = new string[1000];
//     int count = keypad(n, output);
//     for (int i = 0; i < count; i++)
//     {
//         cout << output[i] << "\n";
//     }
// }

// print Subsequences
// #include <iostream>
// using namespace std;
// void print_subs(string input, string output)
// {
//     if (input.size() == 0)
//     {
//         cout << output << "\n";
//         return;
//     }
//     print_subs(input.substr(1), output);
//     print_subs(input.substr(1), output + input[0]);
// }
// int main()
// {
//     string input;
//     cin >> input;
//     string output = "";
//     print_subs(input, output);
// }

// print keyPad combinations code
// #include <bits/stdc++.h>
// using namespace std;
// void print(int num, string output, string options[])
// {
//     if (num == 0)
//     {
//         cout << output << "\n";
//         return;
//     }
//     int n = num % 10;
//     num = num / 10;
//     string s = options[n];
//     for (int i = 0; i < s.size(); i++)
//     {
//         print(num, s[i] + output, options);
//     }
// }
// void printKeypad(int num)
// {
//     string output = "";
//     string options[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//     print(num, output, options);
// }
// int main()
// {
//     int num;
//     cin >> num;
//     printKeypad(num);
//     return 0;
// }

// Check AB (wrong answer)
// #include <bits/stdc++.h>
// using namespace std;
// int len(char s[]){
//     int i=0;
//     while(s[i]!='\0') i++;
//     return i-1;
// }
// bool check(char input[])
// {
//     if (input[0] == '\0')
//     {
//         return true;
//     }
//     if (input[0] == 'a')
//     {
//         check(input + 1);
//     }
//     else if (input[0] == 'b' && input[1] == 'b')
//     {
//         bool res = check(input + 1);
//         return res;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool checkAB(char input[])
// {
//     if (input[0] == '\0')
//     {
//         return true;
//     }
//     if (input[0] == 'a')
//     {
//          check(input + 1);
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     char input[100];
//     bool ans;
//     cin >> input;
//     ans = checkAB(input);
//     if (ans)
//     {
//         cout << "true"
//              << "\n";
//     }
//     else
//     {
//         cout << "false"
//              << "\n";
//     }
// }

// check AB
// #include <bits/stdc++.h>
// using namespace std;
// bool checkAb(char s[])
// {
//     if (s[0] == '\0')
//     {
//         return true;
//     }
//     if (s[0] == 'a')
//     {
//         if (s[1] == 'a' || s[1] == '\0')
//         {
//             return checkAb(s + 1);
//         }
//         if (s[1] == 'b' || s[1] == 'b')
//         {
//             return checkAb(s + 3);
//         }
//         else
//         {
//             return 0;
//         }
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     char s[1000];
//     cin >> s;
//     bool ans = checkAb(s);
//     if (ans)
//     {
//         cout << "true"
//              << "\n";
//     }
//     else
//     {
//         cout << "false"
//              << "\n";
//     }
// }

// stairCase
// #include <bits/stdc++.h>
// using namespace std;
// int stairCase(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (n < 0)
//     {
//         return 0;
//     }
//     return stairCase(n - 1) + stairCase(n - 2) + stairCase(n - 3);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << stairCase(n) << "\n";
// }

// Binary Search
// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int arr[], int start, int end, int x)
// {
//     if (start > end)
//     {
//         return -1;
//     }
//     int mid = (start + end) / 2;
//     if (arr[mid] == x)
//     {
//         return mid;
//     }
//     if (arr[mid] > x)
//         return binarySearch(arr, start, mid - 1, x);
//     return binarySearch(arr, mid + 1, end, x);
// }
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ans = binarySearch(arr, 0, n - 1, x);
//     cout << ans << "\n";
// }

// Return Subset of an Array
// #include <bits/stdc++.h>
// using namespace std;
// int subset(int input[], int size, int si, int output[][20])
// {
//     if (si == size)
//     {
//         output[0][0] = 0;
//         return 1;
//     }
//     int smallSize = subset(input, size, si + 1, output);
//     for (int i = 0; i < smallSize; i++)
//     {
//         output[i + smallSize][0] = output[i][0] + 1;
//         output[i + smallSize][1] = input[si];
//         for (int j = 1; j <= output[i][0]; j++)
//         {
//             output[i + smallSize][j + 1] = output[i][j];
//         }
//     }
//     return 2 * smallSize;
// }
// int subset(int input[], int n, int output[][20])
// {
//     return subset(input, n, 0, output);
// }
// int main()
// {
//     int input[20], length, output[35000][20];
//     cin >> length;
//     for (int i = 0; i < length; i++)
//         cin >> input[i];
//     int size = subset(input, length, output);
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 1; j <= output[i][0]; j++)
//         {
//             cout << output[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// Print Subset of an Array
// #include <bits/stdc++.h>
// using namespace std;
// void printSubsetsOfArray(int input[], int size, int output[], int outputSize)
// {
//     if (size == 0)
//     {
//         for (int i = 0; i < outputSize; i++)
//         {
//             cout << output[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     printSubsetsOfArray(input + 1, size - 1, output, outputSize);
//     // assuming current elemnet is included in array
//     int newoutput[20] = {};
//     for (int i = 0; i < outputSize; i++)
//     {
//         newoutput[i] = output[i];
//     }
//     newoutput[outputSize] = input[0];
//     printSubsetsOfArray(input + 1, size - 1, newoutput, outputSize + 1);
// }
// void printSubsetsOfArray(int input[], int size)
// {
//     int ans[20] = {};
//     printSubsetsOfArray(input, size, ans, 0);
// }
// int main()
// {
//     int input[1000], length;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cin >> input[i];
//     }
//     printSubsetsOfArray(input, length);
// }

// Return All codes
// #include <bits/stdc++.h>
// using namespace std;
// int getcodes(string input, string output[])
// {
//     if (input[0] == '\0')
//     {
//         output[0] = "";
//         return 1;
//     }
//     int first = input[0] - '0';
//     char firstChar = first + 'a' - 1;
//     char secondChar = '\0';
//     string smallOutput1[500];
//     string smallOutput2[500];
//     int size1 = getcodes(input.substr(1), smallOutput1);
//     int size2 = 0;
//     if (input[1] != '\0')
//     {
//         int second = first * 10 + input[1] - 48;
//         if (second >= 10 && second <= 26)
//         {
//             secondChar = second + 'a' - 1;
//             size2 = getcodes(input.substr(2), smallOutput2);
//         }
//     }
//     int k = 0;
//     for (int i = 0; i < size1; i++)
//     {
//         output[k] = firstChar + smallOutput1[i];
//         k++;
//     }
//     for (int i = 0; i < size2; i++)
//     {
//         output[k] = secondChar + smallOutput2[i];
//         k++;
//     }
//     return k;
// }
// int main()
// {
//     string input;
//     cin >> input;
//     string output[1000];
//     int count = getcodes(input, output);
//     for (int i = 0; i < count && i < 10000; i++)
//     {
//         cout << output[i] << "\n";
//     }
//     return 0;
// }

