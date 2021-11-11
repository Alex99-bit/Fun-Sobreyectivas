#include "Combinaciones.h"

// Clase de funciones sobreyectivas
class Sobyect{
	private:
		int A,B;
		int m,n,suma;
		Combinaciones obj;
	public:
		void set_A(int num);
		void set_B(int num);
		int calcula_ab();
		int calcula_ba();
		void procesa_func();
};

void Sobyect::set_A(int num){
	this->A = num;
}

void Sobyect::set_B(int num){
	this->B = num;
}

// Calcula las funciones sobreyectivas de A->B
int Sobyect::calcula_ab(){
	m=A;
	n=B;
	suma=0;
	
	for(int i=0;i<n;i++){
		suma=suma+pow(-1,i)*obj.comb(n,n-i)*pow(n-i,m);
	}
	
	return suma;
}

// Calcula las funciones sobreyectivas de B->A
int Sobyect::calcula_ba(){
	m=B;
	n=A;
	suma=0;
	
	for(int i=0;i<n;i++){
		suma=suma+pow(-1,i)*obj.comb(n,n-i)*pow(n-i,m);
	}
	
	return suma;
}

// Despliega cuantas funciones sobreyectivas hay o si no existen
void Sobyect::procesa_func(){
	if(calcula_ab()>0){
		cout<<"\n\tEl numero de funciones sobreyectivas F:A->B es: "<<calcula_ab();
	}else{
		cout<<"\n\tNo hay funciones sobreyectivas F:A->B";
	}
	
	if(calcula_ba()>0){
		cout<<"\n\tEl numero de funciones sobreyectivas F:B->A es: "<<calcula_ba();
	}else{
		cout<<"\n\tNo hay funciones sobreyectivas F:B->A"<<endl;
	}
}


