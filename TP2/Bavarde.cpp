#include <iostream>
using namespace std;


class Bavarde {
  int v;
  public :
	Bavarde(){
		cout << "sans args" << endl;
	}
	
	Bavarde(int i){
		v = i;
		cout << "avec args" << endl;
	}
	
	~Bavarde(){
		cout << "Tais-toi" << endl;
	}
} bizarre(1);

//Bavarde globale(2);

void fonction(Bavarde &b) {
	cout << "code de la fonction" << endl;
}

int main(int, char **)
{
	Bavarde b;
	Bavarde * p = new Bavarde(3);
	fonction(b);
	delete p;
  return 0;
}

