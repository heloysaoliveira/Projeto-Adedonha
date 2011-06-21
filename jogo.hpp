

#include "jogadorMaster.hpp"

class jogo{
private:
	string resultado;
	int pontos;
public:
	jogo(){
		resultado="";
		pontos=0;
		}
	char sortear(){
		string s="abcdefgijlmnoprstuv";
		srand(time(NULL) );
		int r=rand() % 18;
		char n=s[r];
		return n;
	}
	
