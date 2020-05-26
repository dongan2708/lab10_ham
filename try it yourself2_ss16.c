#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 

 float Giaithua(int n) 
 {
 	int i;
	float c = 1.0;
	for(i = 1;i <= n;i++)
	c = c*i;
	return c;
}
int main()
{
	int n;
	printf("Enter number(n) = ");
	scanf("%d", &n);
	printf("\nGiai thua cua %d la %f", n, giaithua(n));
	getch();
}
