// Note: char can be signed on some compilers, causing negative array 
// indexing for extended (non-ASCII) byte values. Fixed by casting to 
// unsigned char before indexing.
#include <iostream>
#include <string> 
using namespace std ;
int arr[256] = {0} ;

// storing number of elements in array arr[] using hashing 
void func(string str) {
    for (int i=0 ; i< str.size() ; i++) {
        arr[(unsigned char)str[i]]++ ;
    } 
}

// searching number of elements in the array 

int main() {
    string str ;
    char character ;
    int f=0, num=1;
    cout << "Enter the string : " << endl ;
    getline(cin,str);
    func(str) ;
    while (num==1) {
        cout << "Want to search for a character(1/2)? \n1 - yes\n2 - no" << endl ;
        cin >> num ;
        if (num!=1) break ;
        cin.ignore(1000,'\n') ; // Clears the leftover newline characters in the input buffer, until it finds \n , and delete that too an then stops
        cout << "Enter the character : " ;
        cin.get(character) ;
        cout << "Occurrences of '" << character << "': " << arr[(unsigned char)character] << endl;
    }
    cout << "Program ended.";

    return 0;
}