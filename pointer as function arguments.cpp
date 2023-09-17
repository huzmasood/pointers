/*#include<stdio.h>
void Increment(int a) {
	a = a+1;
	printf("Address of variable a in increment = %d\n",&a);
	printf("Address of variable a in increment = %d\n",a);
}
int main() {
	int a;
	a =10;
	Increment(a);
	printf("Address of variable a in main = %d\n",&a);
	printf("Address of variable a in increment = %d\n",a);
}*/
#include<stdio.h>
void Increment(int *p)
{
	*p = (*p) +1;	
}
int main()
{
	int a;
	a = 10;
	Increment(&a);
	printf("a = %d",a);
	}