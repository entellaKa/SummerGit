#include<stdio.h>

void multiplication_table(){
	for (int i = 1; i <= 9; i++){
		for (int j = 2; j <= 9; j++){
			printf("%d * %d = %d\t", j, i, i*j);
		}
	}
}

void func2(){
	printf("Hello, World!!\n");
}

int main(){
	multiplication_table();
	func2();
	return 0;
}
