#ifndef CONTA_H
#define CONTA_H

class Conta
{
	public:
		Conta();
		Conta(char nome[30], int numero, float saldo);
		void depositar(int valor);
		virtual void extrato();
		
	protected:
		char nome[30];
		int numero;
		float saldo;
};

#endif
