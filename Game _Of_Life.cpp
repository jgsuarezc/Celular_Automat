#include<iostream>
//celda muere
// Actualiza el espacio segun el estado de calda celda:
const int N=10;
void Actualiza(int N,int & Espacio[N][N]);
int main(void) {
  bool Espacio[N][N]={false};


  return 0;
}

void Actualiza(int & Espacio[N][N]){
// recorre el arreglo como una matriz m*n
  for (int ii = 0; ii < N; ii++) {
    for (int jj = 0; ii < N; jj++) {
      int total= Espacio[ii-1][jj]+Espacio[ii+1][jj]+Espacio[ii][jj-1]+Espacio[ii][jj+1]
      //determina cuantos vecinos esta vivo
       Espacio[ii-1][jj-1]+Espacio[ii+1][jj+11]+Espacio[ii-11][jj-1]+Espacio[ii+11][jj+1];
       //si una celda viva, tiene entre 2 y 3 vecinos vivos celda vive
      if (Espacio[ii][jj]=true && 2<=total<=3)
      }
      //Si esta muerta y tiene 3 vecinos exactamente la celda revive
      elif(Espacio[ii][jj]=false && total=3){
          Espacio[ii][jj]=true)
      //Otro Caso sa celda muere
      else{
          Espacio[ii][jj]=0
      }

    }
  }


}
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
