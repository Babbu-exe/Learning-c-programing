#include <stdio.h>
int main() {
int operand1, operand2, result;
char operator;
printf("Enter first integer operand: ");
scanf("%d", &operand1);
printf("Enter an operator (+, -, *, /, %%): ");
scanf(" %c", &operator);
printf("Enter second integer operand: ");
scanf("%d", &operand2);
switch (operator) {
case ’+’:
result = operand1 + operand2;
printf("Result: %d\n", result);
break;
case ’-’:
result = operand1 - operand2;
printf("Result: %d\n", result);
break;
case ’*’:
result = operand1 * operand2;
printf("Result: %d\n", result);
break;
case ’/’:
if (operand2 != 0) {result = operand1 / operand2;
printf("Result: %d\n", result);
} else {
printf("Error: Division by zero is not allowed.\n");
}
break;
case ’%’:
if (operand2 != 0) {
result = operand1 % operand2;
printf("Result: %d\n", result);
} else {
printf("Error: Modulo by zero is not allowed.\n");
}
break;
default:
printf("Error: Invalid operator entered.\n");
break;
}
return 0;
}
