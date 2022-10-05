#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a {1,4,2,8,4,-3};
    vector <int> b {4,5,2,90,0};
    vector <int> c;
    int count=0;
    vector <int> :: iterator it;
    for(int i=0;i<a.size();i++)
    {   
        it=find(c.begin(),c.end(),a[i]);
        if(it!=c.end())
            break;
        else
        {
            c.push_back(a[i]);
            it=find(b.begin(),b.end(),a[i]);
            if(it!=b.end())
                {
                    count++;
                    cout<<*it<<" ";
                }
        }

    }
    cout<<"\n"<<count;
    return 0;
}