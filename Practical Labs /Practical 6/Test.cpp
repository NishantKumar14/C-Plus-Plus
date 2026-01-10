#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	// Task  - 1

	/*string str = "Nishant";
	int a = 1;
	string str1 = str + a;
	cout << str1 << endl;*/

	// Task - 2

	/*char str[100];
    int l, r, length = 0;
    cout << "Enter a string : ";
    cin >> str;
     
    // Finding length of string

    while(str[length] != '\0')
        length++;
          
    // Initialize l(left) and r(right) to first and 
    // last character of input string

    l = 0;
    r = length - 1;
    
    // Compare left and right characters, If equal then 
    // continue otherwise not a palindrome
    
    while(l < r) {
        if(str[l] != str[r]) {
            cout << "String not a Palindrome" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "String is a Palindrome" << endl;*/

    // Task - 3

    // Sir, I am unable to understan the what Task - 3, 5 & 6 wants to ask me.

    // Task - 4

    const char *str_inp1="Nishant";
   	const char *str_inp2="Nishant";
    
	cout<<"String 1:"<<str_inp1<<endl;
	cout<<"String 2:"<<str_inp2<<endl;
 
    if (strcmp(str_inp1, str_inp2) == 0)
        cout << "\nBoth the input strings are equal." << endl;
    else
        cout << "The input strings are not equal." << endl;

	return 0;
}