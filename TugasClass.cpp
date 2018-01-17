#include <iostream>
using namespace std;

class sepatu_olahraga{
	public:
		void perbedaannya(string olahraga);
		int  harga;
		string ciri;
};

int main(){	
	sepatu_olahraga sepatu_bola, sepatu_jogging, sepatu_roda;
	
	sepatu_bola.ciri="Mempunyai Alas Bergerigi";
	sepatu_jogging.ciri="Mempunyai Alas yang keset";
	sepatu_roda.ciri="Mempunyai beberapa Roda di setiap alas sepatu";
	
	sepatu_bola.harga=400000;
	sepatu_jogging.harga=4500000;
	sepatu_roda.harga=275000;
	
	cout << "Sepatu Bola"<<endl;	
	cout << (sepatu_bola.ciri)<<endl;
	sepatu_bola.perbedaannya("Sepatu yang mempunyai gerigi di alasnya, yang di khususkan untuk lapangan berumput");
	cout <<endl;
	
	cout << "Sepatu Jogging"<<endl;	
	cout << (sepatu_jogging.ciri)<<endl;
	sepatu_jogging.perbedaannya("Sepatu yang pada dasarnya ringan untuk di gunakan saat jalan santai");
	cout <<endl;
}
