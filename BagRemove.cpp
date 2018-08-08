#include "header.h"
using namespace std;

void BagRemove(string& CH, vector<string>& VEC)
{
    CH.erase(0,5);
    auto it = find(VEC.begin(), VEC.end(), CH);

    if (VEC.size() == 0)
    {
        cout << "Your bag is empty" << "\n";
    }
    else if ( it != VEC.end())
    {
        cout << "You dropped " << CH << " from your bag" << '\n';
        auto index = distance(VEC.begin(), it);
        VEC.erase(VEC.begin() + index);
    }
    else
    {
        cout << "Item not in bag!" << "\n";
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
    return;
}



