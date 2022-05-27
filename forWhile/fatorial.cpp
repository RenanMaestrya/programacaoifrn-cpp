#include <iostream>
#include <cmath>
using namespace std;
int main() {
  long int n;
  long int aux = 1;
  cout << "press a number: ";
  cin >> n;
  cout << n << "! = ";
  for(int i = n; i >= 1; i--){
    aux = aux * i;
    if(i > 1){
    cout << i << "*";
    }
    else
      cout << i << " = ";
  };
  cout << aux;
};