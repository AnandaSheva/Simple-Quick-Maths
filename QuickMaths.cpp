#include <iostream>
using namespace std;

int main(){
	int bilangan, tambah, kurang, kali;
	float bagi;
	cin>>bilangan;
	
	tambah = bilangan + 10;
	kurang = tambah - 1;
	kali = kurang * 3;
	bagi = (float)kali / 2;
	
	cout<< bilangan << " plus 10 is "<<tambah<<endl;
	cout<< "minus one is "<<kurang<<endl;
	cout<< "multiple three is "<<kali<<endl;
	cout<< "divide two is "<<bagi<<endl;
	
return 0;	 
}
