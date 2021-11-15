
#include "Sobyect.h"
#define sys system

class Fun_Sob_Menu{
	private:
		short int op;
		int num;
		Sobyect obj;
	public:
		void menu();
};

// Metodo que despliega el menu principal
void Fun_Sob_Menu::menu(){
	do{
		sys("cls");
		cout<<"\n\t1.-Iniciar programa\n\t0.-Salir\n\n\t>> ";
		cin>>op;
	}while(op<0 || op>1);
	
	while(op){
		sys("cls");
		cout<<"\n\t**Funciones sobreyectivas**"<<endl;
		cout<<"\n\tIngrese A: ";
		cin>>num;
		obj.set_A(num);
		cout<<"\n\tIngrese B: ";
		cin>>num;
		obj.set_B(num);
		
		obj.procesa_func();
		
		cout<<"\n\n\n\t";
		sys("pause");
		
		op=2;
		while(op<0 || op>1){
			sys("cls");
			cout<<"\n\t1.-Procesar de nuevo\n\t0.-Salir\n\n\t>> ";
			cin>>op;
		}
	}
}
