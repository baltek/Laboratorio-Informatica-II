#include <iostream>

using namespace std;


int decodePermits(string permiso)
{
    int nuevoarreglo[9];
    string numero="";

    for (int i = 0; i < 9; i++)
    {
        switch (permiso[i])
        {
        case 'r': nuevoarreglo[i]=4;
        break;
        case 'w': nuevoarreglo[i]=2;
        break;
        case 'x': nuevoarreglo[i]=1;
        break;
        case '-': nuevoarreglo[i]=0;
        break;
        }
     }
    int arreglofinal [] =  {(nuevoarreglo[0] + nuevoarreglo[1] + nuevoarreglo[2]), (nuevoarreglo[3] + nuevoarreglo[4] + nuevoarreglo[5]), (nuevoarreglo[6] + nuevoarreglo[7] + nuevoarreglo[8])};

    for (int j = 0; j < 3; j++)
        {
            numero = numero + to_string(arreglofinal[j]);
        }

    int decodificado = stoi (numero,nullptr,10);

    return decodificado;
}

int main()
{
    {
        string permit1 = "rw-r--r--";
        string permit2 = "rwxr-x--x";
        string allpermits = "rwxrwxrwx";

        cout << decodePermits(permit1) << endl;
        cout << decodePermits(permit2) << endl;
        cout << decodePermits(allpermits) << endl;

        return 0;

    }
}
