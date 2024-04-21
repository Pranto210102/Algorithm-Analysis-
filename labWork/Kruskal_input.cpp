#include<bits/stdc++.h>
using namespace std;

struct edg
{
    int u, v, w;

    bool operator<(const edg& other) const
    {
        return w < other.w;
    }
};

int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<edg> e(edge);
    for(int i = 0; i < edge; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        e[i].u = x;
        e[i].v = y;
        e[i].w = z;
    }
    sort(e.begin(), e.end());

    for(int i = 0; i < edge; i++)
    {
        int x = e[i].u;
        int y = e[i].v;
        int z = e[i].w;

        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
