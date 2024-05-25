

#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct Array {
public:
	int A[10];
	int length;
	int size;
};

// ***************************
// Functions
// ******************
// swapp function that swapp two element from the same array 
void swapp(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
// function to swapp all the negatifs element from the right side
// with the positives elements on the left side.
void onTheLeft(struct Array *array){
	int i = 0;
	int j = array->length -1;
	while(i < j){
		while(i < array->length && array->A[i] < 0) i++;
		while(j >= 0 && array->A[j] > 0) j--;
		swapp(&array->A[i],&array->A[j]);
		i++;
		j--;
	}
}

// function to check if an array is sorted
int isSorted(struct Array array){
	int i;
	for(i = 0; i < array.length; i++){
		if(i+1 < array.length && array.A[i] > array.A[i+1]){
			return 0;
		}
	}
	return 1;
}
void insertInSorted(struct Array *array,int el){
	//int i = 0;
	//[12,[new input],13,14]
	// J
	int j = array->length-1;
	while(array->A[j] > el && j >= 0){
			if(array->length == array->size){
			return;
		}
			array->A[j+1] = array->A[j];
			j--;
		}
		array->A[j+1] = el;
		array->length++;
	}

void Display(struct Array array){
	for(int i = 0; i < array.length;i++){
		printf("%d\n",array.A[i]);
	}
}

int main()
{
	struct Array array = {{3,4,5,6,7,12,32,43},8,10};
	struct Array array2 = {{-6,3,-8,10,5,-7,-9,12,-4,2},10,10};
	printf("displaying an array \n");
	printf("length of the array is %d\n",array.length);
	Display(array);
	insertInSorted(&array,20);
	Display(array);
	printf("check if array is sorted \n");
	printf("%d\n",isSorted(array));
	printf("length of the array is %d\n",array.length);
	printf("Working...\n");
	printf("new function called\n");
	printf("Initial array \n");
	Display(array2);
	printf("changing array\n");
	onTheLeft(&array2);
	printf("Final version\n");
	Display(array2);
	return 0;
}








