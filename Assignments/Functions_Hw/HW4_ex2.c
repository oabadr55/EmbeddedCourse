/*
 * HW5_ex2.c
 *
 *  Created on: Sep 10, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>

int factorial (int num);

int main(void){

	int no ;
	printf("enter a postive integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);
	printf(" factorial = %d",factorial (no));

}

int factorial (int num){
	int sum;
	while (num!=1){
	sum = num * factorial(num-1);
	return sum ;
	}
}
