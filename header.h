#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

class Menu
{
    std::string _name, _situation, _excuse;
    std::vector<std::pair <std::string, std::string> > _choices;
    public:
        Menu(const std::string &name,
             const std::string &situation,
             const std::string &excuse,
             const std::vector<std::pair <std::string, std::string> > &choices = std::vector<std::pair <std::string,std::string> >{});
        virtual ~Menu ();
        const bool operator==(const std::string &name);
        const std::string& Explain_Choice();
        const void Enter_String();
        std::string choice;
        const void Present_Choice() ;
        const void No_Choice();
};

extern std::vector<Menu> game;
void replaceAll( std::string& str, const std::string& from, const std::string& to);

#endif 

