#include<stdio.h>

int main(void) {
	
	printf("Hello world\n");
	printf("Max value is %d\n", maxP(1,2));
	printf("Min value is %d\n", minP(1,2));
	
	function_one();
	function_two();
	
	return 0;
}

int maxP(int num1, int num2) { 
	int result;
	   if (num1 < num2)
	      result = num1;
	   else
	      result = num2;
	
	return result; 
}

int minP(int num1, int num2) { 
	int result;
	   if (num1 > num2)
	      result = num1;
	   else
	      result = num2;
	
	return result; 
}



void function_one(){
	printf("help sos ");
}

void function_two(){
	printf(" hello branch");
}

