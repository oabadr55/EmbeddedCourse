/*
 * HW4_ex4.c
 *
 *  Created on: Sep 11, 2023
 *      Author: oabad
 */
#include <stdio.h>
#include <stdlib.h>

int power (int num,int exp);
int main (void){

	int no,x,pow ;
	printf("enter base number");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);
	printf("enter power");
	fflush(stdout);fflush(stdin);
	scanf("%d",&pow);
	x=power(no,pow);
	printf("%d",x);
}

int power (int num,int exp){
	if (exp != 0){
		return (num * power (num,exp-1)) ;
	}

	else {

	return 1 ;
	}

}
