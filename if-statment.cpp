#include <iostream>
#include <string>

int main() {
    // Write C++ code here
    int num;
    std::cout<< "enter a number: ";
    std::cin>> num;
    std::string result = (num > 85) ? "very good" : " ";
    std::cout<< result;
    return 0;
}
