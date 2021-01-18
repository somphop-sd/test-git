#include<stdio.h>

int main(void) {
	printf("Hello world\n");
	printf("Max value is %d\n", maxP(1,2));
	printf("Min value is %d\n", minP(1,2));
	return 0;
}

int minP(int num1, int num2) { return 0;}

int maxP(int num1, int num2) { 

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

   
void fuction_one(){
	printf("help sos ");
}

void fuction_two(){
	printf(" hello branch");
}
