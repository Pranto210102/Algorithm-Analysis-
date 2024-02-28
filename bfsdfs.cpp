#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visi[1000];
void dfs(int start)
{
    visi[start]=1;
    cout<<start<<"->";

    for(int i=0;i<v[start].size();i++)
    {
        int child=v[start][i];
        if(visi[child]==0)
        {
            dfs(child);
        }
    }
}
void bfs(int start, int node)
{
    vector<bool>vis(node+1, false);
    queue<int>q;
    vis[start]=true;
    q.push(start);
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        cout<<current<<" ";

        for(int i=0;i<v[current].size();i++)
        {
            int neighbor=v[current][i];
            if(!vis[neighbor])
            {
                vis[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    int x,y;
    while(edge--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(2,node);

    cout<<endl;

    dfs(3);
}