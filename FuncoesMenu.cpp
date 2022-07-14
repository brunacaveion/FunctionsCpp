// Aqui no .cpp � o "como?" as fun��es do arquivo .h ser�o implementadas
// no .cpp coloco a implementa��o de todas as fun��es do arquivo .h
#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	//int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
	} while (RetornarEscolha() != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
	}
	return TipoEscolha;

}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	ProcessarEscolha(escolha);
	return escolha;
}