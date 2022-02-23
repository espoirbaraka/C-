#include <iostream>

using namespace std;

int main()
{
    double cote;
    cout<<"CALCUL DE LA SURFACE DU CARRE"<<endl;
    cout<<"============================="<<endl;
    cout<<"Saisi le cote:"<<endl;
    cin>>cote;
    if(cote>0)
    {
    cout<<endl;
    cout<<"surface = "<<cote*4;
    }

    return 0;
}
