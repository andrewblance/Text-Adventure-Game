#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

class Menu
{
    std::string _name, _situation, _excuse;
    std::vector<std::tuple <std::string, std::string, std::string>> _choices;
    std::vector<std::string> _items;

    public:
        Menu(const std::string &name,
             const std::string &situation,
             const std::string &excuse,
             const std::vector<std::tuple <std::string, std::string, std::string>>  &choices = std::vector<std::tuple <std::string,std::string, std::string>> {},
             const std::vector<std::string> &items = std::vector<std::string>{});
        virtual ~Menu ();
        const bool operator==(const std::string &name);
        const std::string& Explain_Choice();
        const void Enter_String();
        std::string choice;
	std::string ItemChoice;
        const void Present_Choice() ;
        const void No_Choice();
};

extern std::vector<Menu> game;
extern std::vector<std::string> STORE;
extern std::string YourName;

void replaceAll( std::string& str, const std::string& from, const std::string& to);
void BagAdd(std::string& CH, std::vector<std::string>& VEC);
void BagExplain(std::vector<std::string>& VEC);
void BagRemove(std::string& CH, std::vector<std::string>& VEC);
void intro_txt();
void INST();



#endif 

