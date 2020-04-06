#include <stdio.h>

void ft_swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (void) {
    int a = 4;
    int b = 7;
    printf("%d %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}