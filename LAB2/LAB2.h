
#include<iostream>

using namespace std;

// Ham kiem tra so nguyen to true/false
bool SoNguyenTo(int n){
	if(n == 1 || n == 2 || n == 3){		// Neu n = 1,2,3 tra ve true, ket thuc;
		return 1;
	}else{
		for(int i = 2; i < n ; i++){	// So nguyen to laf so chia het cho 1 va chinh no => xet tu 2 -> n-1
			if(n%i == 0){   	// Neu n chia du cho 1 so bat ky => sai , tra ve 0 , break;
				return 0;
			}
		}	
	}			// Nguoc lai neu n ko chia het cho 1 so trong khoang 2 -> n-1 
	return 1;			// tra ve true, ket thuc;
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
