#include <unistd.h>

int main (int argc, char *args[]) {
    if (argc == 2) {
        int i = 0;
        while (args[1][i]) {
            if (args[1][i] == 'z' || args[1][i] == 'Z') {
                args[1][i] -= 25;
            } else if ((args[1][i] >= 'a' && args[1][i] <= 'y') 
                || (args[1][i] >= 'A' && args[1][i] <= 'Y')) {
                args[1][i] += 1;
            }
            write(1, &args[1][i], 1);
            i += 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}