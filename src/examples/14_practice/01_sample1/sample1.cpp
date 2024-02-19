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