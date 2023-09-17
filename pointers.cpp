
#include<stdio.h>
int main()
{
	int a = 10;
	int *p;
	p = &a;
	//Pointers airthmetic
	printf("Address p is %d\n",p);
	printf("size of %d\n",sizeof(int));
	printf("Address p is %d\n",p+1);
	
	return 0;
}
