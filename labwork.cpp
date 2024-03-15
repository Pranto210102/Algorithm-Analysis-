#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];
int dis[1000];

void bfs(int s, int node) {
    vector<bool> vis(node + 1, false);
    queue<int> q;
    vis[s] = true;
    q.push(s);
    dis[s] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << "cost " << curr << " " << dis[curr] << "\n";

        for (int i = 0; i < v[curr].size(); i++) {
            int nei = v[curr][i];
            if (!vis[nei]) {
                vis[nei] = true;
                q.push(nei);
                dis[nei] = dis[curr] + 1;
            }
        }
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;
    int x, y;

    while (edge--) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int s;
    cin >> s;
    bfs(s, node);
    vector<int>path; 

    for (int i = 0; i <node; i++) {
        cout << "path " << s << " to " << i << " is: ";
        int curr = i;
         vector<int> path;

        while (curr != s) {
            path.push_back(curr);

            for (int j = 0; j < v[curr].size(); j++) {
                if (dis[v[curr][j]] == dis[curr] - 1) {
                    curr = v[curr][j];
                    break;
                }
            }
        }

        path.push_back(s);
        reverse(path.begin(), path.end());

        for (auto k : path)
            cout << k << " ";
        cout << endl;

       
    }

}
