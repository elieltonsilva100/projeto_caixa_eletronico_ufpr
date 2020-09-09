#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

class ContaPoupanca : public Conta
{
	public:
		ContaPoupanca();
		ContaPoupanca(char nome[30], int numero, float saldo, char aniversario[10]);
		void extrato();
	private:
		char aniversario[10];
		
};

#endif
