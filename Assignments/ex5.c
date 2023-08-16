/*
 * ex5.c
 *
 *  Created on: Aug 10, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x=3,y=5,z=0 ;
	printf("enter value of a : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&x);

	printf("enter value of b : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&y);
	z=y;
	y=x;
	x=z;
	printf("After swapping, value of a = %f \n",x);
	printf("After swapping, value of b = %f",y);


}
