#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"CALCUL DE DELTA" << endl;
    cout<<"===============" << endl;
    cout<<"Saisi la valeur de a" << endl;
    cin>>a;
    cout<<"Saisi la valeur de b" << endl;
    cin>>b;
    cout<<"Saisi la valeur de c" << endl;
    cin>>c;
    cout<<"Delta = "<<(b*b)-4*a*c;
    return 0;
}
