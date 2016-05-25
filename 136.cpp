// UVA #136 - Ugly Numbers (TLA)

#include <iostream>
#include <string>
using namespace std;

unsigned long base[7] = {2,3,5,6,10,15,30};

bool is_base_ugly(unsigned long n)
{
    for(int i=6; i>=0; i--)
        if( n == base[i] )
            return 1;
            
    return 0;
}

bool is_ugly(unsigned long n)
{
    while(1)
    {
        if( is_base_ugly(n) )
            return 1;
            
        int i;
        for(i=6; i>=0; i--)
        {
            if( n % base[i] == 0 )
            {
                n=n/base[i];
                break;
            }
        }
        if(i<0)
            return 0;
    }
}

int main()
{
    unsigned long n = 1;
    int counter = 2;
    while(counter<=11)
    {
        n++;
        if(is_ugly(n))
            counter++;   
    }
    cout<<"The 1500'th ugly number is "<<n<<".";
    return 0;
}
