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
		printf("%d",array.A[i]);
	}

}

// Merge Function
void merge(struct Array r1,struct Array r2,struct Array *r3){
	int myL = 0;
	if(r3->length < (r1.length + r2.length)){
		printf("Not enougth space to merge both arrays\n");
		return;
	}
	if(r1.length < r2.length){
		myL = r1.length;
	}else{
		myL = r2.length;
	}
	
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < myL && j < myL){
		if(r1.A[i] < r2.A[j]){
			r3->A[k] = r1.A[i];
			i++;
		}else{
			r3->A[k] = r2.A[j];
			j++;
		}
		k++;
	}
	if(r1.length > k){
		for(int r = i; r < r1.length; r++){
			r3.A[k] = r1.A[r];
			k++;
		}
	}
if(r2.length > k){
		for(int r = i; r < r2.length; r++){
			r3.A[k] = r2.A[r];
			k++;
		}
	}
}

int main(){
	struct Array arr1 = {{12,13,14,22,25},5,10};
	struct Array arr2 = {{11,15,20,23,24},5,10};
	struct Array arr3 = {{},0,10};
	Display(arr3);
	return 0;
}
