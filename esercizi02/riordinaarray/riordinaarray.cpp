#include <iostream>
#include <cstdlib>
#include <ctime>
#include "printArray.hpp"
using namespace std;

int main()
{
    srand(42);
    int const n=20;
    int nums[n];
    
    //uso un algoritmo che genera causalmente i valori dell'array
    for (int i=0; i<n; i++)
    {
        nums[i]=rand()%100+1;
    }
    
    printArray(nums, 20);
    cout<<endl;
    
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
    
    //stampo l'array riordinato
    printArray(nums, 20);
    cout<<endl;
    
    return 0;
}

