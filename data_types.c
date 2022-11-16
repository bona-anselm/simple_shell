#include <stdio.h>
#include <string.h>

/**
 * main - Displays the size of enterred data type in stdout
 *
 * Return: 0 on success
 */
int main(void)
{
	char choice[10];

	do {
		printf("Enter a valid C basic data type: ");
		scanf("%s", choice);

		if (strcmp(choice, "char") == 0)
		{
			printf("The size of %s is %ld byte(s)\n", choice, sizeof(char));
		}
		else if (strcmp(choice, "int") == 0)
		{
			printf("The size of %s is %ld byte(s)\n", choice, sizeof(int));
		}
		else if (strcmp(choice, "float") == 0)
		{
			printf("The size of %s is %ld byte(s)\n", choice, sizeof(float));
		}
		else if (strcmp(choice, "double") == 0)
		{
			printf("The size of %s is %ld byte(s)\n", choice, sizeof(double));
		}
		else if (strcmp(choice, "0") == 0)
		{
			printf("Goodbye, Thanks for Asking!\n");
		}
		else
			printf("*%s* is not a valid basic C data typee\n", choice);
	} while (strcmp(choice, "0") != 0);

}
