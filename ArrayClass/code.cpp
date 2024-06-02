#include<iostream>

using namespace std;


template <class T>

class Array{
private:
	T *A;
	int size;
	int length;
public:
	// Constructors
	Array(){
		A = new T[10];
		size = 10;
		length = 0;
	}
	Array(int sz){
		size = sz;
		length = 0;
		A = new T[size];
	}

	// Destructor
	~Array()
	{
			delete []A;
	}

	// Class Methods
	void Display();
	void Insert(int index,T x);
	T Delete(int index);
};

template<class T>
void Array<T>::Display(){
	for(int i = 0;i < length; i++){
		std::cout<< A[i] << " ";
		std::cout<<endl;
	}
}

template<class T>
void Array<T>::Insert(int index,T x){
		if(index >= 0  && index <= length){
			for(int i = length-1;i >= index; i--){
			A[i+1] = A[i];
		}
	}
	A[index] = x;
	length++;
}

template<class T>
T Array<T>::Delete(int index){
	T x = 0;
	if(index >= 0 && index < length){
		x = A[index];
		for(int i=index; i < length; i++){
			A[i] = A[i + 1];
		}
		length--;
	}
	return x;
}



int main(int argc, const char * argv[])
{
	Array<int> arr(10);
	arr.Insert(0,10);
	arr.Insert(1,13);
	arr.Display();
	arr.Insert(2,11);
	std::cout<<"New list being displayed"<<std::endl;
	std::cout<< arr.Delete(1) << "has been deleted "<<endl;
	arr.Display();
	return 0;
}
