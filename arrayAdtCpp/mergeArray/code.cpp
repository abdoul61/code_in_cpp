// Here in this code we'll go over how 
// to merge two arrays in cpp.



#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct Array {
	int A[10];
	int length;
	int size;
};

// display function
void Display(struct Array array){
	for(int i = 0; i < array.length;i++){
		printf("%d\n",array.A[i]);
	}

}

// Merge Function
struct Array* merge(struct Array *r1,struct Array *r2){
	struct Array *array = (struct Array *)malloc(sizeof(struct Array));
	int i = 0;
	int j = 0;
	int k = 0;
	// Initial loop to merge both array as long as they both have element at the same index
	while (i < r1->length && j < r2->length){
		if(r1->A[i] < r2->A[j]){
			array->A[k++] = r1->A[i++];
		}else{
			array->A[k++] = r2->A[j++];
		}
	}

// Copy the rest of the element from r1 if needed
		for(; i < r1->length; i++){
			array->A[k] = r1->A[i];
			k++;
		}
// Copy the rest of the element from r2 if needed 
		for(;j < r2->length; j++){
			array->A[k] = r2->A[j];
			k++;
	}
	// update the lengt of the new array and the size as well
	array->length = r1->length + r2->length;
	array->size = 10;

	// return the new Array
	return array;
}

int main(){
	struct Array arr1 = {{12,13,14,22,25},5,10};
	struct Array arr2 = {{11,15,20,23,24},5,10};
	struct Array *arr3;
	arr3 = merge(&arr1,&arr2);
	Display(*arr3);
	return 0;
}
