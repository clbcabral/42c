#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *args[]) {
    if (argc == 4) {
        int result;
        int a = atoi(args[1]);
        int b = atoi(args[3]);
        switch (args[2][0]) {
            case '+':
            result = a + b;
            break;
            case '-':
            result = a - b;
            break;
            case '*':
            result = a * b;
            break;
            case '/':
            result = a / b;
            break;
        }
        printf("%d", result);
    }
    printf("\n");
    return 0;
}