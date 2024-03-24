#include<bits/stdc++.h>
using namespace std;
void print(int *a, int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

void sort_func(int *a, int n)
{
    for(int j=n-1;j>=0;j--)
    {
        int mx=-1e7+1;
        int mx_ind=-1;
        for(int i=0;i<=j;i++)
        {
            if(a[i]>=mx)
            {
                mx=a[i];
                mx_ind=i;
            }
        }
        swap(a[j], a[mx_ind]);

        print(a, j);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
      print(a, n);
      cout<<endl;
    sort_func(a, n);
    print(a, n);
}