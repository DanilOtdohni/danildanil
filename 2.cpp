#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    setlocale(0,"");
    ofstream f;
    f.open ("2.txt");
    int a,b,n;
    cout<<"������� ����� � �����?"<<endl;
    cin>>n;
    cout<<"�������� ����� � �����?"<<endl;
    cin>>a>>b;
    for ( int i=1; i<=n;i++)
    {
        double x=a+(b-a)*(double)rand()/(double)RAND_MAX;
        f<<x<<" ";
    }
    f.close();
    cout<<"������ � ���� ���������"<<endl;
    system("PAUSE");
    return 0;
}
