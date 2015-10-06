#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "./lab1.h"

using namespace std;

int main(int argc, char* argv[]){
	int rows, cols;
	
	rows = atoi(argv[1]);
	cols = atoi(argv[2]);

	mult_div_values** table = new mult_div_values*[cols];
	for(int i = 0; i < cols; i++)
		table[i] = new mult_div_values[rows];

	set_mult_values(table, rows, cols);
	set_div_values(table, rows, cols);
	print_table(table, rows, cols);
}