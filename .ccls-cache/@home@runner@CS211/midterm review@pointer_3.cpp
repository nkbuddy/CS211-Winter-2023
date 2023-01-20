#include <iostream>
using namespace std;

int main() {
  char *b[2][3];
  cout<<sizeof(b)<<endl;//48
  cout<<sizeof(b+0)<<endl;//8
  cout<<sizeof(*(b+0))<<endl;//24
  //The next line prints 003EF7D0
  cout<<b<<endl;//003EF7D0
  cout<<b+1<<endl;//003EF7D0+18
  cout<<&b<<endl;//003EF7D0
  cout<<&b+1<<endl;//003EF7D0+30
}