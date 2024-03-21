//bank_account.cpp
#include "bank_account.h"

using std::cout; using std::cin;

//free function---not part of the class
void display_menu()
{
    cout<<"1-Display balance\n";
    cout<<"4-Exit\n";
}

void run_menu(BankAccount& account)
{
    auto menu_choice = 0;

    do
    {
        display_menu();
        cout<<"Enter option\n";
        cin>>menu_choice;
        handle_menu(menu_choice, account);

    } while (menu_choice != 4);
    
}

void handle_menu(int choice, BankAccount& account)
{
    switch (choice)
    {
    case 1:
        cout<<account.get_balance()<<"\n";
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    
    default:
        break;
    }
}