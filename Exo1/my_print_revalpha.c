#include "my_print_revalpha.h"
#include "my_put_char.h"

int my_print_revalpha() {
	for (int i = 122; i > 96; i--) {
		my_put_char(i);
	}
	my_put_char('\n');
}