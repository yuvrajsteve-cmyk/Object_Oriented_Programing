#include <iostream>


int main () {

    int arr[7] = {12, 34, 45, 56, 75, 88};
    int size = 6;
    int element = 100;

    arr[size] = element;
    size++;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 45){
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            break;
            
        }
        
        
    }
    for (int k = 0; k < size; k++) {
        std::cout << "Array is: " << arr[k] << std::endl;
    }

    
   


    return 0;
}