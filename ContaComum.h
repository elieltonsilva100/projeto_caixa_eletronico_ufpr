#ifndef CONTACOMUM_H
#define CONTACOMUM_H

#include "Conta.h"

class ContaComum : public Conta
{
	public:
		ContaComum();
		ContaComum(char nome[30], int numero, float saldo);
		void extrato();
};

#endif
