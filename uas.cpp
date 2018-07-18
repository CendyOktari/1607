#include <iostream>
#include <math.h>
using namespace std;

class Gaji{
	private:
		int anak;
		int gaji;
		int tunjangan;
	public :
		void input(){
		cout<<"jumlah anak = ";cin>>anak;
		cout<<"gaji pokok = ";cin>>gaji;
	if(anak <4)
	{
	tunjangan=(0.1*anak)*gaji;
	}
	else if(anak>3)
	{
	tunjangan=(0.1*3)*gaji;
	}
	else{
	tunjangan=0;
	}
}

		void Output(){
			cout<<"tunjangan anak= "<<tunjangan<<endl;
			}
};

int main(){
Gaji a;
a.input();
a.Output();
};