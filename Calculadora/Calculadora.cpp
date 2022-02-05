#include <iostream>

using namespace std;

int main()
{
    int num1 ;
    int num2 ;
    int res ;
    char operacion;
    cout << "Escoja una operacion (+,-,*,/)" << endl;
    cin >> operacion;
    if (operacion != '+' & operacion != '-' & operacion != '*' & operacion != '/' ){
        cout << "Ingrese una operacion valida";
        return 0;
    }
    cout << "Ingrese el primer numero:";
    cin >> num1;
    cout << "Ingrese el segundo numero:";
    cin >> num2;
    if (operacion=='+')
        res = num1 + num2;
    else if (operacion == '-')
        res = num1 - num2;
    else if (operacion == '*')
        res =num1 * num2;
    else if (operacion == '/')
        res = num1/num2;

    cout << "El resultado es " << res;



  return 0;
}

