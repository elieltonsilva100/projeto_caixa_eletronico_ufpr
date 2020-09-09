#include "ContaComum.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

ContaComum::ContaComum(){
	cout << "###############################################"<< endl;
	cout << "###########   CADASTRO CONTA COMUM  ###########" << endl;
	
	cout << "Informe o nome do titular da conta comum: " << endl;
	char nome[30];
	
	scanf("%[^\n]", nome);
	fflush(stdin);
	
	if(strlen(nome) <= 30) {
		strcpy(this->nome, nome);	
	}
	
	cout << "Numero Conta Comum: ";
	cin>> this->numero;
	
	cout << "Saldo Conta Comum (R$): ";
	cin>> this->saldo;
	
	cout << endl << endl;	
	
	cout << "############## FIM CADASTRO ###################"<< endl;
	cout << "###############################################"<< endl;
	system("pause");
	system("cls");
};

ContaComum::ContaComum(char nome[30], int numero, float saldo){
	strcpy(this->nome, nome);
	
	// this->nome = nome;
	this->numero = numero;
 	this->saldo = saldo;                                                                            
};

void ContaComum::extrato() {
	cout << "##########   EXTRATO CONTA COMUM  #############"<< endl;
	Conta::extrato();
	cout << endl;
	cout << "##############   FIM EXTRATO  #################"<< endl;
	system("pause");
	system("cls");
};
