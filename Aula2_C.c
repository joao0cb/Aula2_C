#include <stdio.h>

int main() {
    int min = 10, max = 2;
    int *ptr;
    printf("min = %d - max = %d - ptr = %p\n", min, max, ptr);

    ptr = &min;
    *ptr = 15;
    printf("min = %d - max = %d - ptr = %p\n", min, max, ptr);

    ptr = &max;
    *ptr = 25;
    printf("min = %d - max = %d - ptr = %p\n", min, max, ptr);

    return 0;
}