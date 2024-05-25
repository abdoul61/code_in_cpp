#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int sumof(int n){
	if(n == 0){
		return 0;
	}
	return sumof(n-1) + n;

}


int main(){
	int r;
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>r;
	std::cout<<"The sum of "<< r << "numbers is"<<sumof(r)<<std::endl;

	return 0;

}
