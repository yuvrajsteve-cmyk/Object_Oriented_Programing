#include <iostream>


int main () {

    int arr[7] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int element = 70;

    arr[size] = element;
    size++;
    for(int i = 0; i < size; i++) {
        std::cout << "Array is: " << arr[i] << std::endl;
    }

   

    


  


    return 0;
}