// UVA #146 - ID Codes

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
    char input_id[55];
    while(1)
    {
        cin>>input_id;
        if(input_id[0] == '#')
            break;
        
        if( !next_permutation( input_id, input_id+strlen(input_id) ) )
        {
            puts("No Successor");
            continue; 
        }
        puts(input_id);
    }
    return 0;
}