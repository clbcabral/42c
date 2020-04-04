#include <unistd.h>

int main(int argc, char *args[]) {
	if (argc >= 2) {
		int s = 0;
		while (args[1][s]) s += 1;
		write(1, args[1], s);
	}
	write(1, "\n", 1);
	return 0;
}
