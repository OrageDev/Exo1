#include "my_print_alpha.h"
#include "my_put_char.h"

int my_print_alpha()
{
	for (int i = 97; i < 123; i++) {
		my_put_char(i);
	}
	my_put_char('\n');
}