/*
 * ex8HM2.c
 *
 *  Created on: Aug 16, 2023
 *      Author: oabad
 */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char operator ;
	double op1,op2;

	printf("Enter operator either + or - or* or divide :");
	fflush(stdout);fflush(stdin);
	scanf("%c",&operator);
	printf("enter two operands");
	fflush(stdout);fflush(stdin);
	scanf("%lf",&op1);
	fflush(stdout);fflush(stdin);
	scanf("%lf",&op2);
	switch (operator) {
	case '+':
		printf("%.2f + %.2f = %.2f",op1 ,op2,op1+op2);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f",op1 ,op2,op1-op2);
		break;
	case '*':
		printf("%.2f * %.2f = %.2f",op1 ,op2,op1*op2);
		break;
	case '/':
		printf("%.2f / %.2f = %.2f",op1 ,op2,op1/op2);
		break;

	default:
		printf("the operator you entered is not defined");
		break;
	}

}
