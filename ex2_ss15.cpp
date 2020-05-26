#include<stdio.h>
incre()
{
	char var = 65; /* var is automtic variable */
	printf("\nThe character stored in var is %c", var++);
}
main()
{
	incre();
	incre();
	incre();
}

