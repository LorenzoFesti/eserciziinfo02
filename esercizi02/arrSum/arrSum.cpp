#include <iostream>
using namespace std;

int main()
{
    int numbers [10];
    cout<< "Inserisci 10 numeri:"<<endl;
    
    int i=0;
    while (i<10)
    {
        cin >> numbers[i];
        i++;
    }
   
    int sum=0;
    for(int i=0; i<10; i++)
    {
        sum += numbers[i];
    }
    cout<<"La somma è: "<<sum<<"\n";
    
    return 0;
}


