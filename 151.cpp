// UVA #151 - Power Crisis

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int N;
    bool selected[102];
    while(1)
    {
        cin>>N;
        if(N == 0) break;
        else if( N == 13 )
        {
            cout<<"1"<<endl;
            continue;
        }
        
        for(int i=1; i<=N; i++)
            selected[i] = 0;
        
        int m = 2, total_selected = 0;
        int pos = 1;
        
        while(1)
        {
            selected[pos] = 1;
            total_selected++;
            
            if(pos == 13 && total_selected == N)
                break;
            else if(pos == 13)
            {
                m++;
                pos = 1;
                total_selected = 0;
                for(int i=1; i<=N; i++)
                    selected[i] = 0;
                continue;
            }
                
            for(int i=1; i<=m; )
            {
                pos = (pos==N) ? 1 : pos+1 ;
                if(!selected[pos])
                    i++;
            }
            
        }

        cout<<m<<endl;
    }
}
