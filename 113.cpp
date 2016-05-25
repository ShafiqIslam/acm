// UVA #113 - Power of Cryptography

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cctype>
#include <math.h>
using namespace std;

int main() 
{
    double n, p;

    while(scanf("%lf%lf",&n,&p) == 2) 
    {
       printf("%.0lf\n",pow(p,1/n));
    }

    return 0;
}