#include "sample1.h"

using std::cout;

int main()
{
    //cout<<"Error is: "<<(get_numeric_deriv_error(-1.0, get_numeric_deriv_center(1.0, 0.01)))<<"\n";
    cout<<"This is foward diff table: "<<"\n";
    get_table_of_error_foward_diff_x_h(1);
    cout<<"\n"<<"This is backward diff table: "<<"\n";
    get_table_of_error_backward_diff_x_h(1);
    cout<<"\n"<<"This is center diff table: "<<"\n";
    get_table_of_center_diff_x_h(1);


    return 0;
}