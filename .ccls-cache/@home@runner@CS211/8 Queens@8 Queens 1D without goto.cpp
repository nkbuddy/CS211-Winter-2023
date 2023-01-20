#include <iostream>
using namespace std;

void print(int q[], int sol) {
  cout << sol << ". ";
  for (int i = 0; i < 8; i++) {
    cout << q[i];
  }
  cout << endl;
  cout << "\n";
  for (int i = 0; i < 8; i++) {
    if (q[0] == i) {
      cout << "1 0 0 0 0 0 0 0\n";
    } else if (q[1] == i) {
      cout << "0 1 0 0 0 0 0 0\n";
    } else if (q[2] == i) {
      cout << "0 0 1 0 0 0 0 0\n";
    } else if (q[3] == i) {
      cout << "0 0 0 1 0 0 0 0\n";
    } else if (q[4] == i) {
      cout << "0 0 0 0 1 0 0 0\n";
    } else if (q[5] == i) {
      cout << "0 0 0 0 0 1 0 0\n";
    } else if (q[6] == i) {
      cout << "0 0 0 0 0 0 1 0\n";
    } else if (q[7] == i) {
      cout << "0 0 0 0 0 0 0 1\n";
    }
  }
  cout << "\n";
}

bool okey(int q[], int c){
  for(int i=0;i<c;i++){
    if(q[c]==q[i]||(c-i == abs(q[c]-q[i]))){
      return false;
    }
  }
  return true;
}

int main() {
  int solutions = 0;
  int q[8] = {0};
  int c = 0;

  while(true){
    c++;
    if(c==8){
      print(q, ++solutions);
      c--;
    }else{
      q[c] = -1;
    }

    while(true){
      q[c]++;
      if(q[c] == 8){
        c--;
        if(c == -1){
          return 0;
        }
      }else if(okey(q,c)){
        break;
      }
    }
  }
  
  return 0;
}