#include <stdio.h>
void Swap(int a, int b)
{ 
	int temp = a; /* a = 96, b = 5 */ 
	a = b; /* a = 5, b = 5 */ 
	b = temp; /* a = 5, b = 96 */
}

void main(){ 
	int start = 96, end = 5; 

	printf("before : start = %d, end = %d\n", start, end); 
	if(start > end) { 
		Swap(start, end); /* start�� end�� ���� �ٲٱ� ���ؼ� Swap �Լ��� ȣ���� */ 
	} 
	printf("after : start = %d, end = %d\n", start, end);
}