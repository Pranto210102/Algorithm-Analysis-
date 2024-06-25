#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>mat){
    int n=mat.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // if(mat[i][j]>1e7){
            //     cout<<"INF"<<" ";
            // }
            // else
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void FloyedWarshell(vector<vector<int>>mat){
    int n=mat.size();
   for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j]=min(mat[i][j], mat[i][k]+mat[k][j]);
        }
    }
   }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>>mat(n,vector<int>(n,1e7+1));
    while(e--)
    {
        int s,des,w;
        cin>>s>>des>>w;

        mat[s][des]=w;
    }
    for(int i=0;i<n;i++)
    mat[i][i]=0;
    
    print(mat);
    cout<<endl;

    FloyedWarshell(mat);

    print(mat);
}