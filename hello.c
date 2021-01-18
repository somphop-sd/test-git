#include<stdio.h>

int main(int argc, char *argv[]) {
	printf("Hello world\n");
	print_prime(atoi(argv[1]));
	printf("End of prime\n");
	printf("Max value is %d\n", maxP(1,2));
	printf("Min value is %d\n", minP(1,2));
	
	function_one();
	function_two();
	
	return 0;
}


void print_prime(int maxi) {
	for(int i=1;i<maxi;i++) {
		int count=0;
		for(int j=1;j<=i;j++) {
			if(i%j==0)
				count++;
		}
		if(count==2) {
			printf("%d\n",i);
		}
	}
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

