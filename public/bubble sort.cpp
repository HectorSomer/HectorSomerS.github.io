#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int limite = 5;
	int arreglo[limite] = {93,84,100,3,69};
	//cout << sizeof(int) << endl;
	//cout << sizeof(arreglo) / sizeof(int) << endl;
	bool b;
	
	//for(int j=0; j<5; j++) {
	do { 
		b = false;
		for(int i=0; i<limite-1; i++) { 
			if(arreglo[i]>arreglo[i+1]) {
				b = true;
				
				int temporal = arreglo[i];
				arreglo[i] = arreglo[i+1];
				arreglo[i+1] = temporal;
			} 
		}
		
		for(int i=0; i<limite; i++) {
			cout << arreglo[i] << "\t";
		}
		cout << endl;
		
		/*if(b == false) {
			j = 5;
			break;
		}*/
	} while(b == true);
	//}
			
	return 0;
}
