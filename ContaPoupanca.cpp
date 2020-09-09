#include "ContaPoupanca.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

ContaPoupanca::ContaPoupanca(){
    fflush(stdin);
  
	cout << "##################################################"<< endl;
	cout << "###########   CADASTRO CONTA POUPANÇA  ###########" << endl;
	
	cout << "Informe o nome do titular da conta Poupança: " << endl;
	char nome[30];
	
	scanf("%[^\n]", nome);
	
	fflush(stdin);
	
	if(strlen(nome) <= 30) {
		strcpy(this->nome, nome);	
	}
		cout << "Numero Conta Poupança: ";
	cin>> this->numero;
	
	cout << "Saldo Conta Poupança (R$): ";
	cin>> this->saldo;

	cout << "Data de Aniversário do titular: ";
	cin>> this->aniversario;
		
	cout << endl << endl;	
	
	cout << "############## FIM CADASTRO ###################"<< endl;
	cout << "###############################################"<< endl;
	system("pause");
	system("cls");
};

ContaPoupanca::ContaPoupanca(char nome[30], int numero, float saldo, char aniversario[10]):Conta::Conta(nome, numero, saldo) {
	strcpy(this->nome, nome);
	this->numero = numero;
 	this->saldo = saldo; 
 	strcpy(this->aniversario, aniversario);
};

void ContaPoupanca::extrato() {
	cout << "########   EXTRATO CONTA POUPANÇA  ############"<< endl;
	Conta::extrato();
	cout << "Data de aniversário: " << this->aniversario << endl;	
	cout << endl;
	cout << "##############   FIM EXTRATO  #################"<< endl;
	system("pause");
	system("cls");
};
