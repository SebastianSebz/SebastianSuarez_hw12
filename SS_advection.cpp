#include <iostream>
using namespace std;
	
// taller ec adveccion

int main(){
    
        //Se inicializan y se definen las variables. iteracion (700)
		double mid = 0.5, dtn = 4, delta=0.01, x=-2; int n =((dtn)+ delta)/delta, i, k;
		double *yn = new double[n], *yo = new double[n];
		
		for(i=0; i<n; i++){
			
			if( x>mid or x<-mid){
				yo[i]=0;}
				
			else{yo[i]=mid;}
			cout << 0 << "  " << x << "  " << yo[i] << endl;
			x= x + delta;}

        //iteracion en tiempo
		for(k=1; k<=700; k++){
		    // se define la variable
			x=-2;
			//lim
			yn[0]=0; yn[n-1]=0;
			
			for(i=1;i<n-1;i++){
				yn[i]=yo[i]-1*0.001*(yo[i]-yo[i-1])/(delta);}
				
			for(i=0;i<n;i++){
				yo[i]=yn[i];}
				
			if(k%175==0){
			    
				for(i=0;i<n;i++){
					cout << k << "  " << x << "  " << yn[i] << endl;
		        	x= x + delta;}}}
		return 0;}
