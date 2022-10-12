
class Solution{
public:
    string decodedString(string s){
        // code here
        
        string ans="";
        stack<char> str;
        str.push(s[0]);
        
        for(int i = 1; i<s.size(); i++){
            
            if(s[i]== ']'){
                
                while(!str.empty() && str.top()!= '['){
                    
                    ans = str.top() + ans;
                    str.pop();
                }
                
                if(!str.empty())
                str.pop();
                
                string rnum="";
                
                while(!str.empty() && str.top()>='0' && str.top()<='9'){
                    
                    rnum = str.top()+rnum;
                    str.pop();
                }
                
                string sr = ans;
                for(int j = 0; j<stoi(rnum)-1; j++){
                    
                    ans+=sr;
                }
                
                for(auto x:ans){
                    
                    str.push(x);
                }
                
                ans="";
            }
            
            else{
                
                str.push(s[i]);
            }
        }
        
        ans="";
        
        while(!str.empty()){
            
            ans = str.top()+ans;
            str.pop();
        }
        
        return ans;
    }
};
