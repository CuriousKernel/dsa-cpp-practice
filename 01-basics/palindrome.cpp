#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int num ;

void reverse_num(int num) {
    int last_num; 
    int copy_num = num;
    int rev_num = 0 ;
    if (num > 0) {
      while(num>0) {
        last_num = num%10 ;
        num = num/10 ;
        rev_num= rev_num*10 + last_num ;
      }
      cout << rev_num << endl ;
      if (rev_num == copy_num) cout << "palindrome" ;
      else cout << "not palindrome" ;
    }
    else if (num==0) cout << "palindrome" ;
      
    else cout << "not a palindrome" ;
}

int main() {
    cout << "Enter a digit :" ;
    cin >> num ;
    reverse_num(num);
    return 0;
}