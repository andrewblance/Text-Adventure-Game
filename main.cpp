#include "header.h"
using namespace std;

string YourName;

Menu::Menu(const string &name, 
           const string &situation,
           const string &excuse,
           const vector<pair <string, string> > &choices)
     : _name(name), _situation(situation), _excuse(excuse), _choices(choices)
{}

const bool Menu::operator==(const string &name) 
{
    return name == _name;
}

const void Menu::Present_Choice() 
{
    cout << "You can choose from: \n";
    for(auto ch : _choices)
    {
        cout << ch.first << "\n";
    } 
}

const void Menu::No_Choice() 
{
    cout << _excuse << "\n";
}

const void Menu::Enter_String()
{
    getline(cin,choice);

    for (int i=0; i<choice.length(); i++)
    {
        choice[i]=tolower(choice[i]);
        if (choice[i] == ' ')
        {
            choice[i] = '_';
        }
    }

    if (choice == "exit")
    {
        exit(0);
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}

const string& Menu::Explain_Choice() 
{
    replaceAll(_situation, "YourName", YourName);

    if (_choices.size() == 0 )
    {
        cout << _situation << "\n";
        exit(0);
    }
   
    cout << _situation << "\n";

    int j;
    j=0;
    
    Menu::Enter_String();
    
    while ( j < _choices.size() )
    {
        if ( choice == _choices[j].first)
        {
            break;
        }
        if ((j+1) == _choices.size())  
        {
            Menu::No_Choice();
            Menu::Present_Choice();
            Menu::Enter_String();
            j = -1;
        }
       j++;
    } 
    
    return _choices[j].second;
}

Menu::~Menu()
{}

int main()
{
    cout << " \n\n";
    cout << "-------------------------------- \n";
    cout << "------ Name Of Your Game ------- \n";
    cout << "-------------------------------- \n\n\n";
    cout << "A little bit of intro text \nHere I ask ''what is your name?'' \n\n";
	
    getline(cin, YourName);
    if (YourName == "Exit")
    {
        exit(0);
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << "You can then make the game say what you have said your name is by using ''YourName'' \nFor example: oh, your name is: " << YourName << ", I guess thats a pretty neat name! \n\n"; 
    cout << "(If you type ''Exit'' anytime you can leave the game)\n\n";

    auto menu = find( game.begin(), game.end(), "start");
    while (menu != game.end())
        menu = find(game.begin(), game.end(), menu -> Explain_Choice());
    return 0;
}
