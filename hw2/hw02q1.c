/**
 * This C program implements the use of macros.
 *
 * Completion time: 1.5 hours
 * 
 * @author Teodoro Salgado, Acuna Chen
 * @version 1.0
 *
*/

#include <stdio.h>

#define subm(a, b) a - b
#define cubem(a) (a * a * a)
#define minm(a, b) ((a <= b) ? a : b)
#define oddm(a) ((a % 2 == 1) ? 1 : 0)

int subf(int a, int b){
	return a - b;
}

int cubef(int a){
	return a * a * a;
}

int minf(int a, int b){
	if (a <=b ){
		return a;
	}
	else {
		return b;
	}
}

int oddf(int a){
	if (a % 2 == 1){
		return 1;
	}
	else {
		return 0;
	}
}

int main(){
	int a, b;

	// Test case for subf and subm
	a = 3; b = 6;
	printf("subf(a, b) = %d\n", subf(a, b));
	printf("subm(a, b) = %d\n", subm(a, b));
	printf("subf(a++, b--) = %d\n", subf(a++, b--));
	a = 3; b = 6; // reset a, b values
	printf("subm(a++, b--) = %d\n", subm(a++, b--));

	// Test case for cubef and cubem              
	a = 3; b = 6;                                   
 	printf("cubef(a) = %d\n", cubef(a));
	printf("cubem(a) = %d\n", cubem(a));
	printf("cubef(--a) = %d\n", cubef(--a));
	a = 3; b = 6; // reset a, b values
	printf("cubem(--a) = %d\n", cubem(--a));  
	
}

