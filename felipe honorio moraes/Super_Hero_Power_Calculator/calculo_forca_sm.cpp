#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <iomanip>
//cout << fixed;
//cout.precision(2);
using namespace std;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int dias=0;
    long double forca=1,aux=0,aux2=0;
    long double dist_vis=0;
    cout << "C�culo da for�a do Super-Homem" << endl;

    cout << "Insira a quantidade de dias que ele est� na terra: " << endl;
    cin >> dias;
    if(dias<=365)
    {
        cout << "N�o adquiriu for�a devido a adapta��o!" << endl;
        cout << "For�a: " << forca << " Humano(s) e a dist�ncia que sua vis�o de calor atinge (cm) " << dist_vis << endl;
    }
    else
    {
        dias = dias - 365;
        for(int i = 0; i<dias; i++)
        {
            aux = forca*0.03;
            forca=forca+aux;
        }
        if(forca>=10)
        {
            dist_vis = 10;
            for(int j = 0; j<dias; j++)
            {
                aux2 = dist_vis*0.02;
                dist_vis=dist_vis+aux2;

            }
        }
        cout << fixed;
        cout.precision(4);
        cout << "For�a: " << forca << " Humano(s)" << endl;
        cout.precision(2);
        cout<<  "Dist�ncia que sua vis�o de calor atinge: " << dist_vis << " cm"<< endl;
    }
}

