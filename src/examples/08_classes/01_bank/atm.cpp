//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

void ATM::display_balance()
{
    cout<<"Balance: "<<account.get_balance();
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit amount: ";
    cin>>amount;
    account.deposit(amount);
}

void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw amount: ";
    cin>>(amount);
    account.withdraw(amount);
}


//End of code block of functions that belong to the ATM class

//free function---not part of the class
void display_menu()
{
    cout<<"\n1-Display balance\n";
    cout<<"2-Deposit\n";
    cout<<"3-Withdraw\n";
    cout<<"4-Exit\n";
}

void run_menu(ATM& atm)
{
    auto menu_choice = 0;

    do
    {
        display_menu();
        cout<<"Enter option\n";
        cin>>menu_choice;
        handle_menu(menu_choice, atm);

    } while (menu_choice != 4);
    
}

void handle_menu(int choice, ATM& atm)
{

    switch (choice)
    {
    case 1:
        atm.display_balance();
        break;
    case 2:
        cout<<"Enter Deposit amount\n";
        atm.make_deposit();
        break;
    case 3:
        cout<<"Enter Withdraw amount\n";
        atm.make_withdraw();
        break;
    case 4:
        cout<<"Exiting...\n";
        break;
    
    default:
        break;
    }
}