// UVA #147 - Dollars
// (Accepted)

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
    float input;
  
    while(scanf("%f", &input) == 1 && input)\
    {
        unsigned coin = (unsigned)((input + 0.001) * 100);
        printf("%6.2f%17lld\n", input, preserve[coin/5]);
    }

    return 0; 
}