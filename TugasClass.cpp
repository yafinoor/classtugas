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
}
