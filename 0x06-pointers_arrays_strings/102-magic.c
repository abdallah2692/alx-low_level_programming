#include <stdio.h>
/**
 * main - magic
 * Description: print array
 * Return: 0 always
*/
int main(void)
{
int n;
int b[5];
int *p;
b[2] = 1024;
p = &n;

*(p + 5) = 98;

printf("b[2] = %d\n", b[2]);
return (0);
}
