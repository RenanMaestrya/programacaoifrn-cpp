#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float nota1, nota2, media;
	
	cout <<"Digite a primeira nota!\n";
	cin >> nota1; 
	
	cout << "Digite a segunda nota!\n";
	cin >> nota2;
	
	media = (nota1 + nota2)/2;
		
	cout << "Sua média será: ";
	cout << media << "\n";
	
if(media >= 6)
	cout << "APROVADO\n";
else
	cout << "REPROVADO\n";		
	
	return 0;
}
