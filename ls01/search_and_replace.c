#include <unistd.h>

int main (int argc, char *args[]) {
    if (argc == 4 && !args[2][1] && !args[3][1]) {
        int i = 0;
        while (args[1][i]) {
            if (args[1][i] == args[2][0]) {
                args[1][i] = args[3][0];
            }
            write(1, &args[1][i], 1);
            i += 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}