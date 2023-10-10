#include <stdio.h>
void main()
{
	short birthday;
	short *ptr;
	ptr = &birthday;

	printf("birthday 변수의 주소는 %p 입니다. \n", ptr);
}