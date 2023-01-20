#include <iostream>
using namespace std;

void rev_print(int n){
  int num;
  while(n!=0){
    int digit = n%10;
    num = num*10 + digit;
    n/=10;
  }
  cout<<num;
}

int main() {
  int num = 321;
  rev_print(320);
  return 0;
}