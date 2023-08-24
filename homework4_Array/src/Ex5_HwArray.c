/*
 * Ex5_HwArray.c
 *
 *  Created on: Aug 24, 2023
 *      Author: oabad
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int no,arr [25],i,scnd;

	printf("enter no of elements :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);
	for (i = 0; i < no; i++){
		printf("enter elemnt no %d\n",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched \n");
	fflush(stdout);fflush(stdin);
	scanf("%d",&scnd);

	for (i = 0; i < no; ++i) {
		if(scnd == arr[i]){
			printf("number found at location %d \n",i+1);
			break;
		}

		else if (i+1==no){
			printf("number not found ");
		}
	}
}


