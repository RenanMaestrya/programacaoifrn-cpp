#include <iostream>
using namespace std;
int main() 
{
  int A = 4;
  int B = 4; 
  int CA, CB, R, E;

  CA = 2; 
  R = B; // R = 4

  while(CA <= A) 
  {
    E = B; // E = 4
    CB = 1;

    while(CB < CA)
    {
      E = E * B; // quando o CA = 4 o CB percorrerá 3 vezes o while e o valor de E no final será 256
      CB = CB + 1; // Contador
    } 
    //R = 4 | E = 16 na primeira volta do while
    //R = 20 | E = 256 na segunda volta
    R = R + E; // FALSE WHILE | R = R1º(4) + E1º(16) -> R2º(20) + E2º(256) = 276
    CA = CA + 2; // FALSE WHILE | contador incrementando +2

  }
  cout << R << endl;
  return 0;
}
