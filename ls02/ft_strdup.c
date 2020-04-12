#include <stdlib.h>
#include <stdio.h>

char* ft_strdup (char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    char* dup = (char*) malloc(sizeof(char) * i + 1);
    i = 0;
    while (str[i]) {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}


int main (void) {
    char str[] = "lingo lingo";
    char *dup = ft_strdup(str);
    printf("%s", dup);
    return 0;
}