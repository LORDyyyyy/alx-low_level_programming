#include "main.h"

/**
 * isprime - checks if prime of not
 * @x: the number
 * @i: iterator
 *
 * Return: answer
 */
int isprime(int x, int i)
{
	if (i == 1 || i == 0)
		return (i);
	else if (x % i == 0)
		return (0);
	return (isprime(x, i - 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: the number
 *
 * Return: the answer
 */
int is_prime_number(int n)
{
	return (isprime(n, n / 2));
}
