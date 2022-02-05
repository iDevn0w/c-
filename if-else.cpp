#include <iostream>
#include <string>
using namespace std;
int main() {
    // Write C++ code here
    int num;
    cout<< "enter a number: ";
    cin >> num;
    string result = (num > 85) ? "very good" : ((num > 70) ? "not bad": "try again");
    cout<< result;
    return 0;
}
