/*
 * ex7HM2.c
 *
 *  Created on: Aug 15, 2023
 *      Author: oabad
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int i,j,sum=1;
	printf("enter an intger : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&j);
	if (j>0)
	{
		for (i=1;i<=j;i++){

			sum=sum*i;
		}
		printf("sum = %d",sum);
	}
	else if (j<0) {
		printf("Error !!! factorial of negative number doesn't exist ");
	}
	else {
		printf("factorial of 0 is : 1" );
	}
}



