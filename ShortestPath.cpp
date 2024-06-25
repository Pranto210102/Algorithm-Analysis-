#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> v[], int dis[], int vis[], int d)
{
    vis[node] = 1;
    dis[node] = d;

    for (auto i : v[node])
    {
        if (vis[i] == 0)
        {
            dfs(i, v, dis, vis, d + 1);
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<int> v[node + 1];
    int dis[node + 1] = {0};
    int vis[node + 1] = {0};

    while (edge--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1, v, dis, vis, 0);

    for (int i = 1; i <= node; i++)
    {
        cout << 1 << "-> " << i << " = " << dis[i] << endl;
    }
}