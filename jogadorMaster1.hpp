
class jogadorMaster{
private:
    string palavra;	
    int result;
public:
	void setPalavra(){
		cout<<"Digite a sua palavra"<<endl;
		cin>>palavra;
		}
	string getPalavra(){
		return palavra;
		}  
	void jogadorValidar(int resultado){
		if(resultado==1){
		cout<<"Digite 1 se a palavra do adversario existir"<<endl;
		cout<<"Digite 2 se a palavra não existir"<<endl;
		cin>>result;
	        }else{
			cout<<"Invalida"<<endl;
		}
	}
	int getJogadorValidar(){
		return result;
		}
};
