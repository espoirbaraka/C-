#include <iostream>

using namespace std;

int main()
{
    cout<<"NOMBRE PAIR ENTRE 1 ET 10" << endl;
    cout<<"=========================" << endl;
    for(int i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            cout<<i;
        }
    }
    return 0;
}
