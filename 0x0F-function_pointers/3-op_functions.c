#include "3-calc.h"
/**
 * op_add - Contain addition
 * @a: Variable num1
 * @b: Variable num2
 * Return: Function
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Contain subtraction
 * @a: Variable num1
 * @b: Variable num2
 * Return: Function
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: Variable num1
 * @b: Variable num2
 * Return: Function
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: Variable num1
 * @b: Variable num2
 * Return: Function
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo
 * @a: Variable num1
 * @b: Variable num2
 * Return: Function
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
