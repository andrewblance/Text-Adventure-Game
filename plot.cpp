#include "header.h"
using namespace std;

vector<Menu> game{
    Menu("start",    //Level Name

        "Would you like to go to the First Level or the Second Level, YourName?",   //Text that will be displayed

        "That was not an option",       //What will be displayed if you type something that isnt an option

        vector<pair <string, string> >{
        {"first_level", "1"}, {"second_level", "2"}}),   //Options that can be chosen, and the level you will be sent to




    Menu("1",
        "You're now at level 1",   
        "",   //this is the last level, so this part is not needed
        vector<pair <string, string> >{
        }),

    Menu("2",
        "You're now at level 2",
	"",
        vector<pair <string, string> >{
        })

};

