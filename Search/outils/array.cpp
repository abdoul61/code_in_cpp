#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct Array{
	int *A;
	int size;
	int length;
};

void display(struct Array array){
	int i;
	for(i = 0; i < array.length;i++){
		printf("%d",array.A[i]);
	}
}
int main(){
  int n;	
	int i;
	struct Array container;
	printf("\n Enter a the size of the array \n");
	scanf("%d",&container.size);
	container.A = (int *)malloc(container.size * sizeof(int));
	//40bytes because the int = 4 bytes * 10 elements max
	//length is the number of element already in used
	// Here i will add some element into the array
	printf("\n Enter a the number of elements \n");
	scanf("%d",&n);
	std::cout<< n << std::endl;

	for(i = 0; i < n;i++){
		scanf("%d",&array.A[i]);
		array.length++;
	}

  display(array);

	free(array.A);

	return 0;
}

