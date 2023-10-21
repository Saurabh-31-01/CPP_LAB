#include<iostream>
using namespace std;

template <class t>
void swap1(t& a, t& b){
	t temp = a;
	a = b;
	b = temp;
}

template <class T1>
T1* bubbleSort(T1 arr[6], T1 size){
	
	for(T1 i = 0; i < size - 1; i++){
		
		for(T1 j = 0; j < size - i - 1; j++){
			
			if(arr[j] > arr[j + 1]){
				swap1(arr[j], arr[j+1]);
			}
		}
	}
	
	return arr;
}


int main(){
	int arr[] = {40, 50, 100, 4, 10, 2};
	
	cout << "Before sort :- " ;
	for(int i = 0; i < 6; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl;
	int* arr1 = bubbleSort(arr, 6);	
	
	cout << "After sort :- " ;
	for(int i = 0; i < 6; i++){
		cout << arr1[i] << " ";
	}
}
