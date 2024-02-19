#include <iostream>
#include <cmath>
#include <string>

double get_numeric_fx(double num_x); //calculate f(x)
double get_numeric_deriv_right(double num_x = 1.0, double num_h = 0.5); //foward difference approximation
double get_numeric_deriv_left(double num_x = 1.0, double num_h = 0.5); //backward difference approximation
double get_numeric_deriv_center(double num_x = 1.0, double num_h = 0.5); //center difference
double get_numeric_deriv_error(double actual_val, double estimate_val); //absolute error
void run_menu();
void get_table_of_error_foward_diff_x_h(double num_x = 1.0); //table for values ok, Also num_x = 1 has been declared, so no need for default variable
//std::string handle_menu_option(int option); //main menu for calculating foward, backward, center approx and absolute errors
void get_table_of_error_backward_diff_x_h(double num_x = 1.0);
void get_table_of_center_diff_x_h(double num_x = 1.0);
