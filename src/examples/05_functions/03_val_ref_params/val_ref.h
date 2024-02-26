const double federal_tax_rate = .1; //global variable read/write


void value_params(int num); //value
void reference_params(int& num); //reference
void const_reference_param(const int& num); //protect data with const-read only

void access_global_variable();