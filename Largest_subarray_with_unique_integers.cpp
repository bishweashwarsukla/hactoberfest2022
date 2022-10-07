#include<bits/stdc++.h>
using namespace std;


int largest_unique_integer_subarray(int arr [],int size)
{
    int ans=0;
    int it1=0,it2=0;
    map<int,int>mp; //to store the count of unique integers.
    while(it2<size)
    {
        mp[arr[it2]]++;
        if(mp.size()==it2-it1+1) //condition is executed till time uniqueness is maintained
        {
            ans=max(ans,it2-it1+1);
            it2++;//increase window size.
        }
        else if(mp.size()<it2-it1+1) //condition executed when repeated integer is found
        {
            while(mp.size()<it2-it1+1)
            {
                mp[arr[it1]]--;
                if(mp[arr[it1]]==0){mp.erase(arr[it1]);}
                it1++;
            }
            it2++;
        }
    }
    return ans;
}

int main()
{
    int arr[10]={1,2,3,1,4,5,6,7,10,2};
    cout<<largest_unique_integer_subarray(arr,10);
}

