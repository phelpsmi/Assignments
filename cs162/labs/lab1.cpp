#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "./lab1.h"

using namespace std;

void set_mult_values(mult_div_values **table, int m, int n){
	for(int x=1; x <= m; x++){
		for(int y=1; y <= n; y++){
			table[x-1][y-1].mult = x*y;
		}
	}
}

void set_div_values(mult_div_values **table, int m, int n){
	for(int x=1; x <= m; x++){
		for(int y=1; y <= n; y++){
			table[x-1][y-1].div = (float)(x)/(float)(y);
		}
	}
}

void print_table(mult_div_values **table, int m, int n){
	for(int x=0; x < m; x++){
		for(int y=0; y < n; y++){
			cout << table[y][x].mult << " ";
		}
		cout << endl;
	}
	for(int x=0; x < m; x++){
		for(int y=0; y < n; y++){
			cout << table[x][y].div << " ";
		}
		cout << endl;
	}
}
