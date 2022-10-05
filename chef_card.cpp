#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef vector <int> vi;
//ull c=0;
//ull k=0;
int cal(int N)
{
    int k=0;
    while(N>0)
    {
        k+=N%10;
        N=N/10;       
    }
  //  cout<<"k is "<<k<<endl;
    return k;
}
int fun(vi arr, vi mar,int n)
{
    int A=0,B=0;
    int C=0,D=0;
    for(int i=0;i<n;i++)
    {
        A=cal(arr[i]);
        
        B=cal(mar[i]);
      //  cout<<A<<" "<<B<<endl;
        if(A>B)
            {C++;}
        else if(B>A)
            {D++;}
        else
            {C++;D++;}
        
      //  cout<<C<<" "<<D<<endl;
    }
    if(C>D)
    {
        cout<<"0 "<<C<<endl; 
    }
    else if(D>C)
    {
        cout<<"1 "<<D<<endl;
    }
    else
    {
        cout<<"2 "<<C<<endl;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,t;
        cin>>n;
        t=n;
        vi vec,mec;
        while(n--)
        {
            cin>>a>> b;
            vec.emplace_back(a);
            mec.emplace_back(b);
        }
        fun(vec,mec,t);
        vec.clear();
        mec.clear();
    }
    return 0;
}