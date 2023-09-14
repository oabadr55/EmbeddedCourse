/*
 * HW4_ex1.c
 *
 *  Created on: Sep 8, 2023
 *      Author: oabad
 */
#include <stdio.h>
#include <stdlib.h>

int prime (int num1);

int main(void){
	int x1 , x2,i,check ;
	printf("enter two numbers ");

	fflush(stdout);fflush(stdin);
	scanf("%d",&x1);
	fflush(stdout);fflush(stdin);
	scanf("%d",&x2);

	printf("prime numbers between %d and %d are : ",x1,x2 );
	for (i = x1+1; i < x2; ++i) {

		check = prime(i);
		if(check == 0){
			printf(" %d ",i);
		}
	}

}
int prime (int num1){
	int i,flag = 0;
	for (i = 2; i <= num1/2; i++) {
		if (num1%i == 0) {
			flag =1;
			break ;
		}
	}
	return flag ;
}
