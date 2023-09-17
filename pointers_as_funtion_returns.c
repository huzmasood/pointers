// Pointers as function returns
#include<stdio.h>
#include<stdlib.h>
int Add(int a,int b){ // Called funtion
    int c = a + b;
    return &c;
}
int main() { //Calling function
    int a = 2, b =4;
    int ptr = Add(a, b); // a and b are integers local to Main
    printf("Pointer of Sum = %d\n", ptr);
    getchar();
    return 0;
}
