#include "std_lib_facilities.h"

int main()
{
double smallest_value=100000, largest_value=0, sum=0, szam, a=0, db=0;
string unit="";
vector <double> v;


while (unit != "|")

{
	
	cout<< "Adja meg a szamot es a mertekegyseget(m, cm, inch, ft):\n";
	cin>>szam>>unit;

	if (unit=="cm") {
		a=szam/100;
		v.push_back(a);
	}
	else if (unit=="inch") {
		a=szam*0.0254;
		v.push_back(a);
	}
	else if (unit=="ft") {
		a=szam*0.3048;
		v.push_back(a);
	}
	else if (unit=="m") {
		a=szam;
		v.push_back(a);
	}
	else if (unit=="|") {
		cout<<"ciklus vege\n";
	}
	else 
		cout<<"Helytelen mertekegyseg\n";
	
	
	if (a<smallest_value) {
		smallest_value=a;
		cout<<smallest_value<<"m is the smallest value so far"<<"\n";
	}
	else if (a>largest_value) {
		largest_value=a;
		cout<<largest_value<<"m is the largest value so far"<<"\n";
	}


	sum+=a;

}


	cout<<"Legkisebb szam meterben: "<<smallest_value<<"\n";
	cout<<"Legnagyobb szam meterben: "<<largest_value<<"\n";
	cout<<"Beolvasott ertekek szama: "<<v.size()<<"\n";
	cout<<"Szumma: "<<sum<<"\n";

		if (largest_value-smallest_value<0.01)
			cout<<"the numbers are almost equal\n";

	sort(v);
	for(int i=0; i<v.size(); ++i){
		cout<<v[i]<<"m ";
	}
	cout<<"\n";

	return 0;
}
