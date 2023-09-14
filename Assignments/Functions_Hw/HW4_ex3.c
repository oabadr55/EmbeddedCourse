#include <stdio.h>
#include <stdlib.h>


void reverse ();
int main(void){

	printf("enter a scentence");
	fflush(stdout);fflush(stdin);
	reverse();

}

	void reverse (){
		char s;
		scanf("%c",&s);
		if (s != '\n'){
			reverse();
			printf("%c",s);
		}

	}
