#include "header.h"
using namespace std;

Menu::Menu(const string &name, 
           const string &situation,
           const string &excuse,
           const vector<tuple <string, string, string> > &choices,
           const vector<string> &items   )
     : _name(name), _situation(situation), _excuse(excuse), _choices(choices), _items(items)
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
        cout << get<0>(ch) << "\n";
    } 
}

const void Menu::No_Choice() 
{
    cout << _excuse << "\n";
}

const void Menu::Enter_String()
{
    getline(cin,choice);

    ofstream myfile;
    myfile.open (YourName, ios_base::app); 
    myfile << choice << ";" << endl;
    myfile.close();

    for (int i=0; i<choice.length(); i++)
    {
        choice[i]=tolower(choice[i]);
        if (choice[i] == ' ')
        {
            choice[i] = '_';
        }
    }
 
    if (choice.find("pick_up") != string::npos )
    {
	string ItemChoice = choice;
	BagAdd(ItemChoice, _items); 
	Menu::Enter_String();
    }

    else if (choice.find("check_bag") != string::npos)
    {
	BagExplain(STORE);
	Menu::Enter_String();
    }

    else if (choice.find("drop") != string::npos)
    {
    string ItemChoice = choice;
    BagRemove(ItemChoice, STORE);
    Menu::Enter_String();
    }

    else if (choice == "exit")
    {
        exit(0);
    }

    else if (choice == "instructions")
    {
        INST();
    }

    else
    {
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
}

const string& Menu::Explain_Choice() 
{
    replaceAll(_situation, "YourName", YourName);

    if (_choices.size() == 0 )
    {
        cout << _situation << "\n";
        cout << "The End" << "\n";
        exit(0);
    }
   
    cout << _situation << "\n";

    int j;
    j=0;
    TryAgain:
    Menu::Enter_String();
    
    while ( j < _choices.size() )
    {
        if ( choice == get<0>(_choices[j]))
        { 
            if (find(STORE.begin(), STORE.end(), get<2>(_choices[j])) != STORE.end() or get<2>(_choices[j]) == "Empty")
            {
                break;
            } else {
                cout << "you do not have the required item to do this!" << "\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                goto TryAgain; 
                }
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
    return get<1>(_choices[j]);
}

Menu::~Menu()
{}

int main()
{    
        
    intro_txt();

    auto menu = find( game.begin(), game.end(), "start");
    while (menu != game.end())
        menu = find(game.begin(), game.end(), menu -> Explain_Choice());
    
    return 0;
}
