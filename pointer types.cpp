#include<stdio.h>
int main()
{
	int a = 1025;
	int *p;
	p = &a;
	printf("size of %d\n",sizeof(int));
	printf("Address = %d, value = %d\n",p,*p);
	printf("Address p is %d\n",p+1,*(p+1));
	char *p0;
	p0 = (char*)p; //Typecasting
	printf("size of %d\n",sizeof(char));
	printf("Address = %d, value = %d\n",p0,*p0);
	printf("Address p is %d\n",p0+1,*(p0+1));
	return 0;
}