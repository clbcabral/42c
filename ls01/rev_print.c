#include <unistd.h>
#include <stdio.h>

int main (int argc, char *args[]) {
    if (argc == 2) {
        int i = 0;
        while (args[1][i]) {
            i += 1;
        }
        while (i) {
            write(1, &args[1][i - 1], 1);
            i -= 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}