#include <stdio.h>

int main(){
	int number1, number2;
	float answer;
	char op;
	printf("Insert a number1: ");
	scanf("%d", &number1);
	printf("Insert a number2: ");
	scanf("%d", &number2);
	printf("Choose an operator: ");
	scanf(" %c", &op);
	switch (op){
		case '+':
			answer = number1 + number2;
			break;
		case '-':
			answer = number1 - number2;
			break;
		case '*':
			answer = number1 * number2;
			break;
		case '/':
			answer = number1 / number2;
	}
	printf("answer: %f\n", answer);
}


