//add include statements
#include "func.h"
#include<cstring>

//add function code here
double get_gc_content(const std::string &dna)
{
    int countCG = 0;
    for (unsigned int i = 0; i < dna.size(); i++)
    {
        //std::cout << dna[i] << std::endl;
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            countCG++;
        }
    }
    double gc_percentage = ((double)countCG/ (double)dna.size());
    return gc_percentage;
}

string get_reverse_string(std::string dna)
{
    string reverse_result = "";
    for (unsigned int i = 0; i < dna.size(); i++)
    {
        //std::cout << dna[dna.size() - i - 1] << std::endl;
        reverse_result += (dna[dna.size() - i - 1]);
    }

    return reverse_result;
}

string get_dna_complement(std::string dna)
{
    string reverse = get_reverse_string(dna);
    string compl_result = "";

    for (unsigned int i = 0; i < reverse.size(); i++)
    {
        
        //std::cout << dna[i] << std::endl;

        if(reverse[i] == 'G')
        {
            compl_result += 'C';
        }
        else if (reverse[i] == 'C')
        {
            compl_result += 'G';
        }
        else if (reverse[i] == 'A')
        {
            compl_result += 'T';
        }
        else
        {
            compl_result += 'A';
        }
    }

    return compl_result;
}

void run_menu()
{
    cout<<"1-Get GC Content\n";
    cout<<"2-Get DNA Complement\n";
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
    string dnaIn = "";
    string dnaInUp = "";
    string exitPrompt = "";

    switch(num)
    {
    case 1:
        cout<<"Please enter a DNA string : ";
        cin>>dnaIn;
        dnaInUp = to_upper_string(dnaIn);
        //dnaIn = toupper(dnaIn.replace());
        cout<<"The GC Content of "<<dnaInUp<<" is: "<<get_gc_content(dnaInUp)<<" ("<<get_gc_content(dnaInUp)*100<<"%)"<<"\n"; 
        break;
    case 2:
        cout<<"Please enter a DNA string: ";
        cin>>dnaIn;
        dnaInUp = to_upper_string(dnaIn);
        cout<<"\nThe DNA complement of "<<dnaInUp<<" is: "<<get_dna_complement(dnaInUp)<<"\n";
        break;
    case 3:
        cout<<"Are you sure you want to exit? Type yes to quit, if not, type something else. ";
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

string to_upper_string(string upp)
{
    string dnaUpperReturn = "";

    for (unsigned x=0; x<upp.size(); x++)
        dnaUpperReturn += toupper(upp[x]);
    
    return dnaUpperReturn;
}