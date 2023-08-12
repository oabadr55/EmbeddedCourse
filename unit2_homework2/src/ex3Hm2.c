/*
 * ex3Hm2.c
 *
 *  Created on: Aug 12, 2023
 *      Author: oabad
 */


#include "stdio.h"
#include "stdlib.h"

int main(void) {

	float a ,b,c;

	printf("enter three numbers : ");
	fflush(stdout);fflush(stdin);
	scanf ("%f",&a);
	scanf ("%f",&b);
	scanf ("%f",&c);

	if(a>b){
		if (a>c){
			printf("largest number is %f",a);
		}
		else
			printf("largest number is %f",c);

	}
	else if (c>b) {

		printf("largest number is %f",c);

	}
	else {
		printf("largest number is %f",b);

	}
}
