#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"inserisci un numero"<<endl;
    cin>>num;
    
    int const m=num;
    int dim=0;
    int divisori[dim];
    int n;
    
    //trovo i divisori di un numero e li salvo in un array
    int a;
    for(int i=2; i<=num; i++)
    {
        a=num/i;
        if (num%i==0)
        {
            dim=dim+1;
            n=dim-1;
            divisori[n]=a;
        }
    }

    //calcolo la somma dei divisori del numero e valuto se è uguale al numero stesso
    int somma=0;
    for(int k=0; k<dim; k++)
    {
        somma+=divisori[k];
    }
    if (somma==m)
    {
        cout<<"il numero è perfetto"<<endl;
    }
    else
    {
        cout<<"il numero non è perfetto"<<endl;
    }
   
    return 0;
    
}
