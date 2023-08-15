#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int i,j,sum=0;
	printf("enter an intger : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&j);
	for (i=0;i<=j;i++){

		sum=sum+i;
	}
	printf("sum = %d",sum);

}
