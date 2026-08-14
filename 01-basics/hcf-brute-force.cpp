#include <iostream>
using namespace std ; 
int num1,num2 ;
void hcf_check(int num1,int num2) {
    int i = 1 ;
    if (num1 == 0 or num2 == 0) {
        cout << max(num1,num2) ;
    }
    else if (num1 < 0 or num2 < 0) {
        cout << "Negative numbers not allowed" ;
    }
    else {
        for (i=min(num1,num2);i>=1;i--) {
           if (num1%i == 0 && num2%i == 0) {
              cout<< i ;
            }
        }     
    }
}

int main() {
    cout << "Enter first number: " ;
    cin >> num1 ;
    cout << "Enter second number: " ;
    cin >> num2 ;
    cout << "Highest common factor: " ;
    hcf_check(num1,num2) ;
    
    return 0;
}