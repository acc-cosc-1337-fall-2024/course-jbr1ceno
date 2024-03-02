#include "function_str.h"

using std::cout;

void display_str_while(std::string str)
{
    auto index = 0;
    
    while(index < str.size())
    {
        cout<<str[index++]<<"\n";
    }
}

void display_str_while_ref(std::string& str)
{
    auto index = 0;
    
    while(index < str.size())
    {
        cout<<str[index++]<<"\n";
    }

}

void display_str_for(std::string str)
{
    for(auto i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<"\n";
    }
}

void display_for_ref(std::string& str)
{
    for(auto i = 0; i < str.size(); i++)
    {
        cout<<str[i]<<"\n";
    }
}