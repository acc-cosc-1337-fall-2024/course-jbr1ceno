#include "sample1.h"

using std::cout;
using std::cin;
using std::string;

double get_numeric_fx(double num_x)
{
    double funct_equation = 1.0/num_x;

    //cout<<"Put x for function f(x) = 1/x: ";
    //cin>>num_x;
    //cout<<"f(x) = "<<funct_equation;

    return funct_equation;
}

double get_numeric_deriv_right(double num_x, double num_h)
{
    //h != 0
    return (get_numeric_fx(num_x + num_h) - get_numeric_fx(num_x))/num_h;

}

double get_numeric_deriv_left(double num_x, double num_h)
{
    //h != 0
    return (get_numeric_fx(num_x) - get_numeric_fx(num_x - num_h))/num_h;
}

double get_numeric_deriv_center(double num_x, double num_h)
{
    //h != 0
    return (get_numeric_fx(num_x + num_h) - get_numeric_fx(num_x - num_h))/(2*num_h);
}

double get_numeric_deriv_error(double actual_val, double estimate_val)
{
    //h != 0
    //cout<<"Actual val: "<<actual_val<<"\n Estimate Val: "<<estimate_val<<"\n";
    return fabs(actual_val - estimate_val);
}

void get_table_of_error_foward_diff_x_h(double num_x)
{
    double hVar[5] = {0.5, 0.1, 0.01, 0.001, 0.0001};
    for(int i = 0; i < 5; i++)
    {
        cout << "as h approaches: " << hVar[i] << "    "; //h column
        cout << "forward approximation of f'(1) ≈ " << get_numeric_deriv_right(num_x, hVar[i])<< "     "; // backward approx column
        cout << "Absolute Error: " << get_numeric_deriv_error(-1, get_numeric_deriv_right(num_x, hVar[i])) << "\n"; //abs error column
        
    }
}

void get_table_of_error_backward_diff_x_h(double num_x)
{
    double hVar[5] = {0.5, 0.1, 0.01, 0.001, 0.0001};
    for(int i = 0; i < 5; i++)
    {
        cout << "as h approaches: " << hVar[i] << "    "; //h column
        cout << "backward approximation of f'(1) ≈ " << get_numeric_deriv_left(num_x, hVar[i])<< "      "; // backward approx column
        cout << "Absolute Error: " << get_numeric_deriv_error(-1, get_numeric_deriv_left(num_x, hVar[i])) << "\n"; //abs error column

    }
}

void get_table_of_center_diff_x_h(double num_x)
{
    double hVar[5] = {0.5, 0.1, 0.01, 0.001, 0.0001};
    for(int i = 0; i < 5; i++)
    {
        cout << "as h approaches: " << hVar[i] << "    "; //h column
        cout << "center approximation of f'(1) ≈ " << get_numeric_deriv_center(num_x, hVar[i])<< "\n"; // center approx column

    }
}

void get_table_of_deriv_epsilon(double num_x)
{
    double hVar[5] = {pow((double)10.0, (double)-5), pow((double)10.0, (double)-10), pow(10.0, -16.0), pow(10.0, -30.0), pow(10.0, -50.0)};
    //double t[2] = {pow((double)10.0, (double)-5), pow((double)10.0, (double)-10)};
    for(int i = 0; i < 5; i++)
    {
        cout << "As h approaches: " << hVar[i] << "    "; //h column
        cout << "forward approximation of f'(1) ≈ " << get_numeric_deriv_right(num_x, hVar[i])<< "      "; //forward diff column
        cout << "As h approaches: " << hVar[i] << "    "; //h column
        cout << "backward approximation of f'(1) ≈ " << get_numeric_deriv_left(num_x, hVar[i])<< "          "; // backward approx column
        cout << "As h approaches: " << hVar[i] << "    "; //h column
        cout << "center approximation of f'(1) ≈ " << get_numeric_deriv_center(num_x, hVar[i])<< "\n"; // center approx column
    }
}

void get_foward_table_diff(double timNum[], double velNum[], int n)
{
    //Table 1 Data Velocity as a function of time
    
    //double derivArrayForward[6] = {0, 0, 0, 0, 0, 0};

    //get forward diff of table
    for(int i = 0; i < n - 1; i++)
    {
        if(i == n - 1)
        {
            double velDiff = velNum[i] - velNum[i - 1];
            double timDiff = timNum[i] - timNum[i - 1];
            cout<<velDiff/timDiff;
        }
        else
        {
            double velDiff = velNum[i + 1] - velNum[i];
            double timDiff = timNum[i + 1] - timNum[i];
            cout<<" "<<velDiff/timDiff;
        }
    }
}

void get_backward_table_diff(double timNum[], double velNum[], int n)
{
    

    //get backward diff of table
    for(int i = 0; i < n - 1; i++)
    {
        if(i == 0)
        {
            double velDiff = velNum[i] - velNum[i - 1];
            double timDiff = timNum[i] - timNum[i - 1];
            cout<<velDiff/timDiff;
        }
        else
        {
            double velDiff = velNum[i] - velNum[i - 1];
            double timDiff = timNum[i] - timNum[i - 1];
            cout<<velDiff/timDiff;
        }
    }
}