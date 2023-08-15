/*
 * ex5Hm2.c
 *
 *  Created on: Aug 12, 2023
 *      Author: oabad
 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char alpha;
	while(1)
	{
		printf("\nenter a charachter: ");
		fflush(stdout);fflush(stdin);
		scanf("%c",&alpha);

		if (alpha<123 && alpha>96){
			printf("%c is an alphapet\n",alpha);
		}
		else if(alpha<91 && alpha>64){
			printf("%c is an alphapet\n",alpha);

		}
		else {
			printf("%c is not an alphapet\n",alpha);

		}
	}
}

