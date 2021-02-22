#include<stdio.h>
int main()
{
	int num;	
	scanf("%d", &num);
    if(num > 0)
		printf("%d is greater than 0.",num);
    else if (num == 0)
    	printf("%d is equal to 0.",num);
	else
		printf("%d is less than 0.",num);	
   
	return 0;
}
