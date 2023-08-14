#include <stdio.h>

void main()
{
	signed char temperature;
	temperature = -2;

	unsigned char age;
	age = 52;

	printf("%d", temperature);
	printf("%d", age);

	signed long int money;
	money = 7000000;

	unsigned long int time_seconds;
	time_seconds = 145310624;

	printf("%d", money);
	printf("%d", time_seconds);
}