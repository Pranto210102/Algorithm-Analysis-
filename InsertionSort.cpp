#include<bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void to_sort(int *a, int n)
{
     print(a, n); //before sort

    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 and a[j]>key) //Decrement loop
        {
            a[j+1]=a[j]; //shipt to add the key val
            j--;
        }
        a[j+1]=key; // fill the blank cell
        print(a, n);
    }
    print(a, n);
}
int main()
{
    int a[]{12,6,9,7,3,11,43,21};
    int n=sizeof(a)/sizeof(a[0]);
    to_sort(a, n);
}
