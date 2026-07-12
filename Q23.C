#include <stdio.h>

int main() {
    int x, y = 0, z; 

    printf("Enter a number: ");
    scanf("%d", &x);

    z = x;
    while (z > 0) {
        
        y += (z & 1);
        
        z >>= 1;
    }

    printf("Number of set bits in %d is %d\n", x, y);
    return 0;
}