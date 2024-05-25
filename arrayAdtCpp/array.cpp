// This code is for the Array ADT
//
//
//



#include<iostream>
#include<stdio.h>
#include<stdlib.h>

// data structure 
struct Array
{
	int *A;
	int size;
	int length;
};

// function to display all the element of the array
void display(struct Array arr){
	int i;
	printf("\nElements are\n");
	for(i = 0; i < arr.length; i++){
		printf("%d ", arr.A[i]);
	}
}


// function to append a new element into the array
void Append(struct Array *arr,int x){
	if(arr->length < arr->size){
		arr->A[arr->length++] = x;
	}
}

// Insert function
void Insert(struct Array *arr, int idx,int x){
	int i;
	if(idx >=0 && idx < arr->length){
		for(i = arr->length; i > idx;i--)	{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[idx] = x;
		arr->length++;
	}
}
// function to delete an element from an array
// to proper delete, you should just shift element 
// starting from the idx given of the element
int Delete(struct Array *arr,int idx){
	int i;
	int x;
	if(idx >= 0  && idx < arr->length){
		x = arr->A[idx];
		 for(i = idx;i < arr->length - 1;i++){
			arr->A[i] = arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	return 0;
}
// main function 
int main(){

	// create a pointer to the 
	// struct Array arr ;
	// int n;
	// int i;
	// std::cout<<"Enter the size for your array"<<std::endl;
	// scanf("%d",&arr.size);
	// arr.A = (int *) malloc(arr.size*sizeof(int));
	// arr.length = 0;
	// printf("Enter number of numbers");
	// scanf("%d",&n);
 //  
	// printf("Enter all elements\n");
	// for(i = 0; i < n;i++){
	//  scanf("%d",&arr.A[i]);
	// }
	//
 // int a;
 // 
 // arr.length = n;
 // display(arr);
 // printf("\n");
 // printf("Enter a new number\n");
 // scanf("%d",&a);
 // Append(&arr,a);
 // display(arr);
 // Insert(&arr,3,36);
 // printf("\n");
 // display(arr);
 // printf("\n");
 // int result;
 // result = Delete(&arr,3);
 // printf("\nThe element deleted is n");
 // printf("%d",result);
 // display(arr);
 printf("\n");
 return 0;
}







