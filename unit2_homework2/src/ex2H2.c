#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char charc;
	printf("enter an alphabet : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&charc);

	switch (charc) {
	case 'a':
	case 'A':
		printf("%c is vowel",charc);
		break;
	case 'e':
	case 'E':
		printf("%c is vowel",charc);
		break;
	case 'i':
	case 'I':
		printf("%c is vowel",charc);
		break;
	case 'o':
	case 'O':
		printf("%c is vowel",charc);
		break;
	case 'u':
	case 'U':
		printf("%c is vowel",charc);
		break;

	default:
		printf("%c is a constant",charc);

		break;
	}




}
