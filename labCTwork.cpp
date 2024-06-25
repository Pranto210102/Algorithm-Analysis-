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
    for(int j=0;j<n;j++)
    {
        int mn=1e9+1;
        int mn_ind=-1;

        for(int i=j;i<n;i++)
        {
              if(a[i]<=mn)
              {
                mn=a[i];
                mn_ind=i;

              }
        }
        swap(a[j], a[mn_ind]);

        print(a, j);
    }
}
int main()
{
    int a[]{8,4,1,8,2,9,4};
    int n=sizeof(a)/sizeof(a[0]);

    sort_func(a, n);

    print(a, n);
}