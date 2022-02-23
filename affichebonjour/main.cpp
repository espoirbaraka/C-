#include <iostream>

using namespace std;

int main()
{
    int nombre;
    cout << "AFFICHE BONJOUR LE NOMBRE DES FOIS" << endl;
    cout<< "=================================="<<endl;
    cout<<"saisi le nombre de fois"<<endl;
    cin>>nombre;
    for(int i=1;i<=nombre;i++)
    {
        cout<<"Bonjour"<<endl;
    }
    return 0;
}
