#include <stdio.h>
void Swap(int *pa, int *pb)
{ 
	int temp = *pa; /* *pa(start) = 96, *pb(end) = 5 */ 
	*pa = *pb; /* *pa(start) = 5, *pb(end) = 5 */ 
	*pb = temp; /* *pa(start) = 5, *pb(end) = 96 */
}

void main(){ 
	int start = 96, end = 5; 

	printf("before : start = %d, end = %d\n", start, end); 
	if(start > end) { 
		Swap(&start, &end); /* start와 end의 값을 바꾸기 위해서 Swap을 호출함 */ 
	} 
	printf("after : start = %d, end = %d\n", start, end);
}