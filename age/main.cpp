#include <iostream>

using namespace std;

int main()
{
    int age;
    char sexe;
    cout << "TEST DE MINEUR(E) ET MAJEUR(E)" << endl;
    cout<<"==============================="<<endl;
    cout<<"Saisi votre age"<<endl;
    cin>>age;
    cout<<"Et votre sexe"<<endl;
    cin>>sexe;
    if(age<18 && sexe == 'F')
    {
        cout<<"Vous etez une mineure";
    }else if(age>=18 && sexe == 'F')
    {
        cout<<"Vous etez une majeure";
    }
    else if(age<18 && sexe == 'M')
    {
        cout<<"Vous etez un mineur";
    }
    else if(age>=18 && sexe == 'M')
    {
        cout<<"Vous etez un majeur";
    }else
    {
        cout<<"Donne incorrecte";
    }

    return 0;
}
