
#include<iostream>

using namespace std;

bool SoNguyenTo(int n){
	for(int i = 2; i < n ; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
bool SoAmstrong(int n){
	int tam = n;
	int tongLapPhuong = 0;
	do{	
		int dx = 0;
		dx = (tam%10);
		tongLapPhuong = tongLapPhuong + (dx * dx * dx);
		tam = tam/10;
	}while(tam != 0);
	if(n == tongLapPhuong){
		return 1;
	}else{
		return 0;
	}
}
bool SoDoiXung(int n){
	int dx = 0;
	int tam = n;
	do{	
		dx=dx*10;
		dx = dx + (tam%10);
		tam = tam/10;
	}while(tam != 0);
	if(n == dx){
		return 1;
	}else{
		return 0;
	}
}

void NhiPhan(int n){
	int tam = 0; 
	if(n/2 != 0){
		NhiPhan(n/2);  
	}
	cout<<n%2; 
}
