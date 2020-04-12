#include <stdio.h>

int ft_strcmp (char *s1, char *s2) {
    int i = 0;
    int equal = 0;
    while (s1[i]) {
        if (s1[i] != s2[i]) {
            equal = s1[i] - s2[i];
            break;
        }
        i++;
    }
    return equal;
}

int main (void) {
    char s1[] = "abCd";
    char s2[] = "abcd";
    printf("result: %d\n", ft_strcmp(s1, s2));
    return 0;
}