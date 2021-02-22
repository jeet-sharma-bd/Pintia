#include <stdio.h>
int main(){
int x,z=0,y=0;

scanf("%d",&x);

	z=x/100;
	x=x%100;
	printf("%d, ",z);
	y=x/10;
	printf("%d, ",y);
	z=x%10;
	printf("%d",z);



return 0;
}
