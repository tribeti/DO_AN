// Cau1 : Nhap vao so nguyen, tinh tong n so
#include<iostream>
#include "LAB2.h"

using namespace std;

int main(){
	cout<<"Nhap vao so n: ";
	int n;
	cin>>n;
	int tong = 0;
	do{
		tong =tong + (n%10);
		n = n/10;
	}while(n != 0);
	cout<<"Tong: "<<tong;
}

// Chuyen mot so sang nhi phan

/*#include<iostream>

using namespace std;

void NhiPhan(int n){
	int tam = 0; 
	if(n/2 != 0){
		NhiPhan(n/2);  
	}
	cout<<n%2; 
}

int main(){
	int n;
	cout<<"Nhap so thap phan n: ";
	cin>>n;	
	NhiPhan(n);
} 
*/ 
// So palidrome
/*
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;	
	if (SoNguyenTo(n) && SoDoiXung(n))
		cout<<"la so palidrome"<<endl;
	else
		cout<<"Ko la so palidrome"<<endl;
		
} 
*/

/*int main(){
	int n;
	cin>>n;	
	if(SoAmstrong(n)){
		cout<<"la so Amstrong"<<endl;
	}else{
		cout<<"Ko la so Amstrong"<<endl;
	}
} 
*/
