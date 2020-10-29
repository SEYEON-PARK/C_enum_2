#include <stdio.h>

enum a {
	three = 3, five = 5, six
};

int main(void)
{
	enum a r;
	r = six;
	printf("%d\n", r);

	return 0;
}