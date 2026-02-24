#include<stdio.h>

int assign(int *a, int *b) {

    *a = 10;
    *b = 20;
}

int main () {

    int ten, twenty;

    assign(&ten,&twenty);

    printf("Ten: %d\nTwenty: %d",ten,twenty);
    return 0;
}

