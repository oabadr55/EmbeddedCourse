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
	int i,j,col,row;
	int mat1 [10][10];
	int matTran [10][10];

	printf("Enter rows and column of matrix\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&col);
	scanf("%d",&row);
	printf("enyer elements of matrix : \n");

	for(i=0;i<col;i++)
	{
		for (j = 0; j<row; j++) {

			printf("enter a%d%d\n",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("the matrix you enterd is : \n");
	for(i=0;i<col;i++)
	{
		for (j = 0; j<row; j++) {

			printf(" %d   ",mat1[i][j]);
			if(j==row-1){
				printf("\n");
			}
		}
	}
	for(i=0;i<row;i++)
		{
			for (j = 0; j<col; j++) {

				matTran[i][j]=mat1[j][i];
			}
		}
	printf("transpose of matrix :\n");
	for (i = 0; i < row; ++i) {
		for (j = 0; j < col; ++j) {

			printf(" %d  ",matTran[i][j]);
			if(j==col-1){
				printf("\n");
			}
		}
	}
}
