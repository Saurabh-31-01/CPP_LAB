#include<iostream>
using namespace std;

class Myarray{
	int data[5];
	
	public: 
		int& operator[](size_t index){
			if(index >= 0 && index < 5){
				return data[index];
			}else{
				cout << "Index out of bounds" << endl;
			}
		}
};

int main(){
	Myarray arr;
	
	arr[0] = 42;
	arr[1] = 10;
	
	cout << "value at index 0 : " << arr[0] << endl;
	cout << "value at index 1 : " << arr[1] << endl;
	
	cout << "value at index 10 : " << arr[10] << endl;
	
	return 0;
}
