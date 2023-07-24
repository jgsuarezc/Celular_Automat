#include<iostream>

const int N=10;
// Condiciones Iniciales
void Inicio((int N,int & Espacio[N][N]));
// Actualiza el espacio segun el estado de calda celda:
void Actualiza(int N,int & Espacio[N][N]);

void Actualiza(int N,)
int main(void) {
  //Crea un areglo de m*n
  bool Espacio[N][N]={false};


  return 0;
}

void Inicio((int N,int & Espacio[N][N])){

  
}




void Actualiza(int & Espacio[N][N]){
// recorre el arreglo como una matriz m*n
  for (int ii = 0; ii < N; ii++) {
    for (int jj = 0; ii < N; jj++) {

      //determina cuantos vecinos esta vivo
      int Vecinos_vivos;
      //Cuando se encuentra en una casilla de las esquinas
      if((ii==0 and jj==0) || (ii==N and jj==N) || (ii==0 and jj==N) || (ii==0 and jj==N){
        Vecinos_vivos= 0;}
      // cuando se encuentra en una frontera
      elif(){
        Vecinos_vivos= 0;}
      // cuando no se encuentra en un casilla de la frontera
      else;{
        Vecinos_vivos= Espacio[ii-1][jj]+Espacio[ii+1][jj]+Espacio[ii][jj-1]+Espacio[ii][jj+1];}


      //si una celda viva, tiene entre 2 y 3 vecinos vivos celda vive
      if (Espacio[ii][jj]=true && 2<=Vecinos_vivos<=3)
      }
      //Si esta muerta y tiene 3 vecinos exactamente la celda revive
      elif(Espacio[ii][jj]=false && Vecinos_vivos=3){
          Espacio[ii][jj]=true)
      //Otro Caso sa celda muere
      else{
          Espacio[ii][jj]=0
      }

    }
  }


}
