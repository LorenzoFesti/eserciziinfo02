#include "pow2.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double catmag;
    double catmin;
    double ipo;
    
    cout<<"inserisci il valore dei cateti"<<endl;
    cin>>catmag>>catmin;
    
    //calcolo l'ipotenusa mediante il teorema di pitagora
    double ipoq;
    ipoq=pow2(catmin)+pow2(catmag);
    
    ipo=sqrt(ipoq);
    cout<<"l'ipotenusa è: "<<ipo;
    
    return 0;
}
