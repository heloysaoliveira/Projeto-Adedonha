#include <cstdlib>
#include <iostream>

using namespace std;

#include "jogo1.hpp"
#include "jogadorMaster1.hpp"

int main(int argc, char *argv[])
{
 	char n;
	int x;
	jogo j1;
	j1.sortear();
	cout <<j1.getSortear()<< endl;
	jogadorMaster j2;
	j2.setPalavra();
	j1.jogoValidar(j2.getPalavra(),j1.getSortear());
	j2.jogadorValidar(j1.getJogoValidar());   
	j1.computarPontos(j2.getJogadorValidar());
	cout<<j1.getPontos()<<endl;
	return 0;
}


