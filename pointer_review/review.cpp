#include <iostream>
using namespace std;

int main() {
  int x = 25;
  int arr[] = {6,5,4,3,2,1};
  
  /*
    char -> 1 byte
    short -> 2 bytes
    int/float/long -> 4 bytes
    double -> 8 bytes
======================================================
    1. multiplication cout << a * b;
    2. declaring a pointer: int* ptr;
    3. dreferencing: cout << *ptr;
  */

  int* ptr = &x;
  cout<<"1. " << sizeof(x) << endl;//4
  cout<<"2. " << x << endl;//25
  cout<<"3. " << &x << endl;//0x7fff2d22a49c
  cout<<"4. " << ptr << endl;//0x7fff2d22a49c
  cout<<"5. " << &ptr << endl;//0x7fff2d22a490
  cout<<"6. " << *ptr << endl;//25
  *ptr += 20;
  cout<<"7. " << *ptr << endl;//45
  cout<<"8. " << x << endl;//45

  cout<<"------------------------------- \n";

  //short arr[] = {6,5,4,3,2,1};

  cout<<"1. " << arr << endl;//0x7fff2d22a4a0
  cout<<"2. " << *arr << endl;//6
  cout<<"3. " << arr[0] << endl;//6
  cout<<"4. " << &arr << endl;//0x7fff2d22a4a0
  //arr = (arr+1); 
  int* p = arr + 1;
  cout<<"5. " << *(arr + 1) << endl;//5
  cout<<"6. " << *p << endl;//5
}