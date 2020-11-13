#include "printArray.hpp"
#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
    for(int p=0; p<n; p++)
    {
        cout<<array[p]<<", ";
    }
}
