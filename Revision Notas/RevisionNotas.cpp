#include <iostream>

using namespace std;

int main()
{
    int Nota;
    cout << "Ingrese la nota obtenida:"  << endl;
    cin >> Nota;
    if (Nota < 60){
        Nota = 0;
    }
    switch(Nota)
    {
    case 0:
        cout << "Has perdido la materia :(";
    }




  return 0;
}

