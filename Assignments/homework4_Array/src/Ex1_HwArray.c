/*
 ============================================================================
 Name        : homework4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double mat1[2][2];
	double mat2 [2][2];
	int i,j;

	printf("enter the elements of first matrix\n");

	for(i=0;i<2;i++)
	{
		for (j = 0; j<2; j++) {

			printf("enter a%d%d\n",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%lf",&mat1[i][j]);
		}
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<2;i++)
	{
		for (j = 0; j<2; j++) {

			printf("enter a%d%d\n",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%lf",&mat2[i][j]);
		}
	}

	printf("sum of matrix =\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; ++j) {
			mat1[i][j]+=mat2[i][j];
			printf(" %.2f   ",mat1[i][j]);
			if(j==1){
				printf("\n");
			}


		}

	}
}
