//************jai shree krishna**********

//write a program to print hello world
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     return 0;
// }



//****************decision making if/else*****************

//write a program to find a person eligible for vote or not
// #include<iostream>
// using namespace std;
// int main(){
//     int a,age=18;
//     cout<<"Enter your age : " ;
//     cin>>a;
//     if(a>age){
//         cout<<"congratulation! you are eligible for vote" <<endl;
//     }else{
//         cout<<"aww aww.. sorry you are not eligible for vote"<<endl;
//     }
//     return 0;
// }


//***************else if**************

//write a program to compare two numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"Enter a first no :" ;
//     cin>>x;
//     cout<<"Enter a second no :";
//     cin>>y;
//     if(x>y){
//         cout<<"first no is greater than second and its value is "<<x;
//     }
//     else if(x==y){
//         cout<<"Both no are equal and their value is " <<x;
//     }else{
//         cout<<"Second no is greater than first and it's value is "<<y;
//     }
//     return 0;
// }


// ************for loop**************

// write a program to find out the sum of n no
// #include<iostream>
// using namespace std;
// int main(){
//     int n , sum=0;
//     cout<<"Enter a no : ";
//     cin>>n;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     cout << "Sum of no is :"<<sum ;
//     return 0;
// }

//********* while loop *********

// write s program to print a no till n 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cout<<"Enter a no :";
//     cin>>n;
//     while(n>0){
//         cout<<i<<endl;
//         i++;
//         n--;
//     }
//     return 0;
// }


//********** do while *********

// #include<iostream>
// using namespace std;
//  int main()
// {
// int i = 1;
//  do {
//     cout << i << endl;
//     i++;
//     }while (i <= 5);
//     return 0;
// }


//program on continue and break 

// #include<iostream>
// using namespace std;
// int main(){
//     int pocketmoney=3000;
//     for( int date =1 ; date<=30;date++){
//         if(date%2==0){
//             continue;
//         }
//         if(pocketmoney==0){
//             break;
//         }
//         cout<<"Go out today!"<<endl;
//         pocketmoney=pocketmoney-300;
//     }
//     return 0;
// }


//write a program to checkout prime no 
// #include<iostream>
// using namespace std;
// int main(){
//     int n , i;
//     cout<<"Enter a no :";
//     cin>>n;
//     for( i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"aww aww sorry no is not prime";
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"wow! no is prime";
//     }
//     return 0;
// }



// write a program to find out prime no between two no
// #include<iostream>
// using namespace std;
// int main(){
//     int a, b , n;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     for(int num=a; num<b; num++){
//         int i;
//         for(i=2; i<num ; i++){
//             if(num%i==0){
//                break;
//             }
//         }
//         if(i==num){
//             cout<<"wow! you find prime no "<<num <<endl;
//         }
//     }
//     return 0;
// }


//write a program to print all odd no till n
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter a no :";
//     cin>>n;
//     for(int i=1;i<n;i++){
//         if(i%2!=0){
//             cout<<i<<endl;
//         }
//     }
// return 0;   
// }

//**************** switch case statement *********

// #include<iostream>
// using namespace std;
// int main(){
//     char button;
//     cout<<"Input a character"; 
//     cin>>button;
//     switch (button)
//     {
//     case 'a':
//     cout<<"hello"<<endl;
//     break;
//     case 'b':
//     cout<<"namaste"<<endl;
//     break;
//     case 'c':
//     cout<<"salute"<<endl;
//     break;
//     case 'd':
//     cout<<"Hola"<<endl;
//     break;
//     case 'e':
//     cout<<"ciao"<<endl;
//     break;
//     default:
//     cout<<"I m still learning more!"<<endl;
//         break;
//     }
//     return 0;
// }

// write a program to use of a basic arithmetic operator
// #include<iostream>
// using namespace std;
// int main(){
//     int n1 , n2 ;
//     cout<<"Enter a first no :";
//     cin>>n1;
//     cout<<"Enter a second no :";
//     cin>>n2;
//     char op;
//     cout<<"Enter a operator sign :";
//     cin>>op;
//     switch (op)
//     {
//     case '+':
//     cout<<"Addition of given no :"<<n1+n2<<endl;
//     break;
//     case '-':
//     cout<<"Subtraction of given no :"<<n1-n2<<endl;
//     break;
//     case '*':
//     cout<<"Multiplication of given no :" <<n1*n2<<endl;
//     break;
//     case '/':
//     cout<<"Division of given no :"<<n1/n2 <<endl;
//     break;
//     default:
//     cout<<"Pls use one of these operator + , - , * , / "<<endl;
//         break;
//     }
//     return 0;
// }

