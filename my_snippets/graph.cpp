// Finding cycle in (directed) graph
// Use colors, for example, white, grey and black.
// You can even find the edges in the cycle.
vector<vector<int>> Adj;
vector<int> V;  // To store color of vertices (visited)
bool flag=true;
void dfs(int u){
    V[u]=1; // GREY
    for(int v:Adj[u]){
        if(V[v]==1){ flag=false;  // Cycle detected
            // you found a cycle, it's easy to recover it now.
        }
        else if(V[v]==0) dfs(v);
    }
    V[u]=2; // BLACK
}

for(int i = 0; i < n; i++)
    if(color[i] == 0) dfs(i, -1); // IF NODE IS WHITE, START NEW DFS
    
//  Tarjan's strongly connected components algorithm
