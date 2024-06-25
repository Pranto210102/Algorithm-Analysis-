#include<bits/stdc++.h>
using namespace std;
void print(int *a, int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void bubleSort(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
       
    }
}
int main()
{
    int a[]{4,1,6,9,3,7,1,12,2};
    int n=sizeof(a)/sizeof(a[0]);

    bubleSort(a, n);

    print(a, n);
}