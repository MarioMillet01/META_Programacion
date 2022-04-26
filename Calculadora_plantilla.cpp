#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    double a,b;
    int select;
    bool fin=true;
    cout<<"inserte un numero: ";
    cin>>a;
    cout<<"inserte otro numero: ";
    cin>>b;
    do{
        cout<<"1)suma\n2)resta\n3)multiplicacion\n4)divicion\n5)salir\n";
        cin>>select;
        switch(select){
            case 1:
                system("cls");
                cout<<"la suma es "<<a+b<<endl;
                break;
            case 2:
                system("cls");
                cout<<"la resta es "<<a-b<<endl;
                break;
            case 3:
                system("cls");
                cout<<"la multiplicacion es "<<a*b<<endl;
                break;
            case 4:
                system("cls");
                cout<<"la division es: "<<a/b<<endl;
                break;
            case 5:
                fin=false;
                break;
        }
    }while(fin);

    getch();
    return 0;
}