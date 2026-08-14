#include <iostream>
using namespace std ;
int num1,num2 ;
int GCD(int a ,int b) {
     // Convert both numbers to their absolute positive values
    a = abs(a);
    b = abs(b);
    while (b!=0) {
      int remainder = a % b ;
      a = b ;
      b = remainder ;
    }
    return a ;
}

int main() {
    cout << "Enter first number : ";
    cin >> num1 ;
    cout << "Enter second number : ";
    cin >> num2 ;
    cout << "HCF of " << num1 << " & " << num2 << ": " << GCD(num1,num2) ;

}