#include <iostream>

using namespace std;


void cifraData(int arreglo[20], int rondas)
{
    int nuevoarreglo[20];

    for (int j=0; j<rondas;j++)

    {
        if (j==0)
        {
            cout<<"La trama inicial es: "<<endl;
            for (int l=0;l<20;l++)
            {
               cout<<arreglo[l]<<" ";
            }
            cout<<endl;
            cout<<endl;

            cout<<"La trama "<<j+1<< " es: "<<endl;
        }
        else if (j==rondas-1)
        {
            cout<<"La trama final es: "<<endl;
        }
        else
        {
            cout<<"La trama "<<j+1<< " es: "<<endl;
        }

        for (int i=0; i<20; i++)
        {
            if (((i+1)%2)==0)
            {
                if (i==19)
                {
                    nuevoarreglo[i]=arreglo[i-1]-arreglo[0];
                }
                else
                {
                    nuevoarreglo[i]=arreglo[i-1]-arreglo[i+1];
                }
            }
            else
            {
                if (i==0)
                {
                    nuevoarreglo[i]=arreglo[19]+arreglo[i+1];
                }
                else
                {
                    nuevoarreglo[i]=arreglo[i-1]+arreglo[i+1];
                }
            }

            cout<<nuevoarreglo[i]<<" ";
        }

        cout<<endl;
        cout<<endl;

        for (int k=0;k<20;k++)
        {
            arreglo[k]=nuevoarreglo[k];
        }
    }
}

int main()
{
    int trama[20]={4,15,38,33,49,18,93,120,153,291,45,92,216,28,63,-64,-153,-27,91,171};
    int rondact;
    cout<<"Cuantas rondas de actualizacion desea realizar?"<<endl;
    cin>> rondact;
    cout<<endl;
    cifraData(trama, rondact);
    return 0;
}
