#include <iostream>
using namespace std;

int main() {
  int a[3]{10,20,30};
  int b[3]{50,60,70};

  a=b;
  
  cout<<a[1];//error
}