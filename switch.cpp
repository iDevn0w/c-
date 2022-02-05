#include <iostream>
#include <string>
using namespace std;
int main() {
    int num;
    cout<< "enter a number: ";
    cin >> num;
    switch (num){
      case 85 ... 100:
        cout << "very good";
        break;
      case 70 ... 84:
        cout << "not bad";
        break;
      default:
        cout << "try again";
        break;
    }
    return 0;
}
