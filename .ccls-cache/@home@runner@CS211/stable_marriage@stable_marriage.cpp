#include <cmath>
#include <iostream>
using namespace std;

bool ok(int q[], int c){
  static int mp[3][3] = {{0, 2, 1},
                         {0, 2, 1},
                         {1, 2, 0}};

  static int wp[3][3] = {{2, 1, 0},
                         {0, 1, 2},
                         {2, 0, 1}};

  for (int i = 0; i < c;i++){
    if (q[i] == q[c])
      return false;
  }

  for (int i = 0; i < c; i++){
    if (mp[i][q[c]] < mp[i][q[i]] && wp[q[c]][i] < wp[q[c]][c]) 
      return false;
  }

  for (int i = 0; i < c; i++){
    if (wp[q[i]][c] < wp[q[i]][i] && mp[c][q[i]] < mp[c][q[c]])
      return false;
  }

  return true;
}

void print(int q[]){
  static int solution = 0;
  cout << "Solution #" << ++solution << ":\nMan\tWoman\n";
  for (int i = 0; i < 3; ++i){
    cout << i << "\t" << q[i] << "\n";
  }
  cout << "\n";
}

int main() {
  int c =0;
  int q[3];
  while(true){
    c++;
    if(c==3){
      print(q);
      c--;
    }else{
      q[c]=0;
    }
    
    while(true){
      q[c]++;
      if(q[c]==4){
        c--;
        if(c==-1){
          return 0;
        }
      }else if(ok(q,c)){
        break;
      }
    }
  }
  return 0;
}