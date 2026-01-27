#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 && j == 2) {
              
                // Break out of both loops
                goto exit_loops;  
            }
            printf("%d %d\n", i, j);
        }
    }

exit_loops:
    printf("Exited loop\n");
    return 0;
}