#include "main.h"
/**
*print_int - prints integer
*@args: argument to prints
*Return: number of characters print
*/
int print_int(va_list args)
{
int x = va_arg(args, int);
int num, lst = x % 10, digit, exp = 1;
int y = 1;

x = x / 10;
num = x;

if (lst < 0)
{
_putchar ('-');
num = -num;
x = -x;
lst = -lst;
y++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = x;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
y++;
}
}
_putchar(lst + '0');
return (y);
}
#include "main.h"
/**
*print_dec - prints decimal number
*@args: argument to print
*Return: number of characters
*/
int print_dec(va_list args)
{

int x = va_arg(args, int);
int num, lst = x % 10, digit, exp = 1;
int y = 1;

x = x / 10;
num = x;

if (lst < 0)
{
_putchar ('-');
num = -num;
x = -x;
lst = -lst;
y++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = x;
while (exp > 0)
{
digit = num / exp;
_putchar(digit + '0');
num = num - (digit *exp);
exp = exp / 10;
y++;
}
}
_putchar(lst + '0');
return (y);
}
