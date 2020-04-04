#include <unistd.h>

int main(int argc, char *args[]) {
    if (argc == 2) {
        int i = 0;
        while (args[1][i]) {
            if (args[1][i] == 'z') {
                write(1, "z", 1);
                break;
            }
            i += 1;
        }
    } else {
        write(1, "z", 1);
    }
    write(1, "\n", 1);
    return 0;
}