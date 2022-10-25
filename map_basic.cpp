#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string ,int > mp;
    vector <int> vec;
    int q,a,c;
    string b;
    cin>>q;
    while(q--)
    {
        cin>>a;
        switch (a)
        {
            case 1:
                cin>> b>> c;
                mp[b]=mp[b]+c;
                break;
            case 2:
                cin>> b;
                mp.erase(b);
                break;
            case 3:
                cin>> b;
                vec.push_back(mp[b]);
        }
    }
    for (auto x: vec)
    {
        cout<<x<<endl;
    }
    return 0;
}