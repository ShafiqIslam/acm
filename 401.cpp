// UVA #401 - Palindromes
#include<cstdio>
#include<iostream>
#include<map>
 
using namespace std;

string c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string r = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool is_palindrome(string s)
{   
    for(int i = 0; i<( s.length()/2 ) + ( s.length()%2 ); i++)
    {
        if(s[i] != s[s.length()-1-i])
            return 0;        
    }
    return 1;        
}

bool is_mirroed(string s)
{
	for(int i = 0; i<( s.length()/2 ) + ( s.length()%2 ); i++)
    {
    	int j;
        for(j=0; j<c.length(); j++)
        	if(s[i]==c[j])
        		break;
        cout<<j;	
        //if(s[i] != r[j])
        //    return 0;        
    }
    return 0; 
}



int main()
{
	string input;
	while(cin>>input)
	{
		is_palindrome(input);
		is_mirroed(input);
		cout<<endl<<endl;
		
	}

	return 0;
}

