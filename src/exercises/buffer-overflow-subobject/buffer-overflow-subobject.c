#include <stdio.h>

struct buf {
	char buffer[128];
	int i;
} b;

void
fill_buf(char *buf, size_t len)
{
	for (size_t i = 0; i <= len; i++)
		buf[i] = 'b';
}

int
main(void)
{
	fill_buf(b.buffer, sizeof(b.buffer));

	printf("b.i = %d\n", b.i);

	return 0;
}

#include "asserts.inc"