#include <iostream>
using namespace std;

bool ok(int* k,int col){
  for(int i=0;i<col;i++){
    if(k[i]==k[col]||(abs(k[col]-k[i]==col-i))){
      return false;
    }else{
      return true;
    }
  }
}

int main() {
  int q[8] = {0,2,1,1,1,1,1,1};
  if(ok(q,8)){
    cout<<"true";
  }else{
    cout<<"false";
  }
}//true