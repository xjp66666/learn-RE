#include <stdio.h>

void birthday(int* pAge);

int main(){
    
    int age = 16;
    int* pAge = &age;

    birthday(pAge);

    printf("%d\n", age);

}

void birthday(int* pAge){

    (*pAge)++;

}