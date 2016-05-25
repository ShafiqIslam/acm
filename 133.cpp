// UVA #133 - The Dole Queue

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main()
{
    
    int n,k,m;
    
    bool a[21];
    
    while(1)
    {
        cin>>n>>k>>m;
        if(n==0 && k==0 && m==0 )
            break;
        
        for(int i=1; i<=n; i++)
            a[i] = 0;
            
        int pos_1 = 0; // counter clockwise
        int pos_2 = n+1; // clockwise
        
        int r = n;
        
        while(r)
        {
            int i=1;
            while( i <= k )
            {
                pos_1++;
                if(pos_1 > n)
                    pos_1 = 1;  
                if( !a[pos_1] )
                    i++;  
            }
            
            i=1;
            while( i <= m )
            {  
                pos_2--;
                if(pos_2 < 1 )
                    pos_2 = n;
                if( !a[pos_2] )
                    i++;
            }
            
            if( pos_1 != pos_2 )
            {
                r--;
                cout<<setw(3)<<pos_1;
                cout<<setw(3)<<pos_2;
            }
            else
                cout<<setw(3)<<pos_1;
                
            a[pos_1] = 1;
            a[pos_2] = 1;
            r--;
            
            if(r!=0)
                cout<<",";
            else
                cout<<endl;
        }
        
    }
    return 0;
}