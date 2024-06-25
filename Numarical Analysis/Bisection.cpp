#include<bits/stdc++.h> 
using namespace std;
int func(int x){
    return x * x - 4;
}
int Error(int a, int b){
    return abs((a-b)/a);
}
int iter = 0;
int Bisection(int a, int b, int error){
    int c = 0;
    while(Error(a, b) > error){
        c = (a + b) / 2;
        cout << iter << "\t" << a << "\t" << b << "\t" << c << '\t' << fixed << setprecision(4) << Error(a,b) << '\n';
        if(func(c) == 0){
            return c;
        }
        else if(func(c) * func(a) < 0){
            b = c;
        }
        else{
            a = c;
        }
        iter++;
    }
    cout << " the root of the equation is : " << '\n';
    return c;
}

int main(){
    int a = 3; int b = 0; int error = 0.01;
    cout << "Bisection Method" << '\n';
     cout <<Bisection(a,b,error);
    
}