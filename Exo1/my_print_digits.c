#include "my_print_digits.h"
#include "my_put_char.h"


int my_print_digits() {
	for (int i = 48; i < 58; i++) {
		my_put_char(i);
	}
	my_put_char('\n');
}
