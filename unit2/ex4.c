/*
 * ex4.c
 *
 *  Created on: Aug 10, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x ,y ;
	printf("enter two numbers : " );
	fflush(stdout);
	scanf("%f",&x);
	fflush(stdin);
	scanf("%f",&y);
	printf("product is : %f",x*y);

}
