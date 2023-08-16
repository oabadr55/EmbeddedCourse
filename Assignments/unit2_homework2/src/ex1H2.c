/*
 ============================================================================
 Name        : unit2_homework2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int even,num;

	printf("enter number to check");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	even =num%2;
	if(even == 0){
		printf("%d is even",num);
	}
	else {
		printf("%d is odd",num);
	}

}
