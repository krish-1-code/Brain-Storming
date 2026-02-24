#include<stdio.h>
#include<stdlib.h>

int *Arr_creation(int *arrsize) {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    *arrsize = size;

    int *array = malloc(size * sizeof(int));

    return array;
}

void findprint_array() {

    int arraysize;
    //assigning and printing array elements
    int *arr;
    arr = Arr_creation(&arraysize);

    for(int i = 0; i < arraysize;i++) {

        arr[i] = i+1;
    }

    for(int i = 0; i < arraysize;i++) {

        printf("%2d",arr[i]);
    }
    printf("\n");
    int find;

    printf("Enter the element to find the index: ");
    scanf("%d",&find);

     for(int i = 0; i < arraysize; i++ ) {
        
        if (arr[i] == find ) {

            printf("The index of the element is %d",i);
        }
    }

}

int main() {

    findprint_array();

    return 0;
}