#include <bits/stdc++.h>
using namespace std;
int main(){
    int row, col, a = 0;
    cin>>row>>col;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (i%2 == 0){
                cout<<"#";
            }else{
                if (a %2 == 0){
                    if (j == col-1){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if (j == 0)
                    {
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
            }
        }
        cout<<endl;
        if (i%2 == 0){
            a = a;
        }
        else{
            a++;
        }
          
        
    }
    
    return 0;
}