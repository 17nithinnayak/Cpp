#include<iostream>
using namespace std;

int a = 32, *ptr = &a;
char c = 'A', &ch = c;

ch += a;
*ptr += ch;

cout << a << ", " << ch << endl;
    return 0;
}

# output: 129, a
# Explanation: The "ptr" variable is a pointer which holds the address of variable "a". And "*ptr" returns the value of "a" variable. "cho" is a reference variable to "ch". So any change made to "cho" will be reflected to "ch". As such, when "cho" is increased by 32, it adds to the ASCII value of "A"(which is 65), and this results to 97 which is the ASCII value of "a"(from the alphabet). So this "a" gets stored in "ch". As for when "*ptr" is incremented by "ch", it gives value 97+32=129.
