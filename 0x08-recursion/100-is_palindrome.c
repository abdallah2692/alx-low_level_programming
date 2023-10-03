#include "main.h"
/**
 * last_index - return the last index
 * @s: pointer to a string
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int st, int e, int m);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - check is_palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
int e = last_index(s);

return (check(s, 0, e - 1, e % 2));
}

/**
 * check - check is_palindrome
 * @s: string
 * @st: move from R to L
 * @e: from L to R
 * @m: int
 * Return: 0 or 1
 */
int check(char *s, int st, int e, int m)
{
if ((st == e && m != 0) || (st == e + 1 && m == 0))
return (1);
else if (s[st] != s[e])
return (0);
else
return (check(s, st + 1, e - 1, m));
}