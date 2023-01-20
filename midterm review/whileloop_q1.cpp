#include <iostream>
using namespace std;

void loop1(){
  int i = 0;
  while(i<10)
	 i++;
	 cout<<i<<endl;
}

void loop2(){
  int i = 0;
  //while(i<10);
	 i++;
	 cout<<i<<endl;
}

void loop3(){
  int i = 0;
  while(i<10){
	 i++;
	 cout<<i<<endl;
  }
}

int main(){
  loop1();//10
  loop2();//error
  loop3();//1\n 2\n 3\n 4\n 5\n 6\n 7\n 8\n 9\n 10
  return 0;
}