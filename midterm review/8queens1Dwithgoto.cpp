#include <iostream>
#include<cmath>
using namespace std;

bool ok(int*k,int col){
  for(int i=0;i<col;i++){
    if(k[i]==k[col]||abs(k[col]-k[i])==(col-i)){
      return false;
      }
    }
  return true;
}

int main() {
  int q[8],c,count=0;
  q[0]=0;
  c=0;

  next_col:
  c++;
  if(c==8)goto print;
  q[c]=-1;

  next_row:
  q[c]++;
  if(q[c]==8)goto backtrack;
  if(!ok(q,c))goto next_row;
  goto next_col;

  backtrack:
  c--;
  if(c==-1)return 0;
  goto next_row;

  print:
  cout<<"solution: "<<++count<<endl;
  for(int i=0;i<8;i++)
    cout<<q[i];
  cout<<endl;
  goto backtrack;

  return 0;
}