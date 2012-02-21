#include <stdio.h>

char data[]="karel";

void func(char *buffer, char *arg)
{
	strcpy(buffer, arg);
}

int main(int argc, char *argv[])
{
	char buffer[16];

	func(buffer, argv[1]);

	return 0;
}
