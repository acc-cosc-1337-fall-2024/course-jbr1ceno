//write include statement for decisions header
#include "decisions.h"

using std::string; using std::cout; using std::cin;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade_if)
{
    string grade_result = "";

    if(grade_if >= 90 && grade_if <= 100)
    {
        grade_result = "A";
    }
    else if(grade_if >= 80 && grade_if <= 100)
    {
        grade_result = "B";
    }
    else if(grade_if >= 70 && grade_if <= 79)
    {
        grade_result = "C";
    }
    else if(grade_if >= 60 && grade_if <= 69)
    {
        grade_result = "D";
    }
    else if(grade_if >= 0 && grade_if <= 59)
    {
        grade_result = "F";
    }
    else
    {
        grade_result = "Invaid grade.\nThe number you put in is out of the range of 0 to 100.";
    }

    return grade_result;
}

string get_letter_grade_using_switch(int grade_switch)
{
    string numerical = " ";
    cout<<"Grade Score: ";
    cin>>grade_switch;

    switch (grade_switch)
    {
    case 90 ... 100:
        numerical = "A";
        cout<<"Your grade score is: "<<numerical<<"\n";
        break;
    case 80 ... 89:
        numerical = "B";
        cout<<"Your grade score is: "<<numerical<<"\n";
        break;
    case 70 ... 79:
        numerical = "C";
        cout<<"Your grade score is: "<<numerical<<"\n";
        break;
    case 60 ... 69:
        numerical = "D";
        cout<<"Your grade score is: "<<numerical<<"\n";
        break;
    case 0 ... 59:
        numerical = "F";
        cout<<"Your grade score is: "<<numerical<<"\n";
        break;
    default:
        cout<<"Not a valid grade.\nThe number you put in is out of the range of 0 to 100.";
        break;
    }

    return numerical;
}

string menu(int num)
{
	string option = "";
    string grade_letter = "";
    int grade_score = 0;

	switch (num)
	{
	case 1:
		//"1 - Letter grade using if"
        cout<<"\nPlease put a grade score that is in range of 0 to 100: ";
        cin>>grade_score;
        grade_letter = get_letter_grade_using_if(grade_score);
        cout<<"Your grade letter is: "<<grade_letter;
		break;
	case 2:
		//"2 - Letter grade using switch"
        grade_letter = get_letter_grade_using_switch(grade_score);
        break;
	case 3:
		option = "Program Exited";
        break;
	default:
		option = "Invalid option";
		break;
	}

	return option;
}