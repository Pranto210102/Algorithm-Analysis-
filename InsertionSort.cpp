#include<bits/stdc++.h>
using namespace std;
void Sort_fnc(int a[], int n)
{
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>0 && a[j]>key)
        {
            a[j+1]=a[j];
            j-=1;
            a[j+1]=key;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[10]={1,6,3,7,4,3,9,8,8,2};
    Sort_fnc(a, 10);
}