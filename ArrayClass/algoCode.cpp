#include<iostream>
#include<stdlib.h>


using namespace std;
class Array{
private:
	int *A;
	int size;
	int length;

// [1,2,4,5,6,8,9,12]
public:
	Array(){
		A = new int[10];
		length = 0;
		size = 10;
	};
	~Array(){
		delete []A;
	};
void findMissing();
void Display();
void Insert(int index ,int x);
};

void Array::findMissing(){
	std::cout<<"function findMissing is running.."<<endl;
			int diff = A[0] - 0;
		 for(int i = 0; i < length; i++){
			if(diff != A[i] - i){
				while(diff < (A[i] - i)){
					printf("Element %d is missing\n",diff + i);
					diff++;
				}
			}
		}
	};


void Array::Insert(int index,int x){
		if(index >= 0 && index < length){
			for(int i = length -1; i >= index; i--){
				A[i+1] = A[i];
			}
		}
	A[index] = x;
	length++;
}


void Array::Display(){
		for(int i = 0; i < length; i++){
		  std::cout<<A[i]<<" ";
		 	std::cout<<endl;
		}
};


int main()
{
 Array arr;
 arr.Insert(0,1);
 arr.Insert(1,2);
 arr.Insert(2,3);
 arr.Insert(3,4);
 arr.Insert(4,8);
 arr.findMissing();
 arr.Display();
 return 0;
}
