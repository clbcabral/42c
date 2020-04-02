#include <unistd.h>

void ft_print_numbers(void) {
	write(1, "123456789\n", 10);
}

int main(void) {
	ft_print_numbers();
}
