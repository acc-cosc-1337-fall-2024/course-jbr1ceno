#include<iostream>
#include<string>
#include<algorithm>

using std::cout; using std::cin; using std::string;

//add function(s) prototype here

double get_gc_content(const std::string& dna);
string get_reverse_string(std::string dna);
string get_dna_complement(std::string dna);
void prompt_user();
void run_menu();
void handle_menu_option(int num);
string to_upper_string(string upp);