#include<bits/stdc++.h>
using namespace std;
void print(int *a , int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int partition_func(int *a, int lb, int ub)
{
    int key=a[lb];
    int start=lb;
    int end=ub;

    while(start<end)
    {
        while(a[start]<=key)
        {
            start++;
        }
        while(a[end]>key)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start], a[end]);
        }
    }
     
    swap(a[lb], a[end]);

    return end;
}
void QuickSort(int *a, int lb, int ub)
{
    if(lb<ub)
    {
        int loc=partition_func(a, lb, ub);

        QuickSort(a, lb, loc-1);
        QuickSort(a, loc+1, ub);
    }
}
int main()
{
    int a[]{4,1,7,2,45,32,7,2,7};
    int n=sizeof(a)/sizeof(a[0]);

    QuickSort(a, 0, n-1);

    print(a, n);
}