#include <iostream>
#include "max.hpp"
using namespace std;

int main()
{
    int dim;
    cout<<"inserisci la dimensione dell'array"<<endl;
    cin>>dim;
    
    int nums[dim];
    cout<<"inserisci il valore degli elementi dell'array"<<endl;
    for (int i=0; i<dim; i++)
    {
        cin>>nums[i];
    }
    
    int massimo;
    massimo = max(nums, dim);
    cout<<"Il massimo dei valori dell'array è: "<<massimo<<endl;
    
    return 0;
}
