
class Combinaciones{
	private:
		double factorial;
		double div,cont[100];
	public:
		double fact(int num); // Factorial
		void perm_rep(char var[100]); // Permutaciones con repetición
		double comb(int n,int r); // Combinaciones
		void binomio(int n); // Teorema del binomio
		double dist(int n,int r); // Distribuciones	
};

double Combinaciones::comb(int n,int r){
	return (fact(n)/(fact(n-r)*fact(r)));
}

double Combinaciones::dist(int n,int r){
	return (comb(n+r-1,r));
}

double Combinaciones::fact(int num){
	factorial=1;
	fflush(stdin);
    if(num<0){
		factorial=0;
	}else if(num==0){
		factorial=1;
	}else{
		for(int i=1;i<=num;i++){
			factorial = factorial*i;
		}
	}
	return factorial;
}

void Combinaciones::binomio(int n){
	cout<<"\n\t";
	for(int k=0;k<=n;k++){
		cout<<comb(n,k);
		cout<<"x"<<n-k<<"y"<<k<<" + ";
	}
	cout<<"\n";
}

void Combinaciones::perm_rep(char var[100]){
	// cadena de 100 caracteres maximo
	fflush(stdin);
	
	for(int i=0;i<strlen(var);i++){
		cont[var[i]]++; 
	}
	//cout<<"\n\t-- "<<cont[108];
	div=1;
	// El algoritmo se crashea cuando se ingresa una L
	for(int j=97;j<=122;j++){
		if(cont[j]>=1){
			div=div*fact(cont[j]);	
		}
	}
	if(div==0)
		div=1;
	cout<<"\n\n\tResultado de "<<strupr(var)<<" : "<<(fact(strlen(var)))/div<<endl;
}
