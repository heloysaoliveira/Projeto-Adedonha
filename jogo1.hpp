
class jogo{
private:
	int resultado;
	int pontos;
	char n;
public:
	jogo(){
		pontos=0;
		}
	void sortear(){
		string s="abcdefgijlmnoprstuv";
		srand(time(NULL) );
		int r=rand() % 18;
		n=s[r];
	}
	char getSortear(){
	return n;
		}
	void jogoValidar(string palavra, char n){
		if(palavra[0]==n && palavra.length()>=2){
			resultado=1;
			}else{
			     resultado=2;
			     }
		}
	int getJogoValidar(){
		return resultado;
		}
	void computarPontos(int result){
	if(result==1){
			pontos=pontos+10;
			}else{
				pontos=pontos+0;
				}
	}
	int getPontos(){
		return pontos;
		}
};	
