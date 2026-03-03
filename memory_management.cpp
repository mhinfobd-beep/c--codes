#include <iostream>

int main() {
  
    int* ptr = new int; 

    *ptr = 3355; 

    std::cout << "--- Memory Management Logic ---" << std::endl;
    std::cout << "Stored Value: " << *ptr << std::endl;
    
    std::cout << "Memory Address: " << ptr << std::endl;

    delete ptr; 
    
    std::cout << "Memory has been cleared successfully!" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    return 0;
}
