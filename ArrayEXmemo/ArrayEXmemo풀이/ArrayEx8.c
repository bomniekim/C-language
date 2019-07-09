#include <stdio.h>

void main()
{
		
	int arr1[]= {10, 20, 30, 40, 50};
	int arr2[]= { 1,  2,  3,  4,  5};
	int arr3[5];
		
	for(int i=0; i<5; i++){
		arr3[i]= arr1[i]+arr2[4-i];
		printf( " %d ", arr3[i]);
	}
}




