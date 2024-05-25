
#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
// ********************************************************************************
// Defined functions
// *************************************************************************
//
struct Arr {
	int * A;
	int size;
	int length;
};
void swapp(int *y,int *x){
	int temp = *y;
	*y = *x;
	*x = temp;
}
// using two loop and extra array with the same size as the original one
void verse(struct Arr *a){
	printf("Array is being reversed...\n");
	int *B;
	int i,j;
	B = (int *)malloc(a->length * sizeof(int));
	for(i = a->length - 1, j = 0; i >= 0; i--, j++){
		B[j] = a->A[i];
	}
	for(i = 0; i < a->length; i++){
		a->A[i] = B[i];
	}
}

// using the swapp
void reverse_s(struct Arr *a){
	int i,j;
	for(i=0,j= a->length-1;i< j;i++,j--){
		swapp(&a->A[i],&a->A[j]);
	}

}

// using the shift and Rotate
void reverse_lr(struct Arr *a,int l){

}

void display(struct Arr arr){
	int length = arr.length;
	for(int i = 0; i < length;i++){
		printf("element %d is %d \n",i,arr.A[i]);
	}
}
// ********************************************************************************
// Main function
// *************************************************************************
int main(){
	struct Arr array;
	int l = 5;
	array.A = (int *)malloc(l  * sizeof(int));
	array.length = 0;
	for(int i = 0; i < l; i++){
		printf("add an element \n");
		scanf("%d",&array.A[i]);
		array.length++;
	}

display(array);
printf("The element to be reverserd after this line\n");
reverse_s(&array);
array.A[0] << 1;
display(array);
return 0;
}





