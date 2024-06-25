#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void floyd(vector<vector<int>>&v){
    int n=v.size();

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                v[i][j]=min(v[i][j], v[i][k]+v[k][j]);
            }
        }
    }
}
bool check(vector<vector<int>>&v){
    int n=v.size();

    for(int i=0;i<n;i++){
       if(v[i][i]<0)
       return false;
    }

    return true;
}
int main(){

    int inf=1e6;

    int n,e;
    cin>>n>>e;
    vector<vector<int>>v(n, vector<int>(n, inf)); 
    for(int i=0;i<n;i++)
    v[i][i]=0;
    while(e--)
    {
        int s,d,w;
        cin>>s>>d>>w;
        v[s][d]=w;
    }

    print(v);

    cout<<endl;

    floyd(v);

    bool ans=check(v);

    if(!ans)cout<<"Cycle detect"<<endl;

    else
     print(v);


}