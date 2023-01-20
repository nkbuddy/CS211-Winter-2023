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

bool okey(int q[]) {
  for(int i=0;i<8;i++){
    for(int c=i+1;c<8;c++){
      if(q[c]==q[i]||(c-i == abs(q[c]-q[i]))){
      return false;
      }
    }
  }
  return true;
}

int main() {
  int board[8]={0};
  int count = 0;
  
  for(int i0 = 0; i0 < 8; i0++)
    for(int i1=0; i1 < 8; i1++)
      for(int i2 = 0; i2 < 8; i2++)
        for(int i3 = 0; i3 < 8; i3++)
          for(int i4 = 0; i4 < 8; i4++)
           for(int i5 = 0; i5 < 8; i5++)
              for(int i6 = 0; i6 < 8; i6++)
                for(int i7 = 0; i7 < 8; i7++){
                  board[0]=i0;
                  board[1]=i1;
                  board[2]=i2;
                  board[3]=i3;
                  board[4]=i4;
                  board[5]=i5;
                  board[6]=i6;
                  board[7]=i7;

                  if(okey(board))print(board, ++count);

                  board[0]=-1;
                  board[1]=-1;
                  board[2]=-1;
                  board[3]=-1;         
                  board[4]=-1; 
                  board[5]=-1;
                  board[6]=-1;
                  board[7]=-1;
                }
    return 0;
}