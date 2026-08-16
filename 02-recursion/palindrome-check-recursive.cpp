#include <iostream>
#include <string>
using namespace std ;
string word ;

bool palindrome_check(string input, int i) {
    if (i >= input.size()/2 ) return true  ;
    if (input[i] == input[word.size()-i-1]) {
        return palindrome_check(input,i+1) ;
    }
    else return false ;
}

int main() {
    cout << "Enter a word: " ;
    cin >> word ;
    if (palindrome_check(word,0) ==true) {
        cout << "Palindrome " ;
    }
    else cout << "Not a plaindrome" ;
    return 0;
}