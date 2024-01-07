#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
	char seq[1000];
	int length;
	int i,k;

        for (i = 0 ; i <= 10; i++)
	{
		scanf("%s", seq);
		length = strlen(seq); 
		
		k = 1;
		printf("The length of sequence %d", k);
		printf(" is %d\n", length);
		k++;
	}
}

