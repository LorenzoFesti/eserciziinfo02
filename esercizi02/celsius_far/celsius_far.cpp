#include <iostream>
#include "cel_to_far.hpp"
#include "far_to_cel.hpp"
using namespace std;

int main()
{
    // impagino la tabella distinguendo i vari casi, determinati dal numero di caratteri del numero associato
    cout<<"Gradi Celsius"<<"        "<<"Gradi Fahrenheit"<<endl;
    
    double i;
    cout<<"-40          "<<"        "<<tcfar(-40)<<"          "<<endl;
   
    for (i=-39.0; i<=0; i++)
    {
        if (i<=-10)
        {
            for(double k=1; k<4; k++)
            {
                if (k==2)
                {
                    cout<<(i-(1-(k/4)))<<"        "<<"        "<<tcfar((i-(1-(k/4))))<<endl;
                }
                else
                {
                    cout<<(i-(1-(k/4)))<<"       "<<"        "<<tcfar((i-(1-(k/4))))<<endl;
                }
            }
            cout<<i<<"          "<<"        "<<tcfar(i)<<endl;
        }
        
        if (i>=-9)
        {
            for(double k=1; k<4; k++)
            {
                if (k==2)
                {
                    cout<<(i-(1-(k/4)))<<"         "<<"        "<<tcfar((i-(1-(k/4))))<<endl;
                }
                else
                {
                    cout<<(i-(1-(k/4)))<<"        "<<"        "<<tcfar((i-(1-(k/4))))<<endl;
                }
            }
            
            if(i!=0)
            {
                cout<<i<<"           "<<"        "<<tcfar(i)<<endl;
            }
        }
    }
    
    for (i=0; i<=250; i++)
    {
        if (i<10)
        {
            cout<<i<<"            "<<"        "<<tcfar(i)<<endl;
            for(double k=1; k<4; k++)
            {
                if(k==2)
                {
                    cout<<(i+(k/4))<<"          "<<"        "<<tcfar(i+(k/4))<<endl;
                }
                else
                {
                    cout<<(i+(k/4))<<"         "<<"        "<<tcfar(i+(k/4))<<endl;
                }
            }
        }
       
        if (i>=10 & i<100)
        {
            cout<<i<<"           "<<"        "<<tcfar(i)<<endl;
            for(double k=1; k<4; k++)
            {
                if(k==2)
                {
                    cout<<(i+(k/4))<<"         "<<"        "<<tcfar(i+(k/4))<<endl;
                }
                else
                {
                    cout<<(i+(k/4))<<"        "<<"        "<<tcfar(i+(k/4))<<endl;
                }
            }
        }
        
        if (i>=100 & i<=250)
        {
            cout<<i<<"          "<<"        "<<tcfar(i)<<endl;
            for(double k=1; k<4; k++)
            {
                if(k==2)
                {
                    cout<<(i+(k/4))<<"        "<<"        "<<tcfar(i+(k/4))<<endl;
                }
                else
                {
                    cout<<(i+(k/4))<<"       "<<"        "<<tcfar(i+(k/4))<<endl;
                }
            }
        }
    }
    return 0;
}

