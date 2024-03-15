#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int *left, int *right, int left_size, int right_size)
{
    int l=0, r=0, f_size=0;

    while(l<left_size && r<right_size)
    {
        if(left[l]>right[r])
        {
            arr[f_size++]=left[l++];
        }
        else{
            arr[f_size++]=right[r++];
        }
    }
    while(l<left_size)
    {
        arr[f_size++]=left[l++];
    }
    while(r<right_size)
    {
        arr[f_size++]=right[r++];
    }
}
void Print(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void mergeSort(int *arr, int size)
{
    if(size<=1)
     return;

     int mid=size/2;
     int left[mid];
     int right[size-mid];

     for(int i=0;i<mid;i++)
     {
        left[i]=arr[i];
     }
     for(int i=mid;i<size;i++)
     {
        right[i-mid]=arr[i];
     }

     mergeSort(left, mid);
     mergeSort(right, size-mid);

     merge(arr, left, right, mid, size-mid);

}
int main()
{
    int a[]{1,2,9,2,4,2,13,1};
    int n=sizeof(a)/sizeof(a[0]);

    mergeSort(a, n);

    Print(a, n);
}