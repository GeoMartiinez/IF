#include<iostream>
using namespace std;
main (){
	//---------------------------------------------------
	/* //Numero es Positivo>0 o Negativo<0
	int num = 0;
	cout<<"Ingrese el Numero: ";
	cin>>num;
	
	if(num>0){
		//Entra cuando la condicion es verdadera
		cout<<"Positivo"<<endl;
		
	}else{
		if (num==0){
		cout<<"Neutro"<<endl;
		
		
		}else{
		cout<<"Negativo"<<endl;	
		}
	}*/
	
	//---------------------------------------------------
	
	/*string pais="";
	cout<<"Ingrese el Pais: ";
	cin>>pais;
	
	if (pais=="guatemala"){
		cout<<"Yo soy de: "<<pais<<" Mi Pais"<<endl;
		
	}else{
		cout<<pais<<endl;
	}*/
	
	//---------------------------------------------------
	
	/*int num=0;
	cout<<"Ingrese Numero: ";
	cin>>num;
	
	if ((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}*/
	
	//---------------------------------------------------
		
	/*char lapiz, lapicero, cuaderno;
	cout<<"Trae Lapiz (s/n) ";
	cin>>lapiz;
	cout<<"Trae Lapicero (s/n) ";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n) ";
	cin>>cuaderno;
	
	if ((lapiz=='s' || lapicero=='s') && cuaderno == 's'){
		cout<< "Ingresa"<<endl;
	}else{
		cout<<"No puede Ingresar"<<endl;
	}*/
	
	//---------------------------------------------------
	
	int codigo = 0;
	cout<<"Ingresa Codigo de Area: ";
	cin>>codigo;
	
	switch (codigo){
		case 501 : cout<<"Belice"<<endl;
		break;
		case 502 : cout<<"Guatemala"<<endl;
		break;
		case 503 : cout<<"El Salvador"<<endl;
		break;
		case 504 : cout<<"Honduras"<<endl;
		break;
		case 505 : cout<<"Nicaragua"<<endl;
		break;
		case 506 : cout<<"Costa Rica"<<endl;
		break;
		case 507 : cout<<"Panama"<<endl;
		break;
		
		default : cout<<"Este codigo no es de CentroAmerica"<<endl;
	}
	
	
		
	system("pause");
}
