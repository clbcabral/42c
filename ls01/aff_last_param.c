#include <unistd.h>

int main(int argc, char *args[]) {
    if (argc > 1) {
        int s = 0;
        while (args[argc-1][s]) s += 1;
        write(1, args[argc-1], s);
    }
    write(1, "\n", 1);
    return 0;
}