//write a program wheather input alphabet is vowel or consonant
// #include<iostream>
// using namespace std;
// int main(){
//     char alphabet;
//     cout<<"Enter a alphabet :";
//     cin>>alphabet;
//     switch (alphabet)
//     {
//     case 'a':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'e':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'i':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'o':
//     cout<<"It's a vowel" <<endl;
//     break;
//     case 'u':
//     cout<<"It's a vowel" <<endl;
//     break;
//     default:
//     cout<<"Its a consonant"<<endl;
//     break;
//     }
//     return 0;
// }

//******** pre incrementer(++a)
// int a=10;
// int b;
// b=++a;
// cout<<a<<<" "<< b <<endl;
// output:-
// a =11;
// b= 11;


//******* post incrementor(a++)
// int a=10;
// int b;
// b=a++;
// cout << a <<" "<<b <<endl;
// output :- 
// a=11;
// b=10;


//some examples

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     i = i++ + ++i ;  //i=4
//     cout<<i<<endl;   
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1 , j=2 , k;
//      k= i+j+ i++ + j++ + ++i + ++j;
//      cout<< i <<" "<< j <<" "<<k <<endl;
//      return 0;
// }

//********* Relational operator ********

//write to program to compare two no is greater , lesser or equal
// #include<iostream>
// using namespace std;
// int main(){
//     int a  , b;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     if(a>b){
//         cout<<"First no is greater than second and it's value is :"<<a<<endl;
//     }else if(a<b){
//         cout<<"Second no is greater than first and it's value is :"<<b<<endl;
//     }else{
//         cout<<"Both no are equal"<<endl;
//     }
//     return 0;
// }

//******** Logical operator **********

//write a program to output wheather a number is divisible by both 2 and 3 or divisible by only one of them.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no :";
//     cin>>n;
//     if(n%2==0 && n%3==0){
//         cout<<"No is divisible by both no 2 and 3 ";
//     }else if(n%2==0){
//         cout<<"No is divisible by 2";
//     }else if(n%3==0){
//         cout<<"No is divvisible by 3";
//     }else{
//         cout<<"aww aww.. no is neither divisible by 2 nor 3";
//     }
//     return 0;
// }

//  square pattern 
//write a program for below output
//  * * * *
//  * * * *
//  * * * *
//  * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a side of square :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Rectangle pattern
// * * * * * *.......
// * * * * * *.......
// * * * * * *.......
// #include<iostream>
// using namespace  std;
// int main(){
//     int row , col;
//     cout<<"Enter a no of row :";
//     cin>>row;
//     cout<<"Enter a no of col :";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Hollow rectangle Pattern
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row , col;
//     cout<<"Enter a no of row :";
//     cin>>row;
//     cout<<"Enter a no of col :";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row){
//                 cout<<" * ";
//             }else if(j==1 || j==col){
//                 cout<<" * ";
//             }else{
//                 cout<<"   ";
//             }
//             }
//         cout<<endl;
//     }
// return 0;
// }

// inverted half pyramid
// * * * * *
// * * * * 
// * * * 
// * * 
// * 
// #include<iostream>
// using namespace std;
// int main(){
//     int row , col;
//     cout<<"Enter a row  :";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=row;j>=i;j--){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Half Pyramid after 180 degree Rotation
//         * 
//       * *
//     * * *
//   * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int row ;
//     cout<<"Enter a no of row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=row;j++){
//             if(j<= row-i){
//                 cout<<"   ";
//             }else{
//                 cout<<" * ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
 
 // Half pyramid using no
//  1
//  1 2 
//  1 2 3
//  1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cout<<"Enter a no of Row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//  Floyd's Triangle
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//     int row , n=1;
//     cout<<"Enter a row : ";
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<n<<"  ";
//             n++;
//         }
//         cout<<endl;
//         }
//         return 0;
// }


// Butterfly Pattern
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a input  : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         int space = 2*n-2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// Inverted pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
// #include<iostream>
// using namespace  std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//    return 0;
// }


// ****** 0-1 pattern
// 1
// 0 1 
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<" 1 ";
//             }else{
//                 cout<<" 0 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;  
// } 

