#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d, e, f, g;
	
	cout<< "Digite os valores para A e B\n";
	cin >> a >> b;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = pow (a,b);
	
	cout << "A + B = C -> " << a << " + " << b << " = " << c << endl;
	cout << "A - B = D -> " << a << " - " << b << " = " << d << endl;
	cout << "A * B = E -> " << a << " * " << b << " = " << e << endl;
	cout << "A / B = F -> " << a << " / " << b << " = " << f << endl;
	cout << "A ^ B = G -> " << a << " ^ " << b << " = " << g << endl;
	
	return 0;
}
