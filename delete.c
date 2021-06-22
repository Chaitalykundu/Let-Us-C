#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _BV(x) 1<<x
#define _ls(x,y) x<<y
#define _rs(x,y) x>>y

int main()
{
	unsigned char num, andmask = 0;
	printf("Enter the number : ");
	scanf("%hhd", &num);
	andmask = _BV(3) | _BV(5);
	num |= andmask;
	printf("%d", num);
	_getch();
	return 0;
}