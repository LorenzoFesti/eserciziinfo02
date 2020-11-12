#include "max.hpp"

//funzione che calcola il valore massimo dell'array
int max(int numeri[], int n)
{
    int max=numeri[0];
    for (int k=1; k<n; k++)
    {
        if(numeri[k]>max)
        {
            max=numeri[k];
        }
        
        if(numeri[k]<max)
        {
            max=max;
        }
    }
    return max;
}
