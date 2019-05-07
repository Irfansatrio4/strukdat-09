/*
Nama	: Irfan Satrio Nugroho
Npm		: 140810180003
Tanggal	: 07/05/2019
*/
//single linked list

#include <iostream>
using namespace std;

struct Stack{
	char a;
	Stack* next;
};
typedef Stack* pointer;
typedef pointer List;
void createList (List& Top){
	Top=NULL;
}
void createElement(pointer& pBaru){
	pBaru=new Stack;
	cin>>pBaru->a;
}
void pushStack(List& Top,pointer pBaru){
	if(Top==NULL){
		Top=pBaru;
	}
	else {
		pBaru->next=Top;
		Top=pBaru;
	}
}
void popStack(List& Top){
	pointer pHapus;
	cout << Top->a;
	if(Top->next==NULL){
		Top=NULL;
	}
	else {
		pHapus=Top;
		Top=Top->next;
		pHapus->next=NULL;
	}
}
int main(){
	int n;
	pointer pBaru;
	List Top;
	cout << "Masukkan banyak huruf	: "; cin>>n;
	createList(Top);
	for (int i=0;i<n;i++){
		createElement(pBaru);
		pushStack(Top,pBaru);
	}
	for (int i=0;i<n;i++){
		popStack(Top);
	}
}

