#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeOpt(int n)
{
    int i;
    if (n==0||n==1)
    {
        return false;
    }
    else{
        int limit=(int) sqrt((double)n);
        for (i=2; i<=limit; i++)
        {
            if (n%i==0)
            {
                return false;
            }
            
        }
    }
    return true;
}

bool isPrime(int n)
{
    int i;
    if (n==0||n==1)
    {
        return false;
    }
    else
    {
        for (i=2; i<=n/2; i++)
        {
            if (n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cout<<"inserisci un numero"<<endl;
    int n;
    cin>>n;
    
    //uso l'algoritmo più lento
    int countPrimes=0;
    auto start=std::chrono::high_resolution_clock::now();
    for(int i=0; i<n; i++)
    {
        if(isPrime(i))
        {
            countPrimes++;
        }
    }
    auto stop=std::chrono::high_resolution_clock::now();
    auto duration = duration_cast<std::chrono::milliseconds>(stop - start);
    
    cout<<"Old version: "<<duration.count()<<"ms"<<endl;
    
    //uso l'algoritmo ottimizzato
    countPrimes=0;
    start=std::chrono::high_resolution_clock::now();
    for(int i=0; i<n; i++)
    {
        if(isPrimeOpt(i))
        {
            countPrimes++;
        }
    }
    stop=std::chrono::high_resolution_clock::now();
    duration = duration_cast<std::chrono::milliseconds>(stop - start);
    cout<<"New version: "<<duration.count()<<"ms"<<endl;
    return 0;
}

