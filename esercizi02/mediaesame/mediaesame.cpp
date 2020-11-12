#include <iostream>
using namespace std;

int main()
{
    int nstudenti;
    
    cout<<"inserisci il numero degli studenti";
    cin>>nstudenti;
    
    //creo un array che contiene i voti degli studenti
    cout<<"inserisci i voti degli studenti";
    int voti[nstudenti];
    for (int i=0; i<nstudenti; i++)
    {
        cin>>voti[i];
    }
    
    //calcolo la media dei voti
    int somma=0;
    int media=0;
    for(int k=0; k<nstudenti; k++)
    {
        somma=somma + voti[k];
    }
    media=somma/nstudenti;
    cout<<"la media dei voti è:"<<media;
    
    return 0;
}

