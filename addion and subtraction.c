/*write a c program to perform addion and subtraction of two integer numbers and two real numbers*/
#include <stdio.h>
int main()
{
	int n1,n2,add,sub;
	float num1,num2,sum,diff;
	printf("enter any two integer numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter any two real numbers");
	scanf("%f%f",&num1,&num2);
	add=n1+n2;
	sub=n1-n2;
	sum=num1+num2;
	diff=num1-num2;
	printf("the addition of two integer numbers is %d",add);
	printf("the subtraction of two integer numbers is %d",sub);
	printf("the sum of the two real numbers is %f",sum);
	printf("the difference of the two real numbers is %f",diff);
}