#include "text_output.h"

using std::cout; using std::ofstream;
using std::ifstream;
using std::getline;
using std::string;

void output_data_to_file()
{
    //open file
    cout<<"Create file object/variable... \n";
    ofstream my_file;
    cout<<"Open the file\n";
    my_file.open("example.dat");

    //output to file
    cout<<"Write to file\n";
    my_file<<"Write to file\n";
    my_file<<"Write to file\n";
    my_file<<"Write to file\n";

    //close the file object/variable/handle
    my_file.close();    
}

void input_data_from_file()
{
    string line;
    //open file
    cout<<"Open file object/variable... \n";
    ifstream my_file;
    cout<<"Create file for reading... \n";
    my_file.open("example.dat");

    //use the file
    if(my_file.is_open())
    {
        cout<<"Read from file\n";
        while(getline(my_file, line))
        {
            cout<<line<<"\n";
        }
    }
    else
    {
        cout<<"File cannot be opened... \n";
    }

    //close the file

}