#include<stdio.h>

void multiplication_table(){
	for (int i = 1; i <= 9; i++){
		for (int j = 2; j <= 9; j++){
			printf("%d * %d = %d\t", j, i, i*j);
		}
	}
}

int main(){
	multiplication_table()
	return 0;
}
