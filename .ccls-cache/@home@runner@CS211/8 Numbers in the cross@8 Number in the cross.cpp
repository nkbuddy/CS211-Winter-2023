#include <iostream>
using namespace std;

bool okey(int q[], int c){
  int adjacency[8][5]{
    {-1},
    {0,-1},
    {1,-1},
    {0,1,2,-1},
    {1,2,3,-1},
    {2,4,-1},
    {0,3,4,-1},
    {3,4,5,6,-1}
  };
  
  for(int i =0;i<c;i++){
    if(q[i]==q[c]){
      return false;
    }
  }
  
  for(int i=0;adjacency[c][i]!=-1;i++){
    if(1 == abs(q[adjacency[c][i]]-q[c])){
      return false;
    }
  }
  return true;
}

void print(int q[], int solution){
  cout<<"This is solution: "<<solution<<"\n";
  cout<<" "<<q[1]<<q[2]<<"\n";
  cout<<q[0]<<q[3]<<q[4]<<q[5]<<"\n";
  cout<<" "<<q[6]<<q[7]<<"\n";
  cout<<"\n";
}

int main() {
  int q[8];
  int solution = 1;
  int c = 0;
  q[0]=1;
  while(true){
    c++;
    if(c==8){
      print(q,solution);
      solution++;
      c--;
    }else{
      q[c] = 0;
    }

    while(true){
      q[c]++;
      if(q[c]==9){
        c--;
        if(c==-1){
          return 0;
        }
      }else if(okey(q,c)){
        break;
      }
    }
  }
  return 0;
}