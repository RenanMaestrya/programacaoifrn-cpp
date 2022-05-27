#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int ano, present = 2022;
  cout << "press the year you were born: ";
  cin >> ano;

  for(int i = ano; i <= present; i++){
    if(i%2 != 0){
      cout << i << "\n";
    };
  };
};