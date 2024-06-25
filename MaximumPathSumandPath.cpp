#include<bits/stdc++.h>
using namespace std;
int func(int i, int j, vector<vector<int>>&a, int sum,  vector<pair<int, int>>& path)
{

    if(i>1 || j>a[0].size()-1)
    return sum;
    
    vector<pair<int, int>> r;
    vector<pair<int, int>> l;
    
    int right=func(i,j+1,a, sum+a[i][j], r);
    int down= func(i+1,j,a, sum+a[i][j], l);

    if (right > down) {
        path = r;
    } else {
        path = l;
    }

    path.push_back({i, j});

    return max(right, down);
    
}
void solve()
{
    int m;
    cin>>m;
     vector<pair<int, int>> path;
    vector<vector<int>>a(2, vector<int>(m));

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    int ans=func(0,0,a, 0, path);


    for(auto i : path)
    {
        int x=i.first;
        int y=i.second;

        a[x][y]=0;
    }

    int res=func(0,0,a, 0, path);


    cout<<res<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}