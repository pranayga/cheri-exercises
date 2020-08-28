#include <stdio.h>

char buffer[128];
char c;

void
fill_buf(char *buffer, size_t len)
{
	for (size_t i = 0; i <= len; i++)
		buffer[i] = 'b';
}

#include "main-asserts.inc"

int
main(void)
{
	main_asserts();

	fill_buf(buffer, sizeof(buffer));

	printf("c = %d\n", c);

	return 0;
}