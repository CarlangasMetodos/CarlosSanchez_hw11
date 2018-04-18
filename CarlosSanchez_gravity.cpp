#include <iostream>
#include <math.h>
using namespace std;

double calculate_dxdt(double x0, double v0, double h);
double calculate_dvdt(double x0, double v0, double h,int G, int M);
double leapfrog(double x0, double h, double v0, int M);
int G;
int M;
int m;
double x;
double v;
double x0;
double h;
double tiempo;


//Funcion para calcular la velocidad
double calculate_dxdt(double x0, double v0, double h)
{
return v0;
}

//Funcion para calcular la aceleracion
double calculate_dvdt(double x0, double v0, double h,int G, int M)
{
return -G*M/pow(x,2);
}

//Funcion que aplica el metodo de Leapfrog para el calculo de movimiento de particula
double leapfrog(double x0, double h, double v0, int M, int G)
{
x=x0;
v=v0;
tiempo=0;

//Recorrido de la funcion hasta cumplir el requisito
while(x>0.01*x0)
{
//Actualiza el valor de x y de v
x=calculate_dxdt(x0,v0,h)*2*h + x0;
v=calculate_dvdt(x0,v0,h,G,M)*2*h + v0;

x0=x;
v0=x;

//Tiempo acumulado
tiempo+=h;
}

cout<<" la posicion, velocidad y tiempo son de: "<< x << " " << v<<" "<< tiempo<<" respectivamente.";

return x,v;
}


//Funcion main para los calculos y operaciones
int main()
{ 
int G=10;
int M=1000;
int m;
double x;
double v;
double x0;
double h;
double tiempo;


leapfrog(0,0.001, 20.0, M, G);



return 0;
}
