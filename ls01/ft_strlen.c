#include <stdio.h>

int ft_strlen (char *str) {
    int i = 0;
    while (str[i]) {
        i += 1;
    }
    return i;
}

int main (void) {
    char str[] = "opa opa opa";
    int s = ft_strlen(str);
    printf("%d", s);
    return 0;
}