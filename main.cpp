#include <iostream>

using namespace std;

int main()
{
    /*
    int n;
    cout<<"Ingrese un numero :"<< endl;
    cin>> n;
    //While
    if(n==2 || n==3)
    {
        return true;
    }
    while(n>2)
    {
        if(n%2==0)
        {
            return false;
        }
        if(n%2==1 && (n%3==1 || n%3==2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    */
    //For

    int divisores=0;
    cout<<"Ingrese un numero :"<< endl;
    int divisor;
    int x;
    cin>> x;
    for(divisor = 0; divisor<=x; divisor=divisor+1 )
    {
        if(x%divisor==0)
        {
           divisores++;
           if(divisores>2)
            {
                cout<<"No es primo";
            }
           else
            {
                cout<<"Si es primo";
            }
        }

    }
    return 0;
}
