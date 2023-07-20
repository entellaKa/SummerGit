#include<stdio.h>

<<<<<<< HEAD
void multiplication_table(){
	for (int i = 1; i <= 9; i++){
		for (int j = 2; j <= 9; j++){
			printf("%d * %d = %d\t", j, i, i*j);
		}
	}
}

int main(){
	multiplication_table()
=======
void func2(){
	printf("Hello, World!!\n");
}

int main(){
	func2();
>>>>>>> 815558c (wtf)
	return 0;
}
