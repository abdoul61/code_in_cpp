

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
void swapp(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void onTheLeft(struct Array *array){
	int i = 0;
	int j = array->length -1;
	while(i < j){
		while(i < array->length && array->A[i] < 0) i++;
		while(j >= 0 && array->A[j] > 0) j--;
		swapp(array->A[i],array->A[j]);
		i++;
		j--;
	}
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
	printf("length of the array is %d\n",array.length);
	printf("Working...");
	return 0;
}
