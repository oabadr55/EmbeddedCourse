#include <stdio.h>
#include <stdlib.h>






int main(void) {

	double x;
	printf("enter a number : ");
	fflush(stdout);fflush(stdin);
	scanf(" %lf",&x);
	if(x>0) {
	printf("%lf is postive",x);

	}
	else if (x<0.00){
	printf("%lf is negative",x);
	}


	else
		printf("the number is zero");

}
