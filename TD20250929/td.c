#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Enter number of seconds: ");

	int s = 0;
	scanf("%d", &s);

	if (s < 0)
		puts("Error"); // equivalent to printf("Error\n");
	else if (s > 86399)
		puts("Overflow");
	else
	{
		unsigned int hours = s / 3600;
		unsigned int minutes = (s % 3600) / 60;
		unsigned int seconds = s % 60;
		printf("%02u:%02u:%02u\n", hours, minutes, seconds); // %d for signed int and %u for unsigned int
	}

	return 0;
}

/* don't forget to "make app" after modifying this file and before "./app" 
	in the terminal, instead of retyping ./app, use the up and down arrows to navigate 
*/