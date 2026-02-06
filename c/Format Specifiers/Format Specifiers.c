#include <stdio.h>

int main(){

    int age = 16;
    float price = 114.514;
    double pi = 3.14159265358;
    char currency = '$';
    char name [] = "Jason";

    printf("My age is %d\n", age);
    printf("My name is %s\n", name);
    printf("The currency is %c\n", currency);
    printf("PI is %.10f \n", pi);

    return 0;
}