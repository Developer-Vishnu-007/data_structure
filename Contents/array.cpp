/* #include<iostream>

int main(){
    // Creating an array of integers with a specified size (in this case, 5)
    int myArray[5]; 
    // Assigning values to the elements of the array
    myArray[0]=10;
    myArray[1]=20;
    myArray[2]=30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Accessing and printing values from the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    
    return 0;
}
*/

/* #include <iostream>
#include <array>

int main() {
    // Creating an array of integers with a size of 5 using std::array
    std::array<int, 5> myArray = {10, 20, 30, 40, 50};

    // Accessing and printing values from the array
    std::cout << "Elements of the array: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }

    return 0;
}
*/
