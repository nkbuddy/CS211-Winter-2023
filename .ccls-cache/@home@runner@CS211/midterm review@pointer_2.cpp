#include <iostream>
using namespace std;

void print(char* s){
  if(*s == '\0')
    return;
  print(s++);
  cout<<*s;
}

int main() {
  char a[6] = "hello";
  print(a);
  return 0;
}