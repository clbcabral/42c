#include <unistd.h>

int main (int argc, char *args[]) {
    if (argc == 2) {
        int i, letter = 0;
        while (args[1][i]) {
            letter = 0;
            if (args[1][i] >= 'A' && args[1][i] <= 'Z') {
                letter = args[1][i] - 64;
            } else if (args[1][i] >= 'a' && args[1][i] <= 'z') {
                letter = args[1][i] - 96;
            } else {
                letter = 1;
            }
            while (letter--) {
                write(1, &args[1][i], 1);
            }
            i += 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}