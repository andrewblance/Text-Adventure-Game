#include "header.h"
using namespace std;

vector<Menu> game{
    Menu("start",    //Level Name

        "Would you like to go to the First Level or the Second Level, YourName?",   //Text that will be displayed

        "That was not an option",       //What will be displayed if you type something that isnt an option

        vector<tuple <string, string,string> >{
        {"first_level", "1", "Empty"}, {"second_level", "2", "shoes"}},   //Options that can be chosen, and the level you will be sent to
        vector<string>
        {"poop", "shoes"}),


    Menu("1",
        "You're now at level 1",   
        "oops",   //this is the last level, so this part is not needed
        vector<tuple <string, string, string> >{
        {"3","3", "Empty"}, {"4","4", "Empty"}},
        vector<string>{
	}),

    Menu("2",
        "You're now at level 2",
	"",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
	}),

    Menu("3",
        "Youre now at level 3",
    "",
        vector<tuple <string, string, string> >{
        },
        vector<string>{
    })

};

