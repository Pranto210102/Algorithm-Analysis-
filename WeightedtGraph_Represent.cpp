#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        for(auto it=adj[i].begin();it!=adj[i].end();it++)
        {
            int x=it->first;
            int y=it->second;

            cout<<i <<" "<<x<<" "<<y<<endl;
        }
    }
}
int main()
{
    int v,ed;
    cin>>v>>ed;

    vector<pair<int,int>>adj[v];

    while(ed--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }

    print(adj, v);
}