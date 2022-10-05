#include<bits/stdc++.h>
using namespace std;
int main()
{
      
     // vector <vector<int>> fir;
     vector <int> sec;
      int n,q,k,a,b;
      cin>>n >>q;
      int *fir[n];
      for(int i=0;i<n;i++)
      {     cin>> k;
            fir[i]= new int[k];
            
           // sec.push_back(n);
            for(int j=0;j<k;j++)
            {
                  cin>> fir[i][j];
                  //sec.push_back(m);
            }
           // fir.push_back(sec);
      }
     // cout<<"\n\n\n";
      //cout<<fir[0][2];
      while(q--)
      {
            cin>> a>> b;
            sec.push_back(fir[a][b]);
      }
      for(int i=0;i<sec.size();i++)
      {
            cout<<sec[i];cout<<endl;
      }
return 0;
}
