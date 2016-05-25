// UVA #674 - Coin Change

#include <cstdio>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
 
int coins[5]={50,25,10,5,1};
#define MAXcoins 7489
long long int preserve[MAXcoins+1];
 
void count()
{
    int i,j;
    preserve[0]=1;
    for(i=0; i<5; i++)
        for(j=coins[i]; j<=MAXcoins; j=j+1)
            preserve[j] = preserve[j] + preserve[ j-coins[i] ];
}
 
int main()
{
    count();
    int input;
  
    while(cin>>input)
        cout<<preserve[input]<<endl;
    return 0; 
}