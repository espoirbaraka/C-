#include <iostream>

using namespace std;

int main()
{
    int nombre;
    cout<<"CALCUL DE LA PARITE"<<endl;
    cout<<"==================="<<endl;
    cout << "Saisi un nombre" << endl;
    cin>>nombre;
    if(nombre%2==0)
    {
        cout<<"le nombre "<<nombre<<" est pair";
    }
    else
    {
        cout<<"le nombre "<<nombre<<" est impair";
    }
    return 0;
}
