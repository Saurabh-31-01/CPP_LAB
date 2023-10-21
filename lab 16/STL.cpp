#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> v = { 1, 2, 3, 4, 5 };
      
    
    vector<int>::iterator ptr;
      
    for (ptr = v.begin(); ptr < v.end(); ptr++)
        cout << *ptr << " ";
      
    return 0; 
	
}
