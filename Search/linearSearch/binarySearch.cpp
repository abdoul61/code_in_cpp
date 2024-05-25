#include<iostream>
#include<stdio.h>
#include<stdlib.h>


struct Array{
	int *A ;
	int size;
	int length;
};

void display(struct Array array){
	int i;
	for(i = 0; i < array.length;i++){
		printf("%d",array.A[i]);
	}
}
int binaryS(struct Array array,int target){
	int left = 0;
	int right = array.length -1;
	while(left <= right){
		int mid = (left + right)/ 2;
		if(array.A[mid] == target){
			return mid;
		}else if(target < array.A[mid]){
			right = mid - 1;
		}else{
			left  = mid + 1;
		}
	}
	return -1;
}
int main(){

	struct Array array;
	printf("\n Enter the value of the size of your arraty \n");
	scanf("%d",&array.size);
	// printf("%d",value);

	array.A = (int *)malloc( array.size * sizeof(int));
	int i;
	int n;
	printf("\n how many items do you want?  \n");
	scanf("%d",&n);

	for(i = 0; i < n; i++){
		scanf("%d",&array.A[i]);
		array.length++;
	}

	display(array);
	printf("%d\n",binaryS(array,10));
	display(array);
	free(array.A);
	return 0;
}
