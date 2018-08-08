#include "header.h"
using namespace std;

vector<string> STORE;

void BagAdd(string& CH, vector<string>& VEC)
{
    //vector<string> items{"shoes", "poop"}; 
    CH.erase(0,8);
    if (find(VEC.begin(), VEC.end(), CH) != VEC.end())
    {
        if (STORE.size() == 3)
        {
            cout << "You have to much stuff in your bag!" << "\n";
        }
        else
        {
            cout << "You picked up " << CH << "\n";
            STORE.push_back(CH);
        }
    }
    else
    {
	    cout << "That isnt an item! \n";
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
    return;
}