// Rhombus pattern
//             *  *  *  *  *
//          *  *  *  *  *
//       *  *  *  *  *
//    *  *  *  *  *
// *  *  *  *  *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }for(int j=1;j<=n;j++){
//         cout<<" * ";
//     }
//     cout<<endl;
// }
// return 0;
// }


// Number pattern
//      1
//     1 2 
//    1 2 3
//  1 2 3 4
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input : ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Pallindromic pattern
//             1  
//          2  1  2  
//       3  2  1  2  3  
//    4  3  2  1  2  3  4  
// 5  4  3  2  1  2  3  4  5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j<<"  ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Star pattern
//              * 
//           *  *  * 
//        *  *  *  *  * 
//     *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  * 
//        *  *  *  *  * 
//           *  *  * 
//              * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<" * ";
//         }
//         for(int j=2;j<=i;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<"   ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Zig-Zag
//        *           *       
//     *     *     *     *    
//  *           *           * 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input :";
//     cin>>n;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && j%4==0)){
//                 cout<<" * ";
//             }else{
//             cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// check weather no is prime or not
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n ;
//     bool flag=0;
//     cout<<"Enter a no :";
//     cin>>n;
//      for(int i=2;i<sqrt(n);i++){
//             if(n%i==0){
//                 cout<<"aww aww... no is Non-prime ";
//                 flag=1;
//             break;
//             }
//     }
//     if(flag==0){
//         cout<<"wow! It's prime no";
//     }
//     return 0;
// }

// Reverse a given no
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse= reverse*10+lastdigit;
//         n=n/10;
//         }
//     cout<<"Reverse of given input is : "<<reverse<<endl; 
//     return 0;
// }


// ArmStrong no
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a no :";
//     cin>>n;
//     int sum=0;
//     int original=n;
//     while(n>0){
//         int lastdigit=n%10;
//         sum+=pow(lastdigit,3);
//         n=n/10;
//     }
//     if(sum==original){
//         cout<<"Congrats! you find out Armstrong  no";
//     }else{
//         cout<<"Aww aww.. try next time . It's not a Armstrong";
//     }
//     return 0;
// }

// Functions
//prime no between two numbers
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isPrime(int num){
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cout<<"Enter a first no :";
//     cin>>a;
//     cout<<"Enter a second no :";
//     cin>>b;
//     for(int i=a;i<=b;i++){
//         if(isPrime(i)){
//             cout<< i<<endl;
//         }
//     }
//     return 0;
// }


// Fibannaci series (0,1,1,2,3,5,8,......)
// #include<iostream>
// using namespace std;
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     cout<<"Fibenacci series of "<<n<<" term is :- ";
//     for(int i=1;i<=n;i++){
//         cout<<t1<<",";
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter a no to terms : ";
//     cin>>n;
//     fib(n);
//     return 0;
// }


// Factorial of a number
// #include<iostream>
// using namespace std;
// void fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     cout<<"Factorial of "<<n<< " is : "<<factorial;
//     return;
// }
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     fact(n);
//     return 0;
// }


// calculate nCr
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cout<<"Attention number of item greater then number of items being chosen at a time .";
//     cout<<"Enter number of items :";
//     cin>>n;
//     cout<<"Enter number of items being chosen at a time.";
//     cin>>r;
//     int ans=fact(n)/(fact(n-r)*fact(r));
//     cout<<"Combination are :"<<ans;
//     return 0;
// }


// Pascal Triangle
// 1   
// 1 1 
// 1 2 1
// 1 3 3 1 
// 1 4 6 4 1
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }
// int main(){
//     int n;
//     cout<<"Enter a input :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Sum of Natural numbers
// #include<iostream>
// using namespace std;
// int sum(int n){
//    int ans=((n*(n+1))/2);
//     return ans;
// }
// int main(){
//     int n ;
//     cout<<"Enter an input :";
//     cin>>n;
//     cout<<"Sum of Given no is : "<<sum(n)<<endl;
//     return 0;
// }


