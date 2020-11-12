#include <iostream>
using namespace std;

int main()
{
    int const n=20;
    int nums[n];
    
    cout<<"Inserisci i valori dell'array"<<endl;
    for(int i=0; i<20; i++)
    {
        cin>>nums[i];
    }
    
    //uso un algoritmo che parte dagli ultimi elementi dell'array, ordinandoli, per poi proseguire fino ad arrivare ai primi elementi
    int val;
    for(int j=0; j<20; j++)
    {
        for(int k=1; k<=19; k++)
        {
            if (nums[19-k]>nums[19-(k-1)])
            {
                val=nums[19-(k-1)];
                nums[19-(k-1)]=nums[19-k];
                nums[19-k]=val;
            }
        }
    }
    
    //stampo i primi due massimi
    cout<<"il secondo massimo dell'array è: "<<nums[18]<<endl;
    cout<<"il valore massimo dell'array p: "<<nums[19]<<endl;
    
    return 0;
}
