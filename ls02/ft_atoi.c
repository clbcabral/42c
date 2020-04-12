#include <stdio.h>

int ft_atoi (const char *str) {
    int i = 0;
    int number = 0;
    while (str[i]) i++;
    int aux = i;
    while (i) {
        if (str[i - 1] == '-') {
            number *= -1;
        } else {
            int diff = aux - i + 1;
            int power = 1;
            while (--diff) power *= 10;
            int digit = str[i - 1] - 48;
            number += digit * power;
        }
        i--;
    }
    return number;
}

int main (void) {
    char str[] = "-123986";
    int number = ft_atoi(str);
    printf("%d\n", number);
    return 0;
}