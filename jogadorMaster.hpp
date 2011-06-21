
class jogadorMaster{
private:
	string palavra;
public:
	void setPalavra(string palavra){
		cout<<"Digite a sua palavra"<<endl;
		cin>>palavra;
		}  
	string getPalavra(){
		return palavra;
		}
};
