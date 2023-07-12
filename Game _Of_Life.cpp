#include<iostream>
// Actualiza el espacio segun el estado de calda celda:
const int N=5;
void Actualiza(int N,int & Espacio[N][N]);
int main(void) {
  bool Espacio[N][N]={false};


  return 0;
}

void Actualiza(int & Espacio[N][N]){

  for (int ii = 0; ii < N; ii++) {
    for (int jj = 0; ii < N; jj++) {
      int total= Espacio[ii-1][jj]+Espacio[ii+1][jj]+Espacio[ii][jj-1]+Espacio[ii][jj+1]
       Espacio[ii-1][jj-1]+Espacio[ii+1][jj+11]+Espacio[ii-11][jj-1]+Espacio[ii+11][jj+1];
      if ((Espacio[ii][jj]=true && 2<=total<=3) || ((Espacio[ii][jj]=false && total=3)){
          Espacio[ii][jj]=true
      }
      else(){
          Espacio[ii][jj]=0
      }

    }
  }


}
