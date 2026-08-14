#include <iostream>
using namespace std; 
int num ;
void sum_func(int n, int accumulated_sum) {
    if (n<1) {
        if (n==0) {
          cout << accumulated_sum ;
          return ;
        }
        else {
          cout << "Negavtive numbers not allowed!!" ;
          return ;
        }
    }
    sum_func(n-1,accumulated_sum+n) ;
}
int main() {
    cout << "Enter the number: " ;
    cin >> num ;
    sum_func(num,0) ;
    return 0;
}