#include "sample1.h"

using std::cout;

int main()
{
    cout<<"CALCULUS PROJECT 1: NUMERIC DIFFERENTIATION by JOSUÉ BRICEÑO\n";
    //cout<<"Error is: "<<(get_numeric_deriv_error(-1.0, get_numeric_deriv_center(1.0, 0.01)))<<"\n";
    cout<<"\nThis is foward diff table: "<<"\n";
    get_table_of_error_foward_diff_x_h(1);
    cout<<"\n"<<"This is backward diff table: "<<"\n";
    get_table_of_error_backward_diff_x_h(1);
    cout<<"\n"<<"This is center diff table: "<<"\n";
    get_table_of_center_diff_x_h(1);
    cout<<"\n"<<"This is the forward, backward, and center diff table: "<<"\n";
    get_table_of_deriv_epsilon(1);
    cout<<"\n The Machine Epsilon happens when the computer is not able to distinguish between a small decimal and the rounded number (in this case 0).";
    double timNum[6] = {0.0, 10.0, 15.0, 20.0, 22.5, 30.0};
    double velNum[6] = {0.0, 227.04, 362.78, 517.35, 602.97, 901.67};
    get_foward_table_diff(timNum, velNum, 6);
    get_backward_table_diff(timNum, velNum, 6);

    return 0;
}