// EstudoApostila1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    
	
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







}

