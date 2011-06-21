#include <cstdlib>
#include <iostream>

using namespace std;

#include "jogo.hpp"
#include "jogadorMaster.hpp"

int main(int argc, char *argv[])
{
	char n;
	jogo j1;
	n=j1.sortear();	
	cout << n << endl;
	return 0;
}
}

