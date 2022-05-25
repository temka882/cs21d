#include <stdio.h>
double factorial(double x);
double combination(double n, double r);
int main(){ 
double n;
printf("answer =%lf\n",combination(20,3));
printf("answer =%lf\n",combination(80,2));

printf("answer =%lf*%lf=%lf",combination(20,3),combination(80,2),combination(20,3)*combination(80,2));
	return 0;
}
double factorial(double x){
	double fact=1;
	double i;
	for(i=x;i>=1;i--){
		fact=i*fact;
	}
	return fact;
}
double combination(double n, double r){

	return factorial(n)/(factorial(r)*factorial(n-r));
}


