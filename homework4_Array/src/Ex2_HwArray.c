/*
 * Ex2_HwArray.c
 *
 *  Created on: Aug 23, 2023
 *      Author: oabad
 */

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
	float sum=0;
	int no,i;
	printf("enter the numbers of data :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);
	float avg [no];
	for (i = 0; i < no; ++i) {

		printf("enter number %d \n",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&avg[i]);
	}

	for (i = 0; i < no; i++) {

		sum=sum+avg[i];
		//		printf("%d",avg[i]);
	}

	printf("average = %.2f",sum/no);
}

