#include<stdio.h>

int main(void) {
	printf("Hello world\n");
	maxP(1,2);
	return 0;
}

/* function returning the max between two numbers */
int maxP(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int minP(int num1, int num2) { return 0;}

