
struct mult_div_values { 
	int mult; 
	float div; 
};

void set_mult_values(mult_div_values **, int, int);
void set_div_values(mult_div_values **, int, int); 
void print_table(mult_div_values **table, int m, int n);
