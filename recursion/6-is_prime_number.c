#include "main.h"

/**
 * findPrime - function that verifies if number is prime
 * @n: receives the num from main
 * @factor: var that will find factor
 * Return: returns 1 if a prime num is found
*/

int findPrime(int n, int factor)
{
	if (factor * factor > n)
	{
		return (1);
	}
	if (n % factor == 0)
	{
		return (0);
	}
	return (findPrime(n, factor + 1));
}

/**
 * is_prime_number - function that receives number
 * @n: receives number from main
 * Return: returns 0 if number is not prime
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (findPrime(n, 2));
}
