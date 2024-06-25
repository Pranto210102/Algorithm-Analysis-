#include<bits/stdc++.h>
using namespace std;
vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
     vector<int>dis(V, 1e8);
        
        dis[S]=0;
        
        for(int i=0;i<V-1;i++)
        {
            for(auto it : edges)
            {
                int u=it[0];
                int v=it[1];
                int wt=it[2];
                
                if(dis[u]!=1e8 and dis[u]+wt<dis[v]){
                    dis[v]=dis[u]+wt;
                }
            }
        }
        
        for(auto it : edges)
        {
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            
            if(dis[u]!=1e8 and dis[u]+wt<dis[v]){
                return {-1};
            }
        }
        
        return dis;

    }

    int main()
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>edges;

        for(int i=0;i<m;i++)
        {
            vector<int>tmp;
            for(int j=0;j<3;j++)
            {
                int x;
                cin>>x;
                tmp.push_back(x);
            }
            edges.push_back(tmp);
        }

        int s;
        cin>>s;

        vector<int>ans=bellman_ford(n,edges,s);

        for(auto x : ans)
        cout<<x<<" ";
        cout<<endl;
    }