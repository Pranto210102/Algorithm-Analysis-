#include<bits/stdc++.h>
using namespace std;
double true_error(double  true_value, double approximation)
{
    double E_t=true_value-approximation;
     return E_t;
}

double relative_error(double E_t, double true_value)
{
    return E_t/true_value;
}

double true_percent_r_e(double true_value, double approximation){
    return ((true_value-approximation)/true_value)*100;
}
int main()
{
      double true_value,approximation;
      cout<<"Give True Value : ";
      cin>>true_value;
      cout<<endl;
      cout<<"Give Approximation : ";
      cin>>approximation ;
      cout<<endl;

      cout<<"True (absulute) error = ";
      double E_t=true_error(true_value, approximation);
      cout<<E_t<<endl;

      double r_error=relative_error(E_t, true_value);
      cout<<"True relative error = ";
      cout<<r_error<<endl;

     double t_p_r_e=true_percent_r_e(true_value, approximation);
     cout<<"true percent relative error = ";
     cout<<t_p_r_e <<"%"<<endl;


}