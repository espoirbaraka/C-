#include <iostream>

using namespace std;

int main()
{
    int longeur, largeur;

    cout<<"CALCUL DE LA SURFACE DU RECTANGLE ET DU PERIMETRE"<<endl;
    cout<<"============================="<<endl;
    cout<<"Saisi la longueur:"<<endl;
    cin>>longeur;
    cout<<"Saisi la largeur:"<<endl;
    cin>>largeur;
    cout<<endl;
    cout<<"surface du rectangle = "<<longeur * largeur<<endl;
    cout<<"perimetre = "<<(longeur * largeur)*2;


    return 0;
}
