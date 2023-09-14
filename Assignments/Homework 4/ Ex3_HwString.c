/*
 * Ex3_HwString.c
 *
 *  Created on: Aug 24, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {
	int i , j ;
	char str[50],str2[50];
	printf("enter a string ");
	fflush(stdout);fflush(stdin);
	scanf("%s",str);
	j=strlen(str)-1;
	for (i = 0; i < strlen(str); ++i) {

		str2[i]=str[j];
		j--;


	}
	 str2[i] = '\0';
	printf("Rversed String is :%s",str2);
}
