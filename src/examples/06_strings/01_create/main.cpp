#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string lang = "C++";

    cout<<lang<<"\n";
    cout<<"Size of string: "<<lang.size()<<"\n"; //number of characters in the string
    cout<<"Capacity of string: "<<lang.capacity()<<"\n"; //max number of strings, the lang variable can hold

    lang.append("123456789012");

    cout<<lang<<"\n";
    cout<<"Size of string: "<<lang.size()<<"\n"; //number of characters in the string
    cout<<"Capacity of string: "<<lang.capacity()<<"\n"; //max number of strings, the lang variable can hold

    lang.push_back('3');

    cout<<lang<<"\n";
    cout<<"Size of string: "<<lang.size()<<"\n"; //number of characters in the string
    cout<<"Capacity of string: "<<lang.capacity()<<"\n"; //max number of strings, the lang variable can hold


    return 0;
}