#include <iostream>
using namespace std;

int main(){
  int g = 9;
  int h = 3;
  int *p = &h;

  g=g/(*p); //Dereference integer pointer p
  cout<<g;
}