// Pythagoras
// #include<iostream>
// using namespace std;
// bool check(int x , int y , int z){
//     int a = max(x,max(y,z));
//     int b,c;
//     if(a==x){
//         b=y;
//         c=z;
//     }else if(a==y){
//         b=x;
//         c=z;
//     }else{
//         b=x;
//         c=y;
//     }
//     if(a*a==b*b + c*c){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int x,y,z;
//     cout<<"Enter a first no :";
//     cin>>x;
//     cout<<"Enter a Second no :";
//     cin>>y;
//     cout<<"Enter a third no :";
//     cin>>z;
//     if(check(x,y,z)){
//         cout<<"wow! It's a Pythagorean Triplet";
//     }else{
//         cout<<"Aww aww... Not a Pythagorean Triplet";
//     }
//     return 0;
// }


// Binary to Decimal
// #include<iostream>
// using namespace std;
// int binarytoDecimal(int n){
//     int ans=0;
//     int x=1;
//     while(n>0){
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter a Binary no : ";
//     cin>>n;
//     cout<<"Decimal no of given binary no is "<<binarytoDecimal(n)<<endl;
//     return 0;
// }

// HexaDecimal to Decimal
// #include<iostream>
// using namespace std;
// int HexaDecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9'){
//             ans+=x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i<='B']){
//             ans+=x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     string n;
//     cout<<"Enter a HexaDecimal no :";
//     cin>>n;
//     cout<<"Decimal no of given HexaDecimal is : "<<HexaDecimal(n)<<endl;
//     return 0;
// }


// Decimal to Binary
// #include<iostream>
// using namespace std;
// string DecimalToBinary(int n){
//     string ans;
//     string s;
//     while(n>=0){
//         ans=n/2;
//         s.append(ans);
//         n/=2;
//     }
//     string output;
//     for(int i=s.size();i>=0;i--){
//         output.append(s[i]);
//     }
//     return output
// }
// int main(){
//     int n;
//     cout<<"Enter a no : ";
//     cin>>n;
//     cout<<"Binary no of given input :"<<DecimalToBinary(n)<<endl;
//     return 0;
// }


// Decimal to Hexadecimal


// Add two Binary no


// ******** Array
// Take a array as input and print it.
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"Enter a length of Array.";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for( int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// return 0;
// }


// Find max and min no in Array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a length of array :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxNo= INT_MIN;
//     int minNo= INT_MAX;
//     for(int i=0;i<n;i++){
//         if(a[i]>maxNo){
//             maxNo=a[i];
//         }
//         if(a[i]<minNo){
//             minNo=a[i];
//         }   
//     }
//     cout<<"Maximum no in given no : "<<maxNo<<endl;
//     cout<<"Minimum no in given no :"<<minNo<<endl;
//     return 0;
// }

// aliter
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a length of array :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxNo= INT_MIN;
//     int minNo= INT_MAX;
//     for(int i=0;i<n;i++){
//         maxNo = max(maxNo , a[i]);
//         minNo = min(minNo , a[i]); 
//     }
//     cout<<"Maximum no in given no : "<<maxNo<<endl;
//     cout<<"Minimum no in given no :"<<minNo<<endl;
//     return 0;
// }

//************* Searching in Array.

//  Linear Search
// #include<iostream>
// using namespace std;
// int linearSearch(int a[], int n , int key){
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter an array length :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int key;
//     cout<<"Enter a no you r looking for :";
//     cin>>key;
//     cout<<linearSearch(a,n,key)<<endl;
//     return 0;
// }


// Binary Search { Array must be in sorted order. }
// #include<iostream>
// using namespace std;
// int binarySearch(int a[] , int n , int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(a[mid]==key){
//             return mid;
//         }
//         else if(a[mid>key]){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter a array length :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//     cin>>a[i];
//     }
//     int key;
//     cout<<"Enter a no you are looking for :";
//     cin>>key;
//     cout<<binarySearch(a , n , key)<<endl;
// return 0;
// }

// ********** Sorting of Arrays

// Selection sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array lenght :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){    
//     cin>>a[i];
//     }
//     for( int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 int temp=a[j];
//                 a[j]=a[i];
//                 a[i]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){    
//     cout<<a[i]<<" ";
//     }
//     return 0;
// }


// Bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an input length :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(a[i]>a[i+1]){
//                 int temp=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }


// Insertion Sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=1;i<n;i++){
//         int temp=a[i];
//         int j=i-1;
//         while(a[j]>temp && j>=0){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;   
// }


// Problem :- Given an array a[] of size n for every i from 0 to n-1 . find out output max of (a[0],a[1],a[2],........a[n-1])
// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cout<<"Enter an array sixe :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int Max=INT_MIN;
//     for(int i=0;i<n;i++){
//         Max = max(Max,a[i]);
//     }
//     cout<<Max<<" ";
//     return 0;
// }


// ****** Sub array :-
// Continous part of the array
// Number of sub arrays of an array with n elements = nc2 + n = n*(n+1)/2

//***** Sequence :-
// a sequence is a subsequence that can be derived an array by selecting zero or more elments , without chnaging the order of the remianing element .
// Number of subsequence of an array with n elemnts = pow(2,n):
// Quote :-  Every subarray is a sequence but every subsequence is not a subarray


// Sum of all Subarrays
// problem :- Given an array a[] of size n. output sum of each subarray of the given array.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array Size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum+=a[j];
//             cout<<sum<<endl;
//         }
//     }
// return 0;
// }


// Longest AritheMatic SubArray (Google Kickstart )
// Problem :- An arithmetic array is an array that contains at least two integers and the
// differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
// not arithmetic arrays.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     int ans=2;
//     int pd=a[1]-a[0];
//     int j=2;
//     int curr=2;
//     while(j<n){
//         if(pd==a[j]-a[j-1]){
//             curr++;
//         }else{
//             pd=a[j]-a[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// Print SubArray
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Array size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//             }
//             cout<<endl;
//             }
//     }
//     return 0;
// }


// Max SubArray
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Array size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int Max=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//             }
//             Max=max(Max, sum);
//             }
//     }
//     cout<<Max<<endl;
//     return 0;
// }


// problem :- Given an array a[] of size N . the task is to find the first repeating element int the array of integers , i.e an element that occurs more than once and whose index of first occcurence is smallest.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array size : ";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j]){
//                 cout<<j<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<"No repeation number found :";
//     return 0;
// }

// Aliter
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter an array size:";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N = 1e6+2;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]= -1;
//     }
//     int minidx = INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[a[i]] != -1){
//             minidx = min(minidx , idx[a[i]]);
//         }else{
//             idx[a[i]] = i;
//         }
//     }

//     if(minidx == INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx+1<<endl;
//     }
//     return 0;
// }


//Problem :- Given an unsorted array A of Size N of Non-negative integera , find a continous subarray which adds to a given number S.


//Problem :- You are given an array a[] of N integers including 0. the task is to find the smallest positive number missing form the array.


//Kadane's Algorithm
//Max Sub Array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Array size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currentSum=0;
//     int maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentSum+=a[i];
//         if(currentSum<0){
//             currentSum=0;
//         }
//         maxSum=max(maxSum , currentSum);
//     }
//     cout<<maxSum<<endl;
//     return 0;
// }

// Maximum Circular SubArray Sum
// #include<iostream>
// #include<climits>
// using namespace std;
// int kadane(int a[] , int n){
//     int currentsum=0;
//     int Max = INT_MIN;
//     for(int i=0;i<n;i++){
//         currentsum+=a[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         Max=max(currentsum , Max);
//     }
//     return Max;
// }
// int main(){
//     int n;
//     cout<<"Enter an array size :";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int wrapsum , nonwrapsum;
//     nonwrapsum = kadane(a , n);
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         totalsum+=a[i];
//         a[i]= -a[i];
//     }
//     wrapsum=totalsum+kadane(a , n);
//     cout<<max(wrapsum , nonwrapsum)<<endl;
// return 0;
// }


// Pair Sum Problem
// check if there exixts two elements is an array such that their sum is equal to given k:
// #include<iostream>
// using namespace std;
// bool pairSum(int a[] , int n, int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]+a[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;    
// }
// int main(){
//     int a[]={2,4,7,11,14,16,20,21};
//     int k=31;
//     cout<< pairSum(a ,8 , k)<<endl;
//     return 0;
// }

// Aliter
// check if there exixts two elements is an array such that their sum is equal to given k:
// #include<iostream>
// using namespace std;
// bool pairSum(int a[] , int n, int k){
//     int low=0;
//     int high=n-1;
//     while(low<high){
//         if(a[low]+a[high]==k){
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }else if(a[low]+a[high]>k){
//             high--;
//         }else{
//             low++;
//         }
//     }
// return false;    
// }
// int main(){
//     int a[]={2,4,7,11,14,16,20,21};
//     int k=31;
//     cout<< pairSum(a ,8 , k)<<endl;
//     return 0;
// }

//******** 2D Array
// Declaration
// int a[n][m]
// bool a[n][m]
// float a[n][m]
// char a[n][m]
//Taking input of 2D Array
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>a[i][j];
//     }
// }
//Printing Input
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<a[i][j]<<"";
//         }
// }

// Searching a Matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m , x;
//     cout<<"Enter a row :";
//     cin>>n;
//     cout<<"Enter a col :";
//     cin>>m;
//     cout<<"Enter element you want to be search :";
//     cin>>x;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==x){
//                 flag=true;
//             }
//         }
//     }
//     if(flag){
//         cout<<"Element is found :";
//     }else{
//         cout<<"Element is not found:";
//     }
// return 0;
// }

//Spiral Order Mattrix Traversal
// #include<iostream>
// using namespace std;
// signed main(){
//     int n,m;
//     cout<<"Enter row length :";
//     cin>>n;
//     cout<<"Enter a col length :";
//     cin>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     int row_start=0 , row_end=n-1 ,col_start=0 ,col_end=m-1;
//     while(row_start<=row_end && col_start<=col_end){
//         for(int col=col_start;col<=col_end;col++){
//             cout<<a[row_start][col]<<" ";
//         }
//         row_start++;
//         for(int row=row_start;row<=row_end;row++){
//             cout<<a[row][col_end]<<" ";
//         }
//         col_end--;
//         for(int col=col_end;col>=col_start;col--){
//         cout<<a[row_end][col]<<" ";
//         }
//         row_end--;
//         for(int row=row_end;row>=row_start;row--){
//         cout<<a[row][col_start]<<" ";
//         }
//         col_start++;
//     }
// return 0;
// }

// Matrix-Transpose
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             //swap
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// Matrix Multiplication
// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>m1[i][j];
//         }
//     }
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>m2[i][j];
//         }
//     }
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
//         }
//     }
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ******** Character Array
// #include<iostream>
// using namespace std;
// int main(){
//     char a[100]="apple";
//     int i=0;
//     while(a[i]!='\0'){
//         cout<<a[i]<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char a[100];
//     cout<<"Enter your name : ";
//     cin>>a;
//     cout<<a<<endl;
//     return 0;
// }


// Check plaindrome
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a word length :";
//     cin>>n;
//     char a[n+1];
//     cout<<"Enter a word :";
//     cin>>a;
//     bool check=1;
//     for(int i=0;i<n;i++){
//         if(a[i]!=a[n-1-i]){
//             check=0;
//             break;
//         }
//     }
//     if(check){
//         cout<<"wow! word is palindrome"<<endl;
//     }else{
//         cout<<"Aww aww...word is not palindrome"<<endl;
//     }
//     return 0;
// }

// Largest word in sentence
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter sentence length :";
//     cin>>n;
//     cin.ignore();
//     char a[n];
//     cout<<"Enter sentence :";
//     cin.getline(a,n);
//     int i=0;
//     int currLen=0 , maxLen=0;
//     int st=0 , maxSt=0;
//     while(1){
//         if(a[i]==' ' || a[i]== '\0'){
//             if(currLen>maxLen){
//                 maxLen=currLen;
//                 maxSt=st;
//             }
//             currLen=0;
//             st=i+1;
//         }else
//         currLen++;
//         if(a[i]== '\0')
//         break;
//         i++;
//     }
//     cout<<maxLen<<endl;
//     for(int i=0;i<maxLen;i++){
//         cout<<a[i+maxSt];
//     }
//     return 0;
// }


// ******* Pointers ( Pointer are the variables that  store the address of other varibles ):
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *aptr=&a;
//     cout<<*aptr<<endl;
//     *aptr = 20;
//     cout<<a<<endl;
//     return 0;
// }

// Pointer Airthmetic (++ , -- , + , -)
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *aptr=&a;
//     cout<<aptr<<endl;
//     aptr++;
//     cout<<aptr<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='a';
//     char *cptr=&ch;
//     cout<<cptr<<endl;
//     cptr++;
//     cout<<cptr<<endl;
//     return 0;
// }

// Pointers and Arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={10,20,30};
//     cout<<*a<<endl;
//     int *ptr=a;
//     for(int i=0;i<3;i++){
//         // cout<<*ptr<<endl;
//         cout<<*(a+i)<<endl;
//     }
//     return 0;
// }

// Pointer to Pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     cout<<*p<<endl;
//     int **q=&p;
//     cout<<*q<<endl;
//     cout<<**q<<endl;
//     return 0;
// }

// Passing Pointers to function
// void increment(int a){
//     a++;
// }
// int main(){
//     int a=2;
//     increment(a);
//     cout<<a<<endl; //2
//     return 0;
// }

// Swap using Pointer
// #include<iostream>
// using namespace std;
// void swap(int *a , int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=2;
//     int b=4;
//     int *aptr=&a;
//     int *bptr=&b;
//     swap(aptr , bptr);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }


// ******** Strings

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter any word :";
//     cin>>str;
//     cout<<str<<endl;
//     return 0;
// }

// Different types of ways to declare a strings
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     string str1(5,'n');
//     cout<<str1<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str ="vishal";
//     cout<<str;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1 ="fam";
//     string s2="ily";
//     s1.append(s2);
//     cout<<s1<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="fam";
//     string s2="ily";
//     cout<<s1+s2<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="fam";
//     string s2="ily";
//     cout<<s1[0]<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string abc="hdfgskadgaiyqorejbca";
//     abc.clear();
//     cout<<abc;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abc";
//     string s2="xyz";
//     cout<<s2.compare(s1)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     // s1.clear();
//     // if(s1.empty()){
//     //     cout<<"string is empty ";
//     // }
//     s1.erase(2,2);
//     cout<<s1<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     cout<<s1.find("cd")<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     cout<<s1.insert(4 , "cd")<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     cout<<s1.size()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     for(int i=0;i<s1.length();i++){
//         cout<<s1[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="abcdef";
//     cout<<s1.substr(3,1)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s1="786";
//     int x=stoi(s1);
//     cout<<x+2<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int x=786;
//     cout<<to_string(x)+"2"<<endl;
//     return 0;
// }

// Sorting of String
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s1="mnbvcxzlkjhgfdaspoiuytrewq";
//     sort(s1.begin(),s1.end());
//     cout<<s1<<endl;
//     return 0;
// }

// String Challenge's

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str="vishal";
//     //convert into uppercase
//     for(int i=0;i<str.length();i++){
//         if(str[i] >= 'a' && str[i] <= 'z')
//         str[i]-=32;
//     }
//     cout<<str<<endl;   
// }

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string str="VISHAL";
//     //convert into lowercase
//     for(int i=0;i<str.length();i++){
//         if(str[i] >= 'A' && str[i] <= 'Z')
//         str[i]+=32;
//     }
//     cout<<str<<endl;   
// }

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string s="abcdEFGH";
//     transform(s.begin(),s.end(),s.begin() , :: toupper);
//     cout<<s<<endl;
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     cout<<s<<endl;
//     return 0;

// }

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int main(){
//     string s="346459021";
//     sort(s.begin(),s.end(),greater<int>());
//     cout<<s<<endl;
//     return 0;

// }

//Maximum char occur
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "abhcderfghdseshjklasd";
//     int freq[26];
//     for(int i=0;i<26;i++)
//         freq[i]=0;
//     for(int i=0;i<s.size();i++)
//     freq[s[i]-'a']++;
//     char ans='a';
//     int maxF = 0;
//     for(int i=0;i<26;i++){
//         if(freq[i]>maxF){
//             maxF=freq[i];
//             ans=i+'a';
//         }
//     }
//     cout<<maxF<<"  "<<ans<<endl;
//     return 0;
// }


// Bit Manipulation

// Get Bit
// #include<iostream>
// using namespace std;
// int getbit(int n, int pos){
//     return ((n &  (1<<pos))!=0);
// }
// int main(){
//     cout<<getbit(5,2)<<endl;
//     return 0;
// }

// Set Bit
// #include<iostream>
// using namespace std;
// int setbit(int n , int pos){
//     return (n | (1<<pos));
// }
// int main(){
//     cout<<setbit(5,1)<<endl;
//     return 0;
// }

// clearbit
// #include<iostream>
// using namespace std;
// int clearbit(int n , int pos){
//     int mask = ~(1<<pos);
//     return (n & mask);
// }
// int main(){
//     cout<<clearbit(5,2)<<endl;
//     return 0;
// }

//updatebit (clearbit + setbit)
// #include<iostream>
// using namespace std;
// int updatebit(int n ,int pos ,int value){
//     int mask= ~(1<<pos);
//     n= n & mask;
//     return ( n | (value<<pos));
// }
// int main(){
//     cout<<updatebit(5,1,1)<<endl;
// }

// exapmle-Bit-manipulation
// write a program to check if a given no is power of 2 ?
// #include<iostream>
// using namespace std;
// bool ispowerof2(int n){
//     return (n && !(n & n-1));
// }
// int main(){
//     cout <<ispowerof2(16)<<endl;
//     return 0;
// }

//write a program to count the number of ones in binary represents of a number
// #include<iostream>
// using namespace std;
//  int numberofones(int n){
//         int count=0;
//         while(n){
//             n=n&(n-1);
//             count++;
//         }
//         return count;
//     }
// int main(){
//     cout<< numberofones(19)<<endl;
//     return 0;
// }

//write a program to generate all possible subsets of a set
// #include<iostream>
// using namespace std;
// void subsets(int arr[] , int n){
//     for(int i=0;i< (1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }
// int main(){
//     int arr[4]={1,2};
//     subsets(arr , 2);
//     return 0;
// }

//write a program to find a unique number in an array where al numbers except one are present twice;
// #include<iostream>
// using namespace std;
// int unique(int arr[] , int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     return xorsum;
// }
// int main(){
//     int arr[]={5 , 10};
//     cout<<unique(arr , 2)<<endl;
//     return 0;
// }

//write a program to find a two unique no in an array
// #include<iostream>
// using namespace std;
// int setBit(int n, int pos) {
// return ((n & (1 << pos)) != 0);
// }
// void unique(int arr[], int n) {
// int xorsum = 0;
// for (int i = 0; i < n; i++) {
// xorsum = xorsum ^ arr[i];
// }
// int tempxor = xorsum;
// int setbit = 0;
// int pos = 0;
// while (setbit != 1) {
// setbit = xorsum & 1;
// pos++;
// xorsum = xorsum >> 1;
// }
// int newxor = 0;
// for (int i = 0; i < n; i++) {
// if (setBit(arr[i], pos - 1)) {
// newxor = newxor ^ arr[i];
// }
// }
// cout << newxor << endl;
// cout << (tempxor ^ newxor) << endl;
// }
// int main() {
// int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
// unique(arr, 8);
// return 0;
// }


// #include<iostream>
// using namespace std;

// bool getbit(int n , int pos){
//     return ((n & (1<<pos))!=0);
// }
// int setbit(int n , int pos){
//     return (n | (1<<pos));
// }

// int unique(int arr[] , int n){
//     int  result=0;
//     for(int i=0;i<64;i++){
       
//        int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit(arr[j] , i)){
//                 sum++;
//             }
//         }
//         if(sum%3!=0){
//             result = setbit(result ,i);
//         }
//     }
//     return result;
// }
// int main(){
//     int arr[]={1,2,3,4,1,2,3,1,2,3};
//     cout<<unique(arr,10)<<endl;
// }

// Sieve of  Erathosthenes

// #include<iostream>
// using namespace std;
// void primeSieve(int n){
//     int Prime[100]= {0};
//     for(int i=2;i<=n;i++){
//         if(Prime[i]==0){
//             for(int j=i*i ; j<=n ; j+=i){
//                 Prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(Prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     primeSieve(n);
//     return 0;
// }

//Prime Factorization using sieve
// #include<iostream>
// using namespace std;
// void primefactor(int n){
//     int spf[100]={0};
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++){
//         if (spf[i]==i){
//             for (int j=i*i;j<=n;j+=i){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     primefactor(n);
//     return 0;
// }

//Recursion
//when a function call itself to mare its problem short
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int prevsum=sum(n-1);
//     return (n+ prevsum);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }

//Calculate n raised to power p
// #include<iostream>
// using namespace std;
// int power(int n, int p){
//     if(p==0){
//         return 1;
//     }
//     int prevpower=power(n,p-1);
//     return n*prevpower;
// }
// int main(){
//     int n,p;
//     cin>>n>>p;
//     cout<<power(n,p)<<endl;
//     return 0;
// }

//Find the factorial of a number
// #include<iostream>
// using namespace std;
// int fac(int n){
//     if(n==0){
//         return 1;
//     }
//     int prevfact = fac(n-1);
//     return n*prevfact;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fac(n)<<endl;
//     return 0;
// }

//print the nth fibonacci number
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }


// cf-2 way to long words

#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int size=s.size();
    if(size>10)
    cout<<s[0]<<size-2<<s[size-1]<<endl;
    else
    cout<<s<<endl;
    }
    return 0;
}