// UVA #357 - Let Me Count The Ways

#include <cstdio>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
 
int coins[5]={50,25,10,5,1};
#define MAXcoins 30000
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
    {   
        if(preserve[input]!=1)
            cout<<"There are "<<preserve[input]<<" ways to produce "<<input<<" cents change.\n";   
        else
            cout<<"There is only "<<preserve[input]<<" way to produce "<<input<<" cents change.\n";
    }
    return 0; 
}