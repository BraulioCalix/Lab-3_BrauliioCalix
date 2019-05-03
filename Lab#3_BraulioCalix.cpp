#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int MCD(int mayor,int menor){
	if(mayor % menor ==0){
		return menor;
	}else{
		int temp=0;
		temp = mayor % menor;
		mayor = menor;
		menor = temp;
		return MCD(mayor,menor);
	}
}
int* primos(int);
void libera(int*);
int main(){
	cout << "bienvenido" << endl;
	int respusu=1;
	while(respusu==1){
		cout << "ingrese la opcion " << endl;
		cout << "1) MCD "<< endl;
		cout << "2) numeros primeros "<< endl;
		cout << "3) base de datos " << endl;
		int opcion =0;
		cin >> opcion;
		switch (opcion){
			case 1:{
				cout << "ingrese un numero" <<endl;
		 		int num1=0;
				cin >> num1;
				cout << "ingrese otro numero" << endl;
				int num2 = 0;
				cin >> num2;
				int residuo=0;
				int mayor=0,menor=0;
				if(num1 < 1 || num2 < 1){
					cout << "ingreso datos invalidos" << endl;		
				}
				if (num1 < num2){
					mayor = num2;
					menor = num1;
					residuo=MCD(mayor, menor);
					cout << "el MCD es:  "<< residuo  << endl;
				}else{
					mayor = num1;
					menor = num2;
					residuo = MCD(mayor , menor);
					cout << "el MCD es:  "<< residuo << endl;
				}
				
			       }break;
			case 2:{
				int tama= 25;
			       int* arreglo = primos(tama);		       
				int numero =0;
				cout << "ingrese el numero a dividirse" << endl;
				cin >> numero;
				int imprimir=0;
				
				int ContPon=0;	//contador de potencia
				bool signum=false; //boolean que va a determinar si pasa al siguiente numero;
				cout << numero <<":" ;
				for(int i = 0 ; i < tama; i++){
					ContPon=0;
					signum = false;		
					while(signum == false){
						if(numero % arreglo[i] == 0 ){
							numero = (numero/arreglo[i]); 
							ContPon++;
							//fin if
						}else{
							signum = true;								
						}//fin else
						
					}//fin while 
					if(ContPon !=0){
        	                      		 cout <<"("<< arreglo[i]<< "^" << ContPon<< ")";
                                	}
				}//fin for
					cout << endl;
				libera(arreglo);				
			       }break;
			case 3:{
											
			       }break;
			default:{
					cout << "ingreso un valor invalido "<<endl;
				}break;
		}

		cout <<"desea reingresar 1)si 2)no"<<endl;
        	cin >> respusu;//asigna respuesta de usuario
	}//fin de while
		
}//fin main
int* primos(int size){
  	
  	int* arreglo =new int[size]; 
	arreglo [0]=2;
        arreglo [1]=3;
	arreglo [2]=5;
	arreglo [3]=7;
	arreglo [4]=11;
	arreglo [5]=13;
	arreglo [6]=17;
	arreglo [7]=19;
	arreglo [8]=23;
	arreglo [9]=29;
	arreglo [10]=31;
	arreglo [11]=37;
	arreglo [12]=41;
	arreglo [13]=43;
	arreglo [14]=47;
	arreglo [15]=53;
	arreglo [16]=59;
	arreglo [17]=61;
	arreglo [18]=67;
	arreglo [19]=71;
	arreglo [20]=73;
	arreglo [21]=79;
	arreglo [22]=83;
	arreglo [23]=89;
	arreglo [24]=97;
       	return arreglo;
  	}//fin primos
void libera(int* array){
	delete[] array;
}
