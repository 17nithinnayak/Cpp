#include<iostream>
using namespace std;

class Test{
    static int i;
    double j;
};

int main(){
    cout<<sizeof(Test)<<endl;
    return 0;
}

/* 
Output: 4
Explanation: The size of the class Test is determined by the non-static member variable j, which is of type int and typically occupies 4 bytes. The static member variable i does not contribute to the size of the class because it is shared among all instances of the class and is stored separately from the instance data. Therefore, the size of the class Test is 4 bytes, which corresponds to the size of the non-static member variable j.
*/