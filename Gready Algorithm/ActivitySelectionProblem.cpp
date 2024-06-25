#include<bits/stdc++.h>
using namespace std;
int comp(const pair<int,int>&a, const pair<int,int>&b)
{
    return a.second<b.second;
}
int solve(int s[], int f[], int n)
{
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
        p.push_back({s[i],f[i]});
    }

    sort(p.begin(), p.end(),comp);

    int cnt=1;
    int PrevF=p[0].second;
    for(int i=1;i<n;i++)
    {
        if(p[i].first>PrevF)
        {
            cnt++;
            PrevF=p[i].second;
        }
    }

    return cnt;
}
int main()
{
   int s[]{1,2,0,6,7,6};
   int f[]{2,4,6,7,9,7};

   int n=sizeof(s)/sizeof(s[0]);

   int ans=solve(s,f,n);

   cout<<ans<<endl;
    
}