#include <iostream>
using namespace std;
//Assume variable x has 0x123456 address in memory and pointer ptr has 0xabcdef address in memory. What will the code below print in the console:
int main() {

   int x = 0;

   int *ptr = &x;

   x = 13;

   cout << ptr << endl;

}

//ans:0x123456