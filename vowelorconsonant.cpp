#include <iostream>
#include <string>
using namespace std;

int main() {
char c;
bool a,b;

    cout << "Enter an alphabet: ";
    cin >> c;
    a = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    b = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(!isalpha(c))
    	cout << "non alphabetic";
    	else if( a || b)
    		cout << "vowel";
    	else 
    		cout << "consonant";
    		return 0;
	}

