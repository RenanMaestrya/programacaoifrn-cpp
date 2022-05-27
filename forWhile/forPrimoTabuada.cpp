#include <iostream>
#include <cmath>
using namespace std;
int main() {
  for(int i = 1; i <= 100; i++){
      int cont = 0;
      for(int j = 1; j <= 100; j++){
        if(i % j == 0){
          cont++;
        };
      };
      if(cont == 2)
      for(int k = 0; k <= 10; k++)
        {
          cout << i * k << "\n";
        };
      cout << "\n";
    };
  
};