    #include<bits/stdc++.h>
    using namespace std;
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<vector<bool>>isVisited(mat.size(),vector<bool>(mat[0].size(),false));
        int m=mat.size(),n=mat[0].size();
//         R 0,+1
//         D +1,0
//         L 0,-1
//         U -1,0
        vector<vector<int>>Dir={{0,1},{1,0},{0,-1},{-1,0}};
        int k=0;
        int i=0,j=0;
        vector<int>ans;
        ans.push_back(mat[i][j]);
        isVisited[0][0]=true;
        while(ans.size()<mat.size()*mat[0].size()){
            int x=i+Dir[k][0],y=j+Dir[k][1];
            if(x<m && x>=0 && y<n && y>=0 && !isVisited[x][y]){
                isVisited[x][y]=true;
                ans.push_back(mat[x][y]);
                i=x,j=y;
            }
            else{
                k= (k+1)%4;
            }
        }
        return ans;
        
    }
    int main(){
    
        vector<vector<int>>mat={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        vector<int>ans=spiralOrder(mat);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    
        return 0;
    
    }
