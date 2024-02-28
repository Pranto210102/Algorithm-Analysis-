#include<bits/stdc++.h>
using namespace std;
double ap_e(double curr_ap, double prev_ap)
{
    return curr_ap-prev_ap;
}
double ap_r_e(double app_error, double curr_ap){
    return app_error/curr_ap;
}
double app_r(double curr_ap, double prev_ap){
     
     double ans=((curr_ap-prev_ap)/ curr_ap)*100;
     return ans;
}
int main()
{
    double curr_ap,prev_ap;
    cout<<"give current approximation ";
    cin>>curr_ap;
    cout<<"give previous approximation";
    cin>>prev_ap;

    double app_error=ap_e(curr_ap, prev_ap);
    cout<<"Approximate error : "<< app_error<<endl;

    double a_r=ap_r_e(ap_e(curr_ap, prev_ap), curr_ap);
    cout<<"Approximation relative error: "<<a_r<<endl;

    double l =app_r(curr_ap, prev_ap);
    cout<<"Approximate Percent error :" <<l<<endl;


}