#include <unistd.h>

int main(void) {
    char alpha[] = "abcdefghijklmnopqrstuvwxyz\0";
    int i = 0;
    while (alpha[i]) {
        if (i % 2 != 0) {
            alpha[i] -= 32;
        }
        i += 1;
    }
    write(1, alpha, i);
    write(1, "\n", 1);
    return 0;
}