#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Retuen: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the product of two numbers.
 * @a: Thr first number.
 * @b: The second number.
 * Return: The diffrence of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @d: The second number.
 * Return: The remainder of the division of two numbers.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
