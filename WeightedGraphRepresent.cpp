#include<bits/stdc++.h>
using namespace std;
void dfs(int node, int vis[], vector<pair<int,int>>adj[])
{
     cout<<node<<" : ";

     vis[node]=1;

     for(auto i : adj[node])
     {
        int nei=i.first;
        int w=i.second;
        cout<<" "<<nei<<" "<<w<<endl;
        if(!vis[nei])
        {
            
            dfs(nei, vis, adj);
        }
     }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>adj[n+1];
    while(e--)
    {
       int x,y,w;
       cin>>x>>y>>w;

        adj[x].push_back({y, w});

    }
      int vis[10]={0};

    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i, vis, adj);
        }
    }
}