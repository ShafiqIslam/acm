// UVA #147 - Dollars
// (WA)

#include <cstdio>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
 
int coins[11]={2000,1000,400,200,100,40,20,10,4,2,1};
#define MAXcoins 6400
long long int preserve[MAXcoins+1];
 
void count()
{
    int i,j;
    preserve[0]=1;
    for(i=0; i<11; i++)
        for(j=coins[i]; j<=MAXcoins; j=j+1)
            preserve[j] = preserve[j] + preserve[ j-coins[i] ];
}
 
int main()
{
    count();
    double input;
  
    while(cin>>input)
    {
        if(input == 0)
            break;
        input = input*100;
        input = input/5;

        int i = (int)input;
        cout<<fixed<<setw(6)<<setprecision(2)<<input/20;
        cout<<fixed<<setw(17)<<preserve[i]<<endl;
    }
    return 0; 
}