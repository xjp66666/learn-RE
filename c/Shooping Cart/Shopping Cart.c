#include <stdio.h>
#include <string.h>

int main (){

    char name[20] = "";
    float price  = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Input your item name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Input your item price: ");
    scanf("%f", &price);

    printf("Input your item quantity: ");
    scanf("%d", &quantity);

    total = quantity * price;

    printf("Your %d %s(s) cost %.3f%c in total\n", quantity, name, total, currency);

    return 0;

}