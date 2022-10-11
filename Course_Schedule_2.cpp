class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
	    for(auto i:prerequisites){
	        adj[i[1]].push_back(i[0]);
	    }
	    // BFS topo
	    queue<int> q;
	    vector<int> inDeg(numCourses, 0);
	    for(int i = 0; i < numCourses; i++){
	        for(auto j:adj[i]){
	            inDeg[j]++;
	        }
	    }
	    for(int i = 0; i < numCourses; i++){
	        if(inDeg[i] == 0)q.push(i);
	    }
	    vector<int> topo;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        for(auto i:adj[node]){
	            inDeg[i]--;
	            if(inDeg[i] == 0)q.push(i);
	        }
	    }
	    if(topo.size() == numCourses)
	    return topo;
	    return {};
    }
};
