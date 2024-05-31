#include<iostream>
#include<stdlib.h>
#include<stdio.h>
// This is the function that can be used with an array as data struture
// in C++ but most of the code is written in C, a mix of c and c++
// structure of an array with pointer/array and the size, length
struct Array {
	int A[10];
	int length;
	int size;
};

// function to union two array

struct Array* Union(struct Array *r1,struct Array *r2){
	struct Array *result = (struct Array *)malloc(sizeof(struct Array));
	int i,j,k;
	i=j=k=0;
	while(i < r1->length && j < r2->length){
		// if r1 element is smaller add him first
		// then increment
		if(r1->A[i] < r2->A[j]){
			result->A[k++] = r1->A[i++];

			// if r2 element is smaller add him then and increment
		}else if(r2->A[j] < r1->A[i]){
			result->A[k++] = r2->A[j++];
			// if there are both the same, then add one of them and increment the other pointer as well
		}else{
			result->A[k++] = r2->A[j++];
			i++;

		}
	}

	for(;i < r1->length;i++){
		result->A[k++] = r1->A[i];
	}
	for(;j < r2->length;j++){
		result->A[k++] = r2->A[j];
	}

	result->length = k;
	result->size = 10;
	return result;
}
// This function perform an intersection between two arrays
struct Array* Intersection(struct Array *r1,struct Array *r2){
	struct Array *result = (struct Array *)malloc(sizeof(struct Array));
	int i,j,k;
	i=j=k=0;
	while(i < r1->length && j < r2->length){
		// In this case i should only copy one element if they are both equal
		if(r1->A[i] < r2->A[j]){
			// element not equal; so not copy
			i++;

		}else if(r2->A[j] < r1->A[i]){
			// element not equal; so not copy
			 j++;
			// if there are both the same, then add one of them and increment the other pointer as well
		}else{
			result->A[k++] = r2->A[j++];
			i++;

		}
	}

	result->length = k;
	result->size = 10;
	return result;
}

// This function is the Difference between two arrays
struct Array* Difference(struct Array *r1,struct Array *r2){
	struct Array *result = (struct Array *)malloc(sizeof(struct Array));
	int i,j,k;
	i=j=k=0;
	// Here the idea is the take the difference between both arrays
	while(i < r1->length && j < r2->length){
		if(r1->A[i] < r2->A[j]){
			result->A[k++] = r1->A[i++];
		}else if(r2->A[j] < r1->A[i]){
			j++;
			// if there are both the same, then add one of them and increment the other pointer as well
		}else{
			i++;
			j++;

		}
	}

	for(;i < r1->length;i++){
		result->A[k++] = r1->A[i];
	}

	result->length = k;
	result->size = 10;
	return result;
}
// function to display
void Display(struct Array array){
	for(int i = 0; i < array.length;i++){
		printf("%d\n",array.A[i]);
	}
}

int main(){
	struct Array r = {{2,6,10,15,25},5,10};
	struct Array r2 = {{3,6,7,15,20},5,10};
	struct Array *r3;
	struct Array *r4;
	struct Array *r5;
	Display(r);
	r3 = Union(&r,&r2);
	printf("The union of r1 and r2 is\n");
	Display(*r3);
	r4 = Intersection(&r,&r2);
	printf("The intersection of r1 and r2\n");
	Display(*r4);
	r5 = Difference(&r, &r2);
	printf("The difference between Array 1 and array 2 is \n");
	Display(*r5);
	return  0;
}






