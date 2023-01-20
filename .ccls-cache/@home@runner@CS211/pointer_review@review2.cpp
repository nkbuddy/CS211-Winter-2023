#include <iostream>
using namespace std;

int main(){
  int b[3][2];

  cout << sizeof(b) << endl;//24
  cout << sizeof(b+0) << endl;//8
  cout << sizeof(*(b+0)) << endl;//8
  cout << b << endl;//0x7ffd12d40190
  cout << b+1 << endl;//0x7ffd12d40198
  cout << &b << endl;//0x7ffd12d40190
  cout << &b+1 << endl;//0x7ffd12d401a8
  return 0;
}