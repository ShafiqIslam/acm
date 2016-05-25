// UVA #160 - Factors and Factorials

#include <cstdio>  
#include <cmath>  
#include <cstring>  
#include <iostream>
#include <iomanip>

using namespace std;

int primes[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int counter[25];

int main()
{
	int n,i,j,d,max_prime_pos;
	while(cin>>n && n)
	{
		max_prime_pos = -1;
		for(i=0; i<25; i++)
		    counter[i] = 0;
		
		for(i=2; i<=n; i++)
		{
			d = i;
			for(j=0; j<25; )
			{
				if(d<2)
				{
					if(max_prime_pos < j)
						max_prime_pos = j;
					break;
				}

				if( d%primes[j] == 0 )
				{
					counter[j]++;
					d = d/primes[j];
				}
				else
					j++;
			}
		}

		cout<<setw(3)<<n<<"! =";

		int line = 0;
		for(i=0; i<=max_prime_pos; i++)
		{
			if(line==15)
			{
				cout<<endl<<"      ";
				line=0;
			}
			cout<<setw(3)<<counter[i];
			line++;
		}
		cout<<endl;
	}

	return 0;
}