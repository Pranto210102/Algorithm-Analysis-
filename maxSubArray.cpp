#include<bits/stdc++.h>
using namespace std;
int find_max_sub(int a[],int mid, int low, int high)
{
    int mx_sum=INT_MIN;
    int curr_sum=0;
      for(int i=mid;i>=low;i--)
      {
          curr_sum+=a[i];
          mx_sum=max(mx_sum, curr_sum);
      }

      curr_sum=0;
      for(int i=mid+1;i<=high;i++)
      {
        curr_sum+=a[i];
        mx_sum=max(mx_sum, curr_sum);
      }
      return mx_sum;
   
}
int find_mx(int a[], int low, int high)
{
    if(low==high)
    return a[low];
    if(low>high)
    return INT_MAX;

     int mid=(low+high)/2;
    return max(find_max_sub(a, mid, low, high), max(find_mx(a, low, mid-1), find_mx(a, mid+1, high)));

}
int main()
{
    int a[6]={-2,5,-3,-1,4,3};
    int n=6;

    int ans=find_mx(a, 0, n-1);
    
}