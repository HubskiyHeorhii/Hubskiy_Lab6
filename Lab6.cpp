#include <iostream> 
using namespace std; 
void SA(int* arr1, int* arr2, int size) { 
for (int i = 0; i < size; i++) { 
*(arr1 + i) ^= *(arr2 + i); 
*(arr2 + i) ^= *(arr1 + i); 
*(arr1 + i) ^= *(arr2 + i); 
} 
} 
int main() { 
const int size = 5; 
int arr1[size] = {6, 7, 2, 3, 11}; 
int arr2[size] = {5, 4, 0, 2, 4}; 
cout << "Arr1 to draft: "; 
for (int i = 0; i < size; i++) { 
cout << arr1[i] << " "; 
} 
cout << endl; 
cout << "Arr2 to draft: "; 
for (int i = 0; i < size; i++) { 
cout << arr2[i] << " "; 
} 
cout << endl; 
SA(arr1, arr2, size); 
cout << "Arr1 after draft: "; 
for (int i = 0; i < size; i++) { 
cout << arr1[i] << " "; 
} 
cout << endl; 
cout << "Arr2 after draft: "; 
for (int i = 0; i < size; i++) { 
cout << arr2[i] << " "; 
} 
cout << endl; 
return 0; 
}
