//Evaluar una funcion
#include <iostream>
#include <math.h>

using namespace std;

double f_1(double x);

int main(){

    //Evaluando la funcion
    for (int i = 0; i<100 ; i++)
    {
        cout <<f_1(i)<<endl;
    }
    
    return 0;
}

double f_1(double x){

    //Funcion
    return (pow(x,4))+(2*(pow(x,2)))-x-3;

}