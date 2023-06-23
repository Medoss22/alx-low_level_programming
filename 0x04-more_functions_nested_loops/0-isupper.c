/*
 * File: 0-isupper.c
 * Auth: Suara Ayomide
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @char: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int char)
{
	if (char >= 'A' && char <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
