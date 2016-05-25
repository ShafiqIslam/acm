// UVA #119 - Greedy Gift Givers

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findindex(std::vector<std::string> &input, std::string searched) 
{

    for (int i = 0; i < input.size(); i++) 
    {
        if (input[i] == searched)
            return i;
    }

    
}

int main()
{
    int money[10];
    bool firstOutput = true;
    
    int person;
    while(cin>>person)
    {
        // avoid printing leading whitespace
        if (!firstOutput) 
            std::cout << std::endl;
        else 
            firstOutput = false;

        std::vector<std::string> names;
        string name;
        for(int i=0; i<person; i++)
        {
            money[i] = 0;
            cin >> name;
            names.push_back(name);
        }
        
        for(int i=0; i<person; i++)
        {
            string giver_name;
            int amount,per_head,no_of_receiver,extra=0;
            cin>>giver_name;
            int p_g = findindex(names,giver_name);
            cin>>amount;
            cin>>no_of_receiver;
            if(no_of_receiver != 0)
            {
                per_head = amount/no_of_receiver;
                if(amount % no_of_receiver != 0)
                    extra = amount % no_of_receiver;
            }
            else
                extra = amount;
                
            for(int j=0; j<no_of_receiver; j++)
            {
                string receiver_name;
                cin>>receiver_name;
                int p_r = findindex(names,receiver_name);
                money[p_r] = money[p_r] + per_head;
            }
            
            money[p_g] = money[p_g] - amount + extra;
        }
        
        for(int i=0; i<person; i++)
            cout << names[i] << " " << money[i] << endl;
    }
    
    return 0;
}