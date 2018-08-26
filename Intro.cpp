#include "header.h"
using namespace std;

string YourName;

void INTRO()
{
    string INT;
    getline(cin, INT);

    for (int i=0; i<INT.length(); i++)
    {
        INT[i] = tolower(INT[i]);
    }

    if (INT == "exit")
    {
        exit(0);
    }

    else if (INT == "instructions")
    {
        INST();
        INTRO();
    }

    else if (INT == "play")
    {
        cout << "\n" << "hello buddy! \nmy name is robot, the friendly robot \nwhats your name?" << "\n";
        getline(cin, YourName);
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
    
    }

    else
    {
        cout << "oops, that wasn't an option!" << "\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
        INTRO();
    }
    return;
}


void intro_txt()
{
    cout << "\n\n" << "welcome to..." << "\n\n";
    cout << "--------------------------------" << "\n";
    cout << "----Robot The Friendly Robot----" << "\n";
    cout << "--------------------------------" << "\n\n";
    cout << "         > Play                 " << "\n";
    cout << "         > Instructions         " << "\n";
    cout << "         > Exit                 " << "\n";
    
    INTRO();
}


void INST()
{
    cout << "Robot is quite an easy game to play, don't worry!" << "\n";
    cout << "in the game you will be given a scenerio and all you have to do is choose what you would like to do, easy peasy!" << "\n";
    cout << "sometimes, there will be items you need to pick up to progress through the game. You can tell what these will be cause theyll be in BLOCK CAPS. The contents of your bag can be picked up, thrown away and checked using:" << "\n";
    cout << "       > 'pick up <item>' " << "\n";
    cout << "       > 'drop <item>'" << "\n";
    cout << "       > 'check bag'"  << "\n";
    cout << "finally, you can always exit the game or get the instructions back up at anytime by typing in 'Exit' or 'Instructions'" << "\n";
    cout << "have fun! :)" << "\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
    return;
}
