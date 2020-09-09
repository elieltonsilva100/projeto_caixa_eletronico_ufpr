#include "Conta.h"
#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

Conta::Conta(){
	
}

Conta::Conta(char nome[30], int numero, float saldo){
 	strcpy(this->nome, nome);
	this->numero = numero;
 	this->saldo = saldo;
}

void Conta::depositar(int valor) {
	cout << "###############################################"<< endl;
	cout << "DEPÓSITO DE R$: " << valor << " EFETUADO" << endl;
	
	this->saldo = saldo + valor;
	
	cout << endl;
	cout << "###############################################"<< endl;
	system("pause");
	system("cls");
}

void Conta::extrato() {
	cout << "Nome: " << this->nome << endl;	
	cout << "Número: " << this->numero << endl;	
	cout << "Saldo: " << this->saldo << endl;
}
