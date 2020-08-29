#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    cout << boolalpha << endl;
    Mystring a {"jace"};
    Mystring b {"frank"};

    cout << "Should print true: " << (a==b) << endl;         // true
    cout << "Should print false: " << (a!=b) << endl;          // false
    
    b = "george";
    cout << "Should print false: " << (a==b) << endl;         // false
    cout << "Should print true: " << (a!=b) << endl;          // true
	cout << "Should print true: " << (a<b) << endl;          // true
    cout << "Should print false: " << (a>b) << endl;           // false
    
    Mystring s1 {"FRANK"};
    s1 = -s1;       
    cout << "Should print frank: " << s1 << endl;               // frank              

    s1 = s1 + "*****";
    cout << "Should print frank*****: " << s1 << endl;               // frank*****       
    
    s1 += "-----";                        // frank*****-----
    cout << "Should print frank*****-----: " << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << "Should print 123451234512345: " << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << "Should print abcdefabcdefabcdefabcdefabcdef: " << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Frank";
    ++s;
    cout << "Should print FRANK: " << s << endl;                  // FRANK
    
    s = -s; 
    cout << "Should print frank: " << s << endl;                  // frank
    
    Mystring result;
    result = ++s;                           
    cout << "Should print FRANK: " << s << endl;                  // FRANK
    cout << "Should print FRANK: " << result << endl;           // FRANK
    
    s = "Frank";
    s++;
    cout << "Should print FRANK: " << s << endl;                  // FRANK
    
    s = -s;
    cout << "Should print frank: " << s << endl;                  // frank
    result = s++;
    cout << "Should print FRANK: " << s << endl;                  // FRANK
    cout << "Should print frank: " << result << endl;           // frank
    
    return 0;
}