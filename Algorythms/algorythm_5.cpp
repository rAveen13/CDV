#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a,b,menu,c,wynik,d;
	cout << "podaj dwie liczby naturalne"<<endl;
	cin >>a;
	cin >>b;

	while (menu!=4){
		cout << "co chcesz policzyc 1 suma 2 suma kwadratow 3 srednia arytmetyczna 4 zakoncz program"<<endl;
		cin >>menu;
		c=a;
		wynik=0;

		switch(menu){
			case 1:
			    while(c-1<b)
			    {
			    	wynik+=c;
			    	c++;
				}

				cout<<"wynik: "<<wynik<<endl;
			    break;

			case 2:
				while(c-1<b)
			    {
			    	d=c*c;
			    	c++;
			    	wynik+=d;
				}

				cout<<"wynik: "<<wynik<<endl;
			    break;

			case 3:
				while(c-1<b)
			    {
			    	wynik+=c;
			    	c++;
				}
				wynik=wynik/(c-1);
				
			    cout<<"wynik: "<<wynik<<endl;
			    break;
		}
	}
	return 0;
}
