// UVA #152 - Tree's a Crowd

#include <cstdio>  
#include <cmath>  
#include <cstring>  
#include <iostream>
#include <iomanip>

using namespace std;

int x[5005],y[5005],z[5005],histogram[11];

int distance_of(int a, int b)
{
	int dx = x[a] - x[b];
	int dy = y[a] - y[b];
	int dz = z[a] - z[b];
	return (int)sqrt( dx*dx + dy*dy + dz*dz );
}

int main()
{
	int i;
	for(i=0; i<10; i++)
		histogram[i] = 0;

	i=0;
	while(cin>>x[i]>>y[i]>>z[i])
	{
		if(!x[i] && !y[i] && !z[i])
			break;
		i++;
	}
	
	for(int j=0; j<i; j++)
	{
	    int min = 1000;
	    int d;
	    for(int k=0; k<i; k++)
	    {
	        if(j==k)
	            continue;
	        d = distance_of(j,k);
	        if (d < min) 
                min = d;
	    }
	    if(min>=0 && min<=9)
	        histogram[min]++;
	}

	for(i=0; i<10; i++)
		cout<<setw(4)<<histogram[i];

	cout<<endl;
	return 0;
}