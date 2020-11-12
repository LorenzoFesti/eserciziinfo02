#include <iostream>
using namespace std;

int main ()
{
    //inserisco l'array con dimesione variabile
    int n;
    cout<<"inserisci il numero di cifre del numero";
    cin>>n;
    
    //se il numero inserite è composto da un numero pari di cifre no è sicuramente palindromo
    if (n%2==0)
    {
        cout << "il numero inserito non è palindromo";
    }
    
    if (n%2!=0)
    {
        int numero[n];
        
        //inserisco i numeri che compongono l'arrey. Ogni numero corrisponde a una cifra
        cout<<"inserisci il numero";
        int i;
        for (i=0; i<n; i++)
        {
            cin>>numero[i];
        }
        
        //valuto che le cifre siano "simmetriche rispetto alla cifra centrale"
        int k=0;
        bool a=1;
        while(k<n/2)
        {
            if (a==1)
            {
                if (numero[k] != numero[(n-1)-k])
                {
                    a=0;
                }
            }
            k++;
        }
        
        if (a==1)
        {
            cout << "il numero inserito è palindromo";
        }
        
        else
        {
            cout << "il numero inserito non è palindromo";
        }
    }
    return 0;
}
