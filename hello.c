#include<stdio.h>

int main(void) {
	printf("Hello world\n");
	fuction_one();
	fuction_two();
	return 0;
}

int minP(int num1, int num2) { 
   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}


void fuction_one(){
	printf("help sos ");
}

void fuction_two(){
	printf(" hello branch");
}
