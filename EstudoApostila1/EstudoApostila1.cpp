// EstudoApostila1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	// Jogo da forca
	string PalavraSecreta = "";
	string PalavraAdivinhacao = "";
	char LetraAdivinhacao = 0;

	//Pega a palavra secreta
	cout << "Digite a palavra secreta: ";
	getline(cin, PalavraSecreta);

	//Iguala as strings para que tenham a mesma quantidade de caracteres
	PalavraAdivinhacao = PalavraSecreta;

	//Inicia a forca

	int i = 0;
	for (i = 0; i < PalavraAdivinhacao.size(); i++)
	{
		PalavraAdivinhacao[i] = '_';
	}

	while (PalavraSecreta != PalavraAdivinhacao)
	{
	system("cls");
	//Pega a letra para adivinhação
	cout << "Palavra: '" << PalavraAdivinhacao << "'" << endl;
	cout << "Digite a letra para adivinhacao: ";
	cin >> LetraAdivinhacao;
	
		int k = 0;
		for (k = 0; k < PalavraSecreta.size(); k++)
		{
			if (PalavraSecreta[k] == LetraAdivinhacao)
			{
				PalavraAdivinhacao[k] = PalavraSecreta[k];
			}
		}

	}
	system("cls");
	cout << "Palavra: '" << PalavraAdivinhacao << "' adivinhada com sucesso!" << endl;
	
	*/
	
	
	/*

	do 
	{
		cout << "Digite a letra: "
		cin >> LetraAdivinhacao;
		PalavraAdivinhacao += LetraAdivinhacao + '\n';
	} while (!line.empty());

	std::cout << "The text you introduced was:\n" << content;
	return 0;

	*/




	/*
	string palavra = "";
	string PalavraEncontrada = "";
	char letra;
	
	cout << "Digite a palavra para a forca: " << endl;
	
	getline(cin, palavra);
	
	//cout << palavra << endl;

	//system("pause");
	//system("cls");
	
	PalavraEncontrada = palavra;

	// Label
	inicio:

	system("cls");

	cout << "Digite uma letra qua a palavra secreta possa conter" << endl << endl;
	
	cin >> letra;

	int i;

	
	for (i = 0; i < sizeof(palavra)/4; i++)
	{

		
		if (palavra[i] == letra)
		{
			//cout << "Letra '" << letra << "' encontrada na posição " << i << endl << endl;
			cout << palavra[i];
			palavra[i] = (char)0;
		}
		else
		{
			cout << "_";
		}
	}
	cout << endl;
	system("pause");
	

	
	{
	cout << "Palavra encontrada:" << endl;
	cout << PalavraEncontrada << endl;
	goto fim;
	}

	goto inicio;

	fim:

	cout << "Palavra encontrada";
	*/




	/*
	//Vetores 
	int vetor[5] = { 10, 20, 30, 40, 50 };
	int tam = sizeof(vetor) / 4;

	vetor[0] = 2;
	vetor[1] = vetor[0] * 2;
	vetor[2] = vetor[1] * 2;
	vetor[3] = vetor[2] * 2;
	vetor[4] = vetor[3] * 2;

	int i;

	for (i = 0; i <= tam; i++) {
		cout << vetor[i] << endl;
	}

	*/


	/*
	// For

	int x = 0;

	for (x = 0; x <= 10; x++) {
		cout << x << endl;
	}

	*/

	
	/*
	//Do while
	
	int n = 0;

	do 
	{

		cout << n << endl;

	} while (n != 0);
	
	*/



	/* While
	int n = 0;

	while (n < 10)
	{
		cout << n << endl;
		if (n == 8) { break; }
		++n;
	}

	*/

















	/*Switch


	int val = 2;

	switch (val)
	{
	case 1:
		cout << "Cor selecionada = " << val << endl;
	case 2:
		cout << "Cor selecionada = " << val << endl;
	default:
		cout << "Nada selecionado" << endl;
		break;
	}


	switch (val)
	{
	case 1:
	case 2:
	case 3:
		cout << " 1, 2 ou 3 selecionado. valor selecionado = " << val << endl;
		switch (val)
		{
		case 3:
			cout << "valor especial" << endl;
		default:
			break;
		}
		break;
	case 4:
		cout << val << " selecionado" << endl;
	default:
		break;
	}
	*/







	/*Operador ternário
	int nota = 60;
	int nota2 = 120;
	bool res = false;

	(nota <= nota2) ? res = true : res = false;

	cout << res <<endl;

	res = (nota <= nota2) ? true : false;

	cout << res << endl;

	*/

	/* Ponteiro
	int * ptr_a = new int;

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


	/*
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
	delete (v);*/













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

