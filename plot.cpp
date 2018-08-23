#include "header.h"
using namespace std;

vector<Menu> game{
    Menu("start",    //Level Name

        "oh, your name is YourName, I guess thats a pretty neat name! \n\nnow that we're friends YourName, I feel comfortable enough to tell you i'm thinking of maybe kinda taking over the world today. \n\nI have lots of fun plans for it! Would you like to help me?",   //Text that will be displayed

        "Aw darn I totally don't want to misinterpret what you're saying cause this is like pretty important, so if you can just choose from:",       //What will be displayed if you type something that isnt an option

        vector<tuple <string, string,string> >{
        {"yes", "Agree", "Empty"}, {"no", "Disagree", "Empty"}},   //Options that can be chosen, and the level you will be sent to
        vector<string>
        {}),


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

