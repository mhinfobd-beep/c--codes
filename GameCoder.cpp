#include <iostream>
#include <string>

void checkActivity(std::string mode) {
    if (mode == "Gaming") {
        std::cout << "Status: Analyzing Mechanics & Physics. (Learning Mode)" << std::endl;
    } else if (mode == "Programming") {
        std::cout << "Status: Building the Soul for the Art. (Creating Mode)" << std::endl;
    }
}

int main() {
    std::cout << "--- Shayan's Life Cycle ---" << std::endl;
    
    checkActivity("Gaming");
    checkActivity("Programming");
    
    std::cout << "Result: Both are interconnected. Never Quit!" << std::endl;
    
    return 0;
}
