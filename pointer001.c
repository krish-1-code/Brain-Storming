#include<stdio.h>
int main() {

    int x =7;
    printf("%d\n",x);
    printf("%x\n",&x);


    int *pointer = &x;
    printf("%x\n",pointer);
    printf("%p\n",&pointer);
    printf("%d\n",*pointer);
    return 0;
}