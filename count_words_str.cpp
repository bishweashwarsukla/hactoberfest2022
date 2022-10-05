#include<bits/stdc++.h>
using namespace std;
int main()
{
      string a="My name sonu is sonu";
      string word;
      stringstream ss(a);
      map<string,int> fw;
      while(ss>>word)
      {
            fw[word]++;
      }
      map<string,int>::iterator i;
      for(i=fw.begin();i!=fw.end();i++)
      {
            cout<<i->first<<" "<<i->second<<endl;
      }
      return 0;
}