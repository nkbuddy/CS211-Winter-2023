#include <iostream>
#include<cmath>
using namespace std;

void longest_run(int *a){
  int pre = a[0];
  int highest_counter = 1;
  int counter=1;
  for(int i=0;i<10;i++){
    if(a[i]-pre == 1){
      counter++;
      if(counter>=highest_counter){
        cout<<i-1<<" ";
        highest_counter = counter; 
      }
    }else{
      cout<<i-1<<" ";
      cout<<"\n";
      counter=1;
    }
    pre = a[i];
  }
  cout<<"Ths longest run is "<<highest_counter;
}

int main() {
  int a[10]={7,2,3,9,10,11,12,15,16,9};
  longest_run(a);
  return 0;
}