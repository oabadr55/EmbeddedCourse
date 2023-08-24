/*
 * Ex4_HwArray.c
 *
 *  Created on: Aug 23, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no,i,newE,loc;
	int arr [10];
	printf("enter no of elemnts : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);

	for (i = 0; i < no; ++i) {
		printf("enter the number %d :",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("enter elemnt to be inserted : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&newE);
	printf("enter the location : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&loc);
	loc-=1;
	arr[loc]=newE;
	for (i = 0; i < no ; ++i) {
	printf(" %d ",arr[i]);
	}



}
