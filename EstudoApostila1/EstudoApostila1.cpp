// EstudoApostila1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
	/*int * ptr_a = new int;

	if (ptr_a == NULL)
	{
		exit(1);
	}

	cout << "\n" << ptr_a;
	cout << "\n" << *ptr_a << "\n";

	* ptr_a = 27;

	cout << "\n" << ptr_a;
	cout << "\n" << * ptr_a << "\n";

	delete(ptr_a);
	*/



	int k[10];
	int i;
	int *v;
	v = &k[0];  
	
	*v = 0;
	*(v += 1) = 1;
	*(v += 1) = 2;
	*(v += 1) = 3;
	
	for (i = 0; i < 10; i++)
	{ 
		cout << "v[" << i << "]: " << k[i] << endl;
	}

	cout << "Endereço de 'v': " << v << endl; // imprime o endereço da área alocada para 'v'
	//delete (v);













		/*
		char nome[80];
		std::cout << "Qual o seu nome ?";
		std::cin >> nome;
		std::cout << "Ola " << nome << " tudo bem ? \n";
	
		float comprimento, largura;
		std::cout << "Informe o comprimento e a largura do retângulo:"; 
		std::cin >> comprimento >> largura;
		std::cout << "Área do retângulo: " << comprimento * largura << " m2\n";
		
		
		int i = 1234;
		int z = 1234;
		int y = 0;
		float p = 12.3456F;
		std::cout << "|"
			<< std::setw(8) << std::setfill('*')
			<< std::hex << i
			<< "|\n"
			<< "|"
			<< std::setw(6) << std::setprecision(4)
			<< p
			<< "|" << endl;

		z = (int)p;
		y = int(p);
		std::cout << "\n_____________\n"<< z;

		*/
		
		/*
		float soma = 0;
		float valor = 0;
		const float pi = 3.14;
		const char * msg = "pressione enter...";
		float * psoma;
		
		
		psoma = &soma;

		cout << "\n" << psoma;
		cout << "\n" << soma;

		*psoma = 1;

		cout << "\n" << psoma;
		cout << "\n" << soma;

		*psoma = pi;

		cout << "\n" << psoma;
		cout << "\n" << soma;
		

		while (true) 
		{	

		
		cout << "Digite os valores(negativo finaliza):";
		cin >> valor;
		
		soma += valor;

		
		
		if (soma < 0)
			{ 
			break;
			cout << "Valor ruim = " << valor;			
			}

		else cout << "Valor bom = " << valor;
				
		cout << "\nSoma local " << soma << "\nSoma global "  << soma << endl;
				
		}
		*/




}

