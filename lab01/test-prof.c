#include <stdio.h>

void a(void)
{
	int i,j,k;
	
	for(i=0; i < 100; i++)
	  for(j=0; j < 100; j++)k++;

	printf("test\n");
}

int main(void)
{
	int i;

	for (i=0;i <100; i++) 
	  a();

	return(0);
}
