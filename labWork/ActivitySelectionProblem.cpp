#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>p;
    vector<int>s(n),f(n),ans;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>f[i];
        p.push_back({f[i],i});
    }
 
    sort(p.begin(), p.end());
    ans.push_back(p[0].second);
 
    int last=p[0].first;
 
    for(int i=1;i<n;i++)
    {
        if(s[p[i].second]>=last)
        {
            ans.push_back(p[i].second);
            last=p[i].first;
        }
    }
 
    cout<<ans.size()<<endl;
}
