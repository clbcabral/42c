#include <unistd.h>

int main (int argc, char* args[]) {
    if (argc == 3) {
        int i = 0;
        int j = 0;
        while (args[2][i]) {
            if (args[2][i] == args[1][j]) {
                j++;
            }
            i++;
        }
        if (!args[1][j]) {
            i = 0;
            while (args[1][i]) {
                write(1, &args[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}