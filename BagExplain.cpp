#include "header.h"
using namespace std;

void BagExplain(vector<string>& VEC)
{
    cout << "So far you have picked up: " << "\n";
    if (VEC.size() == 0)
    {
        cout << "nothing!!" << "\n"; 
    }
    else
    {
        for (auto i = VEC.begin(); i != VEC.end(); ++i)
            cout << *i << ' ';
    }
    cout << "\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
    return;
}
