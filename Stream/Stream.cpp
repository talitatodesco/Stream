#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int opcao, opcao2;

	cout << "<<<<-------------Escolha uma opcao:------------->>>> " << endl;
	cout << "<<<<-------------1- CALCULADORA------------->>>> " << endl;
	cout << "<<<<-------------2- SAIR ------------->>>>" << endl;
	cin >> opcao;
	system("cls");

	if (opcao == 1) {
		cout << "Escolha uma opcao: " << endl;
		cout << "------------- 1- SOMA -------------" << endl;
		cout << "------------- 2- SUBTRACAO -------------" << endl;
		cout << "------------- 3- MULTIPLICACAO -------------" << endl;
		cout << "------------- 4- DIVISAO -------------" << endl;
		cout << "------------- 5- VOLTAR -------------" << endl;
		cin >> opcao2;
		system("cls");


		switch (opcao2)
		{
			int num, num2;

		case 1:
			cout << "Digite o primeiro valor: ";
			cin >> num;
			cout << "Digite o segundo valor: ";
			cin >> num2;

			cout << "A operação digitada eh soma, e o resultado eh: "<< num + num2;
			break;
		
		case 2:
			cout << "Digite o primeiro valor: ";
			cin >> num;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "A operação digitada eh subtração, e o resultado eh: "<< num - num2;
			break;
		
		case 3:
			cout << "Digite o primeiro valor: ";
			cin >> num;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "A operação digitada eh soma, e o resultado eh: " << num * num2;
			break;
		case 4:
			cout << "Digite o primeiro valor: ";
			cin >> num;
			cout << "Digite o segundo valor: ";
			cin >> num2;
			cout << "A operação digitada eh soma, e o resultado eh: " << num / num2;
			break;
		case 5:
			cout << "Invalido ";
			break;


		}
	}

}