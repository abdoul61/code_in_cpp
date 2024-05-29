#include<iostream>
#include<stdlib.h>
#include<stdio.h>

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
	Display(r);
	r3 = Union(&r,&r2);
	printf("The union of r1 and r2 is\n");
	Display(*r3);
	return  0;
}






