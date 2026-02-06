#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;

    int z = y % x;
    /*

    +
    -
    *
    /: when using division, the denominator has to be a float/double type
    %: mod
    ++
    --
    +=
    -=
    *=
    /=
    
    */
    printf("%d is the output\n", z);
    return 0;

}