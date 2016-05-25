#include <iostream> 
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

int main()
{
    char code[55],copy_code[55];
    int i,k,j,len,yes,hold;
    
    while(1)
    {
        cin>>code;
        if(code[0] == '#')
            break;
            
        len=strlen(code);
        yes=0;
        for(i=len-1;i>0;i--)
        {
            if(code[i]>code[i-1])
            {
                yes=1;
                hold=i-1;
                break;
            }
        }
        
        if(yes==0)
            cout<<"No Successor\n";
        else 
        {
            // first part becomes unchanged
            // separate in two parts
            // output the first part
            for(i=0; i<hold; i++)
                cout<<code[i];
                
            // detach the second part
            j=0;
            for(i=hold; i<len; i++)
            {
                copy_code[j] = code[i];
                j++;
            }
            copy_code[j]='\0';
            
            // sort the second part
            len=strlen(copy_code);
            for(i=1; i<len; ++i)
            {
                for(j=len-1; j>=i; --j)
                {
                    if( copy_code[j-1] > copy_code[j] )
                    {
                        char temp = copy_code[j-1];
                        copy_code[j-1] = copy_code[j];
                        copy_code[j] = temp;
                    }
                }
            }
            //cout<<copy_code;return 0;
            
            // output the next bigger digit than first digit of second part
            for(i=0; i<len; i++)
            {
                if( copy_code[i] > code[hold] )
                {
                    cout<<copy_code[i];
                    break; 
                }
            }
            
            // output the rest without the last outputed one
            for(j=0; j<len; j++)
                if(j!=i)
                    cout<<copy_code[j];
                    
            cout<<endl;
        } 
    }
    return 0;
}