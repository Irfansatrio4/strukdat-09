/*
Nama	: Irfan Satrio Nugroho
Npm		: 140810180003
Tanggal	: 07/05/2019
*/
//aray

#include <iostream>
using namespace std;

const int maxElemen = 255;
struct Stack{
    char isi[maxElemen];
    int TOP;
};
Stack S;

void createStack (Stack& S){
    S.TOP = -1;
}
void createElement(char& elemenBaru){
    cout<<"Input: ";cin>>elemenBaru;
}
void push(Stack& S, char elemenBaru){
    if(S.TOP == maxElemen-1){
        cout << "Tumpukan sudah penuh"<<endl;
    }
    else{
        S.TOP=S.TOP+1;
        S.isi[S.TOP] = elemenBaru;
    }
}

void pop(Stack& S, char& elemenHsl){
    if(S.TOP<0){
        cout << "Tumpukan sudah kosong "<< endl;
    }
    else{
        elemenHsl=S.isi[S.TOP];
        S.TOP=S.TOP-1;
    }
}

void traversal(Stack S){
    for (int i=S.TOP;i>=0;i--){
        cout<<S.isi[i]<<endl;
    }
}

void display(Stack& S)
{
    if(S.TOP==-1)
    {
    cout<<"\n Stack is empty"<<endl;
    }
    else
    {
    for(int i=S.TOP;i>=0;i--)
        {
        cout<<i<<":"<<S.isi[i]<<endl;
        }
    }
}

int main()
{
    char eB;
    Stack S;
    int n;
    int pilih;
    createStack (S);
    do{
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Tampilkan"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Masukan pilihan :"; cin>>pilih;
        switch(pilih){
        case 1 :
            createElement(eB);
            push(S,eB);
        break;
        case 2 :
            traversal(S);

        break;
        default :
            exit(0);
        }
        system("pause");
    }while(pilih!=3);
    traversal(S);

    return 0;
}

