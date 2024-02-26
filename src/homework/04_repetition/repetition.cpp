//add include statements
#include "repetition.h"

using std::cout; using std::cin; using std::string;

//add function(s) code here
int get_factorial(int num)
{
    int fac_prod = 1;

    for(int i = num; i > 0; i--)
    {
        fac_prod *= i;
    }

    return fac_prod;
}

int get_gcd(int num1, int num2)
{
    int tempNum = 0;

    while(num1 != num2)
    {
        if(num1 < num2) //swap
        {
            tempNum = num1;
            num1 = num2;
            num2 = tempNum;          
        }
        if(num1 > num2) //subtract
        {
            num1 = num1 - num2;
        }
        
    }

    return num1;
}

void run_menu()
{
    cout<<"1-Factorial\n";
    cout<<"2-Greatest Common Divisor\n";
    cout<<"3-Exit\n";
}

void prompt_user()
{
    int option = -1;

    do
    {
        run_menu();
        cout<<"Enter option: ";
        cin>>option;
        handle_menu_option(option);
        
        
    } while (option != -1);
    
}

void handle_menu_option(int num)
{
    int facNum = 0;
    int gcdNum1 = 0;
    int gcdNum2 = 0;
    string exitPrompt = "";

    switch(num)
    {
    case 1:
        cout<<"Please enter a number to get its factorial: ";
        cin>>facNum;
        cout<<"The factorial of "<<facNum<<" is: "<<get_factorial(facNum)<<"\n"; 
        break;
    case 2:
        cout<<"Please enter a number: ";
        cin>>gcdNum1;
        cout<<"\nPlease enter another number: ";
        cin>>gcdNum2;
        cout<<"\nThe Greatest Common Divisor of "<<gcdNum1<<" and "<<gcdNum2<<" is: "<<get_gcd(gcdNum1, gcdNum2)<<"\n";
        break;
    case 3:
        cout<<"Are you sure you want to exit? Type y to quit, if not, type something else. ";
        cin>>exitPrompt;
        if(exitPrompt == "yes" || exitPrompt == "Yes")
        {
            cout<<"Program exited\n";
            exit(0);
        }
        else
        {
            break;
        }
        
    default:
    cout<<"Invalid Option\n";
        break;
    }
}