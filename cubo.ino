//A
const int Q0 = 22;
const int Q1 = 24;
const int Q2 = 26;
const int Q3 = 28;
const int Q4 = 30;
//B
const int Q5 = 23;
const int Q6 = 25;
const int Q7 = 27;
const int Q8 = 29;
const int Q9 = 31;
//C
const int Q10 = 32;
const int Q11 = 34;
const int Q12 = 36;
const int Q13 = 38;
const int Q14 = 40;
//D
const int Q15 = 33;
const int Q16 = 35;
const int Q17 = 37;
const int Q18 = 39;
const int Q19 = 41;
//E
const int Q20 = 42;
const int Q21 = 44;
const int Q22 = 46;
const int Q23 = 48;
const int Q24 = 50;

const int matriz[5][5] = {
  {Q4,  Q3,  Q2,  Q1,  Q0},

  {Q9,  Q8,  Q7,  Q6,  Q5},

  {Q14, Q13, Q12, Q11, Q10},

  {Q19, Q18, Q17, Q16, Q15},

  {Q24, Q23, Q22, Q21, Q20}
};
//Letras:

const int letra_A[5][5] = {
  {0, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1}
};

const int letra_B[5][5] = {
  {1, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 0}
};

const int letra_C[5][5] = {
  {0, 1, 1, 1, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0}
};

const int letra_D[5][5] = {
  {1, 1, 1, 1, 0},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 0}
};

const int letra_E[5][5] = {
  {1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0},
  {1, 1, 1, 0, 0},
  {1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1}
};

const int letra_F[5][5] = {
  {1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0},
  {1, 1, 1, 0, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 0, 0, 0}
};

const int letra_G[5][5] = {
  {0, 1, 1, 1, 0},
  {1, 0, 0, 0, 0},
  {1, 0, 1, 1, 1},
  {1, 0, 0, 0, 1},
  {0, 1, 1, 1, 0}
};

const int letra_H[5][5] = {
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1},
  {1, 0, 0, 0, 1},
  {1, 0, 0, 0, 1}
};

const int letra_I[5][5] = {
  {1, 1, 1, 1, 1},
  {0, 1, 0, 1, 0},
  {0, 1, 0, 1, 0},
  {0, 1, 0, 1, 0},
  {1, 1, 1, 1, 1}
};

const int letra_J[5][5] = {
  {0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1},
  {0, 0, 0, 0, 1},
  {1, 0, 0, 0, 1},
  {0, 1, 1, 1, 0}
};

const int letra_K[5][5] = {
{1, 0, 0, 0, 1},
{1, 0, 0, 1, 0},
{1, 1, 1, 0, 0},
{1, 0, 0, 1, 0},
{1, 0, 0, 0, 1}
};

const int letra_L[5][5] = {
{1, 0, 0, 0, 0},
{1, 0, 0, 0, 0},
{1, 0, 0, 0, 0},
{1, 0, 0, 0, 0},
{1, 1, 1, 1, 1}
};

const int letra_M[5][5] = {
{1, 0, 0, 0, 1},
{1, 1, 0, 1, 1},
{1, 0, 1, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1}
};

const int letra_N[5][5] = {
{1, 0, 0, 0, 1},
{1, 1, 0, 0, 1},
{1, 0, 1, 0, 1},
{1, 0, 0, 1, 1},
{1, 0, 0, 0, 1}
};

const int letra_O[5][5] = {
{0, 1, 1, 1, 0},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{0, 1, 1, 1, 0}
};

const int letra_P[5][5] = {
{1, 1, 1, 1, 0},
{1, 0, 0, 0, 1},
{1, 1, 1, 1, 0},
{1, 0, 0, 0, 0},
{1, 0, 0, 0, 0}
};

const int letra_Q[5][5] = {
{0, 1, 1, 1, 0},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 1, 0},
{0, 1, 1, 0, 1}
};

const int letra_R[5][5] = {
{1, 1, 1, 1, 0},
{1, 0, 0, 0, 1},
{1, 1, 1, 1, 0},
{1, 0, 0, 1, 0},
{1, 0, 0, 0, 1}
};

const int letra_S[5][5] = {
{0, 1, 1, 1, 0},
{1, 0, 0, 0, 1},
{0, 1, 1, 1, 0},
{0, 0, 0, 0, 1},
{1, 1, 1, 1, 0}
};

const int letra_T[5][5] = {
{1, 1, 1, 1, 1},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0}
};

const int letra_U[5][5] = {
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{0, 1, 1, 1, 0}
};

const int letra_V[5][5] = {
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{0, 1, 0, 1, 0},
{0, 0, 1, 0, 0}
};

const int letra_W[5][5] = {
{1, 0, 0, 0, 1},
{1, 0, 0, 0, 1},
{1, 0, 1, 0, 1},
{1, 1, 0, 1, 1},
{1, 0, 0, 0, 1}
};

const int letra_X[5][5] = {
{1, 0, 0, 0, 1},
{0, 1, 0, 1, 0},
{0, 0, 1, 0, 0},
{0, 1, 0, 1, 0},
{1, 0, 0, 0, 1}
};

const int letra_Y[5][5] = {
{1, 0, 0, 0, 1},
{0, 1, 0, 1, 0},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0},
{0, 0, 1, 0, 0}
};

const int letra_Z[5][5] = {
{1, 1, 1, 1, 1},
{0, 0, 0, 1, 0},
{0, 0, 1, 0, 0},
{0, 1, 0, 0, 0},
{1, 1, 1, 1, 1}
};


const int Q[25] = {Q0, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24};

//Piso
const int floor0 = 43;
const int floor1 = 45;
const int floor2 = 47;
const int floor3 = 49;
const int floor4 = 51;
const int floors[5] = {floor0, floor1, floor2, floor3, floor4};

char letra;
int letraLeida[5][5];
/*const int numLetras = 5;
int memoriaLetras[numLetras][5][5];
int indiceMemoria = 0;*/

void setup(){
  Serial.begin(9600); // Corregido 'serial' a 'Serial'
  for (int k = 0; k < 5; k++){
    pinMode(floors[k], OUTPUT);
  }
  for (int k = 0; k < 25; k++){
    pinMode(Q[k], OUTPUT);
  }
}

void loop(){
  cubeOff();  
  if(Serial.available()>0){
    letra = Serial.read();
    switch(letra){

      case 'A': 
        copiarLetra(letraLeida, letra_A);
                break;
      case 'B': 
        copiarLetra(letraLeida, letra_B);
                break;
      case 'C': 
        copiarLetra(letraLeida, letra_C);
                break;      
      case 'D': 
        copiarLetra(letraLeida, letra_D);
                break;
      case 'E':
        copiarLetra(letraLeida, letra_E);
        break;

      case 'F':
        copiarLetra(letraLeida, letra_F);
        break;

      case 'G':
        copiarLetra(letraLeida, letra_G);
        break;

      case 'H':
        copiarLetra(letraLeida, letra_H);
        break;

      case 'I':
        copiarLetra(letraLeida, letra_I);
        break;

      case 'J':
        copiarLetra(letraLeida, letra_J);
        break;

      case 'K':
        copiarLetra(letraLeida, letra_K);
        break;

      case 'L':
        copiarLetra(letraLeida, letra_L);
        break;

      case 'M':
        copiarLetra(letraLeida, letra_M);
        break;

      case 'N':
        copiarLetra(letraLeida, letra_N);
        break;

      case 'O':
        copiarLetra(letraLeida, letra_O);
        break;

      case 'P':
        copiarLetra(letraLeida, letra_P);
        break;

      case 'Q':
        copiarLetra(letraLeida, letra_Q);
        break;

      case 'R':
        copiarLetra(letraLeida, letra_R);
        break;

      case 'S':
        copiarLetra(letraLeida, letra_S);
        break;

      case 'T':
        copiarLetra(letraLeida, letra_T);
        break;

      case 'U':
        copiarLetra(letraLeida, letra_U);
        break;

      case 'V':
        copiarLetra(letraLeida, letra_V);
        break;

      case 'W':
        copiarLetra(letraLeida, letra_W);
        break;

      case 'X':
        copiarLetra(letraLeida, letra_X);
        break;

      case 'Y':
        copiarLetra(letraLeida, letra_Y);
        break;

      case 'Z':
        copiarLetra(letraLeida, letra_Z);
        break;

    }    
  mostrarLetra(letraLeida);
  }
  
}

void mostrarLetra(const int letra[5][5]) {
  for(int i=4; i>=0; i--){
    digitalWrite(floors[i], HIGH);
    for (int fila = 0; fila < 5; fila++) {
      for (int columna = 0; columna < 5; columna++) {
        digitalWrite(matriz[fila][columna], letra[fila][columna]);
      }
    }
    delay(200);
    digitalWrite(floors[i], LOW);
  }  
}

void cubeOff(){
  for (int k = 0; k < 5; k++){
    digitalWrite(floors[k], LOW);
  }
  for (int k = 0; k < 25; k++){
    digitalWrite(Q[k], LOW);
  }
}

void copiarLetra(int destino[5][5], const int origen[5][5]) {
  for (int fila = 0; fila < 5; fila++) {
    for (int columna = 0; columna < 5; columna++) {
      destino[fila][columna] = origen[fila][columna];
    }
  }
}

/*void guardarLetraEnMemoria(const int letra[5][5]) {
  for (int i = numLetras - 1; i > 0; i--) {
    for (int fila = 0; fila < 5; fila++) {
      for (int columna = 0; columna < 5; columna++) {
        memoriaLetras[i][fila][columna] = memoriaLetras[i - 1][fila][columna];
      }
    }
  }
  // Almacena la nueva letra en la posición 0 de la memoria
  for (int fila = 0; fila < 5; fila++) {
    for (int columna = 0; columna < 5; columna++) {
      memoriaLetras[0][fila][columna] = letra[fila][columna];
    }
  }
}

void mostrarLetrasEnMemoria() {
  for (int i = 0; i < numLetras; i++) {
    digitalWrite(floors[i], HIGH);  
  }
  for (int i = 0; i < numLetras; i++) {
    mostrarLetra(memoriaLetras, i);
  }
  delay(1000);
}*/




