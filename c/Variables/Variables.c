#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 16;
    int year = 2026;
    float gpa = 1.14514;
    char name [] = "Jason";
    bool readyToPrint = false;

    if (readyToPrint){
        printf("I am %d years old, it's %d, my gpa is %.5f, my name is %s \n", age, year, gpa, name);
    }
    else{
        printf("Not ready to print\n");
    }
    
}