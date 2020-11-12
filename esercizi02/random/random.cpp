#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //inizializzo il generatore di numeri pseudo-casuali
    srand(time(NULL));
    
    //genero un numero tra 0 e 999
    int n;
    n=rand()%(1000+1);
    
    //guido l'utente alla soluzione
    int num;
    cout<<"inserisci un numero tra 0 e 1000"<<endl;
    cin>>num;
    while (num!=n)
    {
        cout<<"Hai sbagliato!"<<endl;
        if (num<n)
        {
            cout<<"il numero inserito è minore di quello corretto"<<endl;
            cin>>num;
        }
        else
        {
            cout<<"il numero inserito è maggiore di quello corretto"<<endl;
            cin>>num;
        }
    }
    if (num==n)
    {
        cout<<"hai indovinato!"<<endl;
    }
    return 0;
}
