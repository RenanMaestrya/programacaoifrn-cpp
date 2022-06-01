#include <iostream>
using namespace std;

int main()
{
    double n, aux = 3, temp;
    double f2 = 1, f1 = 0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << f1 << endl;

    while(aux <= n){
        cout << (f1 + f2) << endl;

        temp = f2;
        f2 = f1;
        f1 = f1 + temp;

        aux++;
    }

    return 0;
}
