//move all negative elements to one side of array//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector  <int> v { -4,1,-5,11,3,2,-7,1,0,-14};
    int temp=0;
    int pt=0;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]<0)
        {
            if(i!=pt)
            {
                temp=v[i];
                v[i]=v[pt];
                v[pt]=temp;
            }
            pt++;
        }
    }
    for(auto x: v)
        cout<<x<<" ";
    return 0;
}