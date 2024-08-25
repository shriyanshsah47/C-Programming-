#include<stdio.h>
int main(){
	char opr;
	int n1, n2;
	float res;
	printf("Enter the first number - ");
	scanf("%d",&n1);
	printf("Enter the second number - ");
	scanf("%d",&n2);
	printf("Enter the Operator('+','-','*','/') - ");
	scanf(" %c",&opr);
	
	if (opr == '+'){
		res = n1+n2;
		printf("The sum of %d and %d is %f",n1,n2,res);
	}
	else if (opr == '-'){
		res = n1-n2;
		printf("The difference of %d and %d is %f",n1,n2,res);
	}
	else if (opr == '*'){
		res = n1*n2;
		printf("The product of %d and %d is %f",n1,n2,res);
	}
	else if (opr == '/'){
		res = n1/n2;
		printf("The divison of %d and %d is %f",n1,n2,res);
	}
	else {
		printf("Invalid input");
	}
}
