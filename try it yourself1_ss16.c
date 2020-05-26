#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float main(){
	float r;
	float a,b;
	float dientich(float x);
	float chuvi(float y);
	printf("Enter r:");
	scanf("%f",&r);
	
	a = dientich(r);
	printf("dien tich hinh tron la %f\n",a);
	b = chuvi(r);
	printf(" chu vi hinh tron la %f\n",b);
	return 1;
}

float dientich(float x) {
	float dientich;
	dientich = x*x*3.14;
	return dientich;
}
	float chuvi(float y) {
	float chuvi;
	chuvi = 2*y*3.14;
	return chuvi;
}
