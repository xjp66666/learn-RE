#include <stdio.h>
#include <string.h>

int main(){
    
    int age;
    float gpa;
    char grade;
    char name[30];

    printf("input your age: ");
    scanf("%d", &age);

    printf("input your gpa: ");
    scanf("%f", &gpa);

    printf("input your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("input your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("your input name is %s\n", name);
    printf("your input age is %d\n", age);
    printf("your input gpa is %.2f\n", gpa);
    printf("your input grade is %c\n", grade);
    
    
    
    return 0;
}