class solution{
public:
	bool dfs(vector<int> adj[], vector<bool> &vis, int child, int paren){
		for(auto edges : adj[child]){
			if(!vis[edges]){
				vis[edges] = true;
				if(dfs(adj, vis, edges, child))
					return true;
			} else if(edges != parent){
				return true;
			}
		}
		return false;
	}
	bool isCyclic(vector<int> adj[], int V){
		vector<bool> vis(V, false);
		for(int i = 0; i < V; i++){
			if(!vis[i]){
				vis[i] = true;
				if(dfs(adj, vis, i, -1))
					return true;
			}
		}
		return false;
	}
};