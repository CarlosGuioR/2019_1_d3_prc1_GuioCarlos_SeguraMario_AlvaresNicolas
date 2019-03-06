#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include <sstream>
#include<stdio.h>

using namespace std;

int tecla_menu(void);
int pedir_tecla(void);
class clientes;
class cuentas;




class clientes{
private:
	char fname[50];
	char lname[50];
	int edad;

public:
	int id,numcuenta=0;
	cuentas *cuentas_cliente[10];	

	int get_edad(){return edad;};
	int get_id(){return id;};
	char *get_fname(){return fname;};
	char *get_lname(){return lname;};

	void set_fname(char *_fname){strcpy(fname,_fname);};
	void set_lname(char *_lname){strcpy(lname,_lname);};
	void set_edad(int _edad){edad=_edad;};
	void set_id(int _id){id=_id;};

	void actualizar_datos(char *_fname, char *_lname, int _edad, int _id){
		strcpy(fname,_fname); 
		strcpy(lname,_lname);
		edad=_edad;
		id=_id;
	}
};




class cuentas{
private:
	int cuenta;
	string key;
	int balance;

public:
	char state[20];
	clientes *cliente;

	int get_cuenta(){return cuenta;};
	string get_key(){return key;};
	int get_balance(){return balance;};
	char *get_state(){return state;};

	void set_cuenta(int _cuenta){cuenta=_cuenta;};
	void set_key(string _key){key=_key;};
	void set_balance(int _balance){balance=_balance;};
	void set_estado(char *_state){strcpy(state,_state);};

	int verificar(string _key){
		if(key.compare(_key)==0){return true;}
		else{return false;}
	}

	void depositar(int valor){balance +=valor;}
	void retirar(int valor){
		if(valor>balance){balance-=valor;}
		else{std::cout << "No se puede realizar la solicitud, monto insuficiente" << std::endl;}
	}

	void crear_cuentas(int _cuenta, string _clave, int _balance, char *_state){
		cuenta=_cuenta;
		key=_clave;
		balance=_balance;
		strcpy(state,_state);
	}
};





class bancos{
public:
	clientes cliente[30];
	cuentas cuenta[30];

	char bname[80],estado[10];
	string clave;
	char *lista_clientes;
	int *lista_cuentas;
	int numero_cliente=0, cantidad_cuentas=0, numero_cuenta=2000, opcion=0, bandera=0;


	void set_BName(char *_nombre) {strcpy(bname,_nombre);};
	char *get_Bname() {return bname;};

	void primeros_clientes(){
		numero_cliente=0;
		char nombre[20]="carlos", apellido[20]="guio", estado[20]="desbloqueda";
		int edad=26, id=12345, balance=1000;
		string clave="1234";
		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
		numero_cliente++;
		numero_cuenta++;
		cantidad_cuentas++;
	 	strcpy(nombre,"diego");
	 	strcpy(apellido,"rodriguez");
		edad=22;
		id=12346;
		clave="1235";
		balance=2000;
		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
		numero_cliente++;
		numero_cuenta++;
		cantidad_cuentas++;
		strcpy(nombre,"felipe");
		strcpy(apellido,"rojas");
		edad=32;
		id=12347;
		clave="1236";
		balance=3000;
		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
		numero_cliente++;
		numero_cuenta++;
		cantidad_cuentas++;
	} 


	void nuevo_cliente(){
		int edad, id;
		char nombre[50], apellido[50];

		std::cout << "Ingrese el nombre:" << std::endl;
		scanf("%s",nombre);
		std::cout << "Ingrese los apellidos:" << std::endl;
		scanf("%s",apellido);
		std::cout << "Ingrese la edad: " << std::endl;
		scanf("%d",&edad);
		std::cout << "ingrese la identifiacion: " << std::endl;
		scanf("%d",&id);

		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
		numero_cliente++;
		std::cout << "cliente creado correctamente" << std::endl;
		std::cout << "" << std::endl;
		}

		void editar_cliente(int i){

		std::cout<<"nombre: "<<cliente[i].get_fname()<<" Apellido: "<<cliente[i].get_lname()<<" Edad: "<< cliente[i].get_edad()<<" identificacion: "<<cliente[i].get_id() << std::endl;

		int edad, id;
		char nombre[50], apellido[50];
		std::cout << "¿Desea editar el nombre?. 1 para si, 2 para no." << std::endl;
		opcion=pedir_tecla();
		if(opcion==1){
			std::cout << "Ingrese el nombre:" << std::endl;
			scanf("%s",nombre);}
		std::cout << "¿Desea editar el apellido?. 1 para si, 2 para no." << std::endl;
		opcion=pedir_tecla();
		if(opcion==1){
			std::cout << "Ingrese el apellido:" << std::endl;
			scanf("%s",apellido);}
		std::cout << "¿Desea editar la edad?. 1 para si, 2 para no." << std::endl;
		opcion=pedir_tecla();
		if(opcion==1){
			std::cout << "Ingrese la edad:" << std::endl;	
			scanf("%d",&edad);}
		std::cout << "¿Desea editar la identificacion?. 1 para si, 2 para no." << std::endl;
		opcion=pedir_tecla();
		if(opcion==1){
			std::cout << "Ingrese la identificacion:" << std::endl;		
			scanf("%d",&id);}

		cliente[i].actualizar_datos(nombre,apellido,edad,id);
		std::cout << "cliente editado correctamente" << std::endl;
		std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << std::endl;
		std::cout << "" << std::endl;
	}

	void consultar_cliente(int i){
		std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << std::endl;	
	}

	void crear_cuenta(int i){
		bandera=0;
		cuenta[cantidad_cuentas].set_cuenta(numero_cuenta);
		std::cout << "Dueño de la cuenta: " << cliente[i].get_fname() << " Identificacion del dueño: "<< cliente[i].get_id() << std::endl;
		std::cout << "El numero de la cuenta sera: " << numero_cuenta << std::endl;
		numero_cuenta++;
		strcpy(estado,"desbloqueada");
		cuenta[cantidad_cuentas].set_estado(estado);
		std::cout << "Ingrese una clave de 4 digitos:" << std::endl;	
		while(bandera==0){
			cin>>opcion;
			clave=to_string(opcion);
			if(clave.size()!=4)
			{
				std::cout << "clave invalida, intentelo de nuevo, debe ser de 4 digitos" << std::endl;
			}
			else{
				cuenta[cantidad_cuentas].set_key(clave);
				bandera=1;
			}
		}
		std::cout << "¿Desea consignar dinero?. 1 para si, 2 para no." << std::endl;
		opcion=pedir_tecla();
		if(opcion==1){
			std::cout << "¿Que cantidad desea consignar?" << std::endl;
			cin>>opcion;
			cuenta[cantidad_cuentas].set_balance(opcion);
		}
		else{
			cuenta[cantidad_cuentas].set_balance(0);
		}

		cuenta[cantidad_cuentas].cliente=&cliente[i];
		cliente[i].cuentas_cliente[cliente[i].numcuenta]=&cuenta[cantidad_cuentas];
		cliente[i].numcuenta++;


		std::cout << "cuenta creada con exito, datos de la cuenta:" << std::endl;	
		std::cout << "Numero de cuenta: " <<cuenta[cantidad_cuentas].get_cuenta() << " Balance: " << cuenta[cantidad_cuentas].get_balance() << " Clave: " << cuenta[cantidad_cuentas].get_key() << " Estado: " << cuenta[cantidad_cuentas].get_state()<< std::endl;
		std::cout << "direccion: " << cuenta[cantidad_cuentas].cliente << std::endl;
		std::cout << "numero de cuentas asociadas a este cliente: " << cliente[i].numcuenta+1 << std::endl;
	}

	void consultar_cuenta(int i){
		bandera=0;
		while(bandera==0){	
			int conta=0;
			std::cout << "ingrese la clave" << std::endl;
			cin>>opcion;
			clave=to_string(opcion);
			if(cuenta[i].verificar(clave)==true){
				std::cout<<"Balance: "<<cuenta[i].get_balance()<<" Estado: "<<cuenta[i].get_state()<<std::endl;
				bandera=1;
			}
			else{
				std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
			}

		}
	}
};







