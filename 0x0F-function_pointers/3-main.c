#include "3-calc.h"
/**
 *main - Contain your main function
 *@argc: Check n of arguments
 *@argv: Check
 *Return: 0
 */
int main(int argc, char **argv)
{
	int all_operations;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	all_operations = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", all_operations);
	return (0);
}
