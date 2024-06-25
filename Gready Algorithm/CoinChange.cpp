#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>coins={1,5,10,25};

    sort(coins.rbegin(),coins.rend());

    int amount;
    cin>>amount;

    int numOfcoins=0;
    
    for(int coin : coins)
    {
        while(coin<=amount)
        {
            amount-=coin;
            numOfcoins++;
        }

        if(amount==0)
        break;
    }

    cout<<numOfcoins<<endl;


}