#include<stdio.h>
int main()
{
	float num1, num2, sum = 0;
	char c;
    scanf("%f %c %f", &num1, &c, &num2);
	if (c == '+')
		printf("%.2f + %.2f = %.2f", num1, num2, sum = num1 + num2);
	else if (c == '-')
		printf("%.2f - %.2f = %.2f", num1, num2, sum = num1 - num2);
	else if (c == '*')
		printf("%.2f * %.2f = %.2f", num1, num2, sum = num1 * num2);
    else if(c == '/' && num2 == 0)
          printf("Error!");
    else if (c == '/' )
		printf("%.2f / %.2f = %.2f", num1, num2, sum = num1/ num2);
  else
  printf("Error!");
	return 0;
}