int main(int argc, char** argv)
{
	int banco_deseado=0, opcion=0, i=0, bandera=0;
	char Nombre_Banco[80], apellido[20];

	bancos banco[2];

	strcpy(Nombre_Banco,"Banco de la Gente");
	banco[0].set_BName(Nombre_Banco);
	strcpy(Nombre_Banco,"Banco del Pueblo");
	banco[1].set_BName(Nombre_Banco);

	std::cout << "Buenos dias, ¿A que banco desea ingresar?" << std::endl;
	std::cout << "Banco de la gente (opcion 1) o Banco del pueblo (opcion 2)" << std::endl;	
	banco_deseado=pedir_tecla();;
	banco_deseado--;

	std::cout << "Banco elegido: "<< banco[banco_deseado].get_Bname() << std::endl;	
	banco[banco_deseado].primeros_clientes();

	std::cout << "Bienbenido al banco "<<banco[banco_deseado].get_Bname()<< std::endl;
	
	while(true){

		std::cout << "" << std::endl;
		std::cout << "¿Que accion desea realizar?" << std::endl;
		std::cout << "--Opcion 1: crear un cliente" << std::endl;
		std::cout << "--Opcion 2: modificar un cliente" << std::endl;
		std::cout << "--Opcion 3: consultar un cliente" << std::endl;
		std::cout << "--Opcion 4: crear una cuenta" << std::endl;
		std::cout << "--Opcion 5: consultar una cuenta" << std::endl;
		std::cout << "--Opcion 6: bloquear o desbloquear una cuenta" << std::endl;
		std::cout << "--Opcion 7: depositar" << std::endl;
		std::cout << "--Opcion 8: retirar" << std::endl;
		std::cout << "--Opcion 9: transferir entre cuentas" << std::endl;
		std::cout << "--Opcion 10: Salir" << std::endl;
		std::cout << "" << std::endl;


		opcion=tecla_menu();

		if(opcion==1){banco[banco_deseado].nuevo_cliente();}
		else if(opcion ==2){
			bandera=0;
			std::cout << "Ingrese la identificacion del cliente:" << std::endl;	
			cin>>opcion;
			for(i=0; i<banco[banco_deseado].numero_cliente; ++i){
				if(banco[banco_deseado].cliente[i].get_id()==opcion){
					banco[banco_deseado].editar_cliente(i);
					bandera=1;
				}
			}
			if(bandera==0){
			std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
			}
		}
		else if(opcion ==3){
			bandera=0;
			std::cout << "Ingrese el  apellido del cliente:" << std::endl;
			scanf("%s",apellido);
			std::cout << "Ingrese la identificacion del cliente:" << std::endl;
			cin>>opcion;
			for(i=0; i<banco[banco_deseado].numero_cliente; ++i){
				if(banco[banco_deseado].cliente[i].get_id()==opcion && strcmp(banco[banco_deseado].cliente[i].get_lname(),apellido)==0){
					banco[banco_deseado].consultar_cliente(i);
					bandera=1;
				}
			}
			if(bandera==0){
			std::cout << "No hay ningun cliente con esa identificacion o apellido" << std::endl;
		}
		else if(opcion ==4){
			bandera=0;
			std::cout << "Ingrese la identificacion del dueño de la cuenta: " << std::endl;
			cin>>opcion;
			for(i=0; i<banco[banco_deseado].numero_cliente; ++i){
				if(banco[banco_deseado].cliente[i].get_id()==opcion){
					banco[banco_deseado].crear_cuenta(i);
					bandera=1;
				}
			}
			if(bandera==0){
			std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
			}

		}
		else if(opcion ==5){
			std::cout << "Ingrese el numero de la cuenta a consultar: " << std::endl;
			cin>>opcion;
			std::cout << banco[banco_deseado].cantidad_cuentas << std::endl;
			for(i=0; i<banco[banco_deseado].cantidad_cuentas; ++i){
				std::cout << "banco[banco_deseado].cuenta[i].get_cuenta()" << std::endl;
				if(banco[banco_deseado].cuenta[i].get_cuenta()==opcion){
					banco[banco_deseado].consultar_cuenta(i);
					bandera=1;
				}
			}
			if(bandera==0){
			std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
			}
		}
		else if(opcion ==6){}
		else if(opcion ==7){}
		else if(opcion ==8){}
		else if(opcion ==9){}
		else{}	


		std::cout << "¿Desea realizar otro procedimiento?. 1 para si, 2 para no" << std::endl;
		opcion=pedir_tecla();
		if(opcion == 2)
		{
			break;
		}

	}
	std::cout << "" << std::endl;
	std::cout << "Que tenga buen dia :)" << std::endl;
}


int pedir_tecla(void){
	int opcion=0;
	while(true){
		cin>>opcion;
		if(opcion==1 | opcion==2){
			return opcion;
			//break;
		}
		else{
			std::cout << "Opcion invalida, intentelo de nuevo" << std::endl;
		}
	}

}

int tecla_menu(void){
	int opcion=0;
	while(true){
		cin>>opcion;
		if(opcion==1 | opcion==2 | opcion==3 | opcion==4 | opcion==5 | opcion==6 | opcion==7 | opcion==8 | opcion==9){
			return opcion;
			//break;
		}
		else{
			std::cout << "Opcion invalida, intentelo de nuevo" << std::endl;
		}
	}

}