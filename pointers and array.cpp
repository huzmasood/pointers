#include<stdio.h>
int main()
{
	int A[]= {2,3,5,8,1};
	int i;
	int *p = A;
	for(int i = 0;i<5;i++)
	{
		printf("ADDRESS = %d\n",A+i);
		printf("value = %d\n",A[i]);
	}
}