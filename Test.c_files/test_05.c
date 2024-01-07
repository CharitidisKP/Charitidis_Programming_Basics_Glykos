#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
	char seq[1000];
	int length;
	int i;
	int k;

	k = 1;
	while( scanf("%s", seq) ==1)
	{
		length = strlen(seq); 
		
		printf("The length of sequence %d", k);
		printf(" is %d\n", length);
		k++;
	}
}

