#include <unistd.h>

int main (int argc, char *args[]) {
    if (argc == 2) {
        int i = 0;
        int started = 0;
        while (args[1][i]) {
            if (args[1][i] != '\t' && args[1][i] != ' ') {
                if (started == 0) {
                    started = 1;
                }
                write(1, &args[1][i], 1);
            } else if (started) {
                break;
            }
            i += 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}