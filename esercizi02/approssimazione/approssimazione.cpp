#include "approssimazione.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int dim=0;
    double decimali[dim];
    
    cout<<"inserisci dei numeri decimali"<<endl;
    int i=0;
    cin>>decimali[0];
    dim=dim+1;
    if (i==0)
    {
        cin>>decimali[1];
        i=i+2;
        dim=dim+1;
    }
    while (decimali[i-1]!=0.0)
    {
        cin>>decimali[i];
        dim+=1;
        i++;
    }
    
    int result;
    int k;
    for (k=0; k<dim; k++)
    {
        result = round(decimali[k]);
        cout<<result;
    }
    
    return 0;
}
