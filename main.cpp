#include <iostream>
#include <locale.h>
#include "ContaComum.h"
#include "ContaPoupanca.h"

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	float deposito = 0;
	
	int op = 0;
	
	ContaComum cc1;
	cc1.extrato();
	
	//ContaPoupanca cp1("Ebner Matias da silva", 196680, 0, "24/10/1995");	
	ContaPoupanca cp1;	

	
	while (op != 5) {		
		cout << "CAIXA ELETR�NICO GRINGOTS - V1.0 - DESENVOLVIDO POR ELIELTON MATIAS DA SILVA" << endl << endl;
		cout << "[1] DEP�SITO CONTA COMUM" << endl;
		cout << "[2] DEP�SITO CONTA POUPAN�A" << endl;
		cout << "[3] EXTRATO CONTA COMUM" << endl;
		cout << "[4] EXTRATO CONTA POUPAN�A" << endl;
		cout << "[5] SAIR" << endl;
		
		cin >> op;
		
		system("cls");
		
		switch(op) {
			case 1: {
				cout << "Qual o valor do dep�sito para conta comum? " << endl;
				cin >> deposito;
				cc1.depositar(deposito);
				deposito = 0;
				break;
			}
			case 2: {
				cout << "Qual o valor do dep�sito para conta poupan�a? " << endl;
				cin >> deposito;
				cp1.depositar(deposito);
				deposito = 0;
				break;
			}
		    case 3: {
		    	cc1.extrato();
				break;
			}
		    case 4: {
		    	cp1.extrato();
				break;
			}
			case 5: {
		    	cout << "FIM CAIXA ELETR�NICO GRINGOTS - V1.0" << endl;
		    	system("pause");
		    	system("cls");
				break;
			}
			default: {
		    	cout << "Op��o inv�lida tente novamente" << endl;
		    	system("pause");
		    	system("cls");
		 		break;
		  	}
		};
	}
	
	return 0;
}
