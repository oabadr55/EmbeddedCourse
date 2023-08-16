/*
 * EX6.C
 *
 *  Created on: Aug 10, 2023
 *      Author: oabad
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	float x=10,y=20 ;
		printf("enter value of a : ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&x);
		printf("enter value of b : ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&y);
		y=x+y;//30
		x=y-x;//20
		y=y-x;//10
		printf("After swapping, value of a = %f \n",x);
		printf("After swapping, value of b = %f",y);


}
