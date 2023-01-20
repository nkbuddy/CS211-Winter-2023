#include <iostream>
using namespace std;

int main() {
  int counter=1;
  int b[8][8] = {0},c = -1,r;

  nc: c++;
  if(c==8) goto print;
  r = -1;
  
  nr: r++;
  if(r == 8) goto backtrack;

  //row test
  for(int i=0; i < c; i++){
    if(b[r][i] == 1) goto nr;
  }

  //updiagonal test
  for(int i = 1; (r-i) >= 0 && (c-i) >= 0; i++){
    if(b[r-i][c-i] == 1) goto nr;
  }

  //down diagonal test
  for(int i = 1; (r+i) < 8 && (c-i) >= 0; i++){
    if(b[r+i][c-i] == 1) goto nr;
  }

  //b[r][c] is safe, place a queen
  b[r][c] = 1;
  goto nc;

  backtrack:
  c--;
  if(c == -1)return 0;
  r=0;
  while(b[r][c] != 1){
    r++;
  }
  b[r][c] = 0;
  goto nr;

  print:
  cout << "This is " << counter <<" solution \n";
  for(int i = 0; i<8; i++){
    for(int j = 0; j<8; j++){
      cout << b[i][j] << ' ';
    }
    cout << '\n';
  }
  cout << '\n';
  cout << '\n';
  counter++;

  goto backtrack;
}