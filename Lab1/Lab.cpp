
#include "Bank.h"
#include "Cuenta.h"
#include "Cliente.h"


int tecla_menu(void);
int pedir_tecla(void);
void menu();
class CLIENTE;
class CUENTAS;
class BANCOS;




// class CLIENTE{
// private:
// 	char fname[50];
// 	char lname[50];
// 	int edad;

// public:
// 	int id,numcuenta=0;
// 	CUENTAS *cuentas_cliente[10];	

// 	int get_edad(){return edad;};
// 	int get_id(){return id;};
// 	char *get_fname(){return fname;};
// 	char *get_lname(){return lname;};

// 	void set_fname(char *_fname){strcpy(fname,_fname);};
// 	void set_lname(char *_lname){strcpy(lname,_lname);};
// 	void set_edad(int _edad){edad=_edad;};
// 	void set_id(int _id){id=_id;};

// 	void actualizar_datos(char *_fname, char *_lname, int _edad, int _id){
// 		strcpy(fname,_fname); 
// 		strcpy(lname,_lname);
// 		edad=_edad;
// 		id=_id;
// 	}
// };




// class CUENTAS{
// private:
// 	int cuenta;
// 	std::string key;
// 	int balance;

// public:
// 	char state[20];
// 	CLIENTE *cliente;

// 	int get_cuenta(){return cuenta;};
// 	std::string get_key(){return key;};
// 	int get_balance(){return balance;};
// 	char *get_state(){return state;};

// 	void set_cuenta(int _cuenta){cuenta=_cuenta;};
// 	void set_key(std::string _key){key=_key;};
// 	void set_balance(int _balance){balance=_balance;};
// 	void set_estado(char *_state){strcpy(state,_state);};

// 	int verificar(std::string _key){
// 		if(key.compare(_key)==0){return true;}
// 		else{return false;}
// 	}

// 	void depositar(int valor){balance +=valor;}
// 	void retirar(int valor){
// 		if(valor>balance){std::cout << "No se puede realizar la solicitud, monto insuficiente" << std::endl;}
// 		else{balance-=valor;}
// 	}

// 	void crear_cuentas(int _cuenta, std::string _clave, int _balance, char *_state){
// 		cuenta=_cuenta;
// 		key=_clave;
// 		balance=_balance;
// 		strcpy(state,_state);
// 	}
// };



// class BANCOS{
// public:
// 	CLIENTE cliente[30];
// 	CUENTAS cuenta[30];

// 	char bname[80],estado[10];
// 	std::string clave;
// 	char *lista_clientes;
// 	int *lista_cuentas;
// 	int numero_cliente=0, i=0, b=0, cantidad_cuentas=0, numero_cuenta=2000, opcion=0, bandera=0, bandera_clave=0, valor=0;
// 	int edad, id;
// 	char nombre[50], apellido[50];

// 	void set_BName(char *_nombre) {strcpy(bname,_nombre);};
// 	char *get_Bname() {return bname;};

// 	void primeros_clientes(){
// 		numero_cliente=0;
// 		char nombre[20]="carlos", apellido[20]="guio", estado[20]="desbloqueada";
// 		int edad=26, id=12345, balance=1000;
// 		std::string clave="1234";
// 		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
// 		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
// 		cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
// 		cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
// 		//cout<<&cliente[numero_cliente]<<endl;
// 		//cout<<sizeof(CLIENTE)<<endl;
// 		cliente[numero_cliente].numcuenta++;
// 		numero_cliente++;
// 		numero_cuenta++;
// 		cantidad_cuentas++;
// 	 	strcpy(nombre,"diego");
// 	 	strcpy(apellido,"rodriguez");
// 		edad=22;
// 		id=12346;
// 		clave="1235";
// 		balance=2000;
// 		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
// 		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
// 		cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
// 		cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
// 		//cout<<&cliente[numero_cliente]<<endl;
// 		cliente[numero_cliente].numcuenta++;
// 		numero_cliente++;
// 		numero_cuenta++;
// 		cantidad_cuentas++;
// 		strcpy(nombre,"felipe");
// 		strcpy(apellido,"rojas");
// 		edad=32;
// 		id=12347;
// 		clave="1236";
// 		balance=3000;
// 		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
// 		cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
// 		cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
// 		//cout<<cuenta[cantidad_cuentas].cliente->get_edad()<<endl;
// 		cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
// 		//cout<<&cliente[numero_cliente]<<endl;
// 		cliente[numero_cliente].numcuenta++;
// 		numero_cliente++;
// 		numero_cuenta++;
// 		cantidad_cuentas++;
// 	} 


// 	void nuevo_cliente(){
// 		bandera=0;
// 		std::cout << "Ingrese el nombre:" << std::endl;
// 		scanf("%s",nombre);
// 		std::cout << "Ingrese los apellidos:" << std::endl;
// 		scanf("%s",apellido);
// 		std::cout << "Ingrese la edad: " << std::endl;
// 		scanf("%d",&edad);
// 		std::cout << "ingrese la identifiacion: " << std::endl;
// 		scanf("%d",&id);
// 		for(i=0;i<numero_cliente;++i){
// 			if(id==cliente[i].get_id()){
// 				std::cout << "¡Operacion Fallida!" << std::endl;
// 				std::cout << "Ya existe un cliente con esta identificacion" << std::endl;				bandera=1;
// 				break;
// 			}
// 		}
// 		if(bandera==0){
// 			cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);;
// 			std::cout << "cliente creado correctamente" << std::endl;
// 			std::cout<<"nombre: "<<cliente[numero_cliente].get_fname()<<" --Apellido: "<<cliente[numero_cliente].get_lname()<<" --Edad: "<< cliente[numero_cliente].get_edad()<<" --Identificacion: "<<cliente[numero_cliente].get_id() << std::endl;
// 			numero_cliente++;
// 			std::cout << "" << std::endl;
// 		}
// 	}	

// 	void editar_cliente(){
// 		bandera=0;
// 		int edad, id;
// 		char nombre[50], apellido[50];
// 		std::cout << "Ingrese la identificacion del cliente:" << std::endl;	
// 		std::cin>>opcion;
// 		for(i=0; i<numero_cliente; ++i){
// 			if(cliente[i].get_id()==opcion){
// 				std::cout<<"nombre: "<<cliente[i].get_fname()<<" Apellido: "<<cliente[i].get_lname()<<" Edad: "<< cliente[i].get_edad()<<" identificacion: "<<cliente[i].get_id() << std::endl;
// 				std::cout << "¿Desea editar el nombre?. 1 para si, 2 para no." << std::endl;
// 				opcion=pedir_tecla();
// 				if(opcion==1){
// 					std::cout << "Ingrese el nombre:" << std::endl;
// 					scanf("%s",nombre);}
// 				else{
// 					strcpy(nombre,cliente[i].get_fname());
// 				}
// 				std::cout << "¿Desea editar el apellido?. 1 para si, 2 para no." << std::endl;
// 				opcion=pedir_tecla();
// 				if(opcion==1){
// 					std::cout << "Ingrese el apellido:" << std::endl;
// 					scanf("%s",apellido);}
// 				else{
// 					strcpy(apellido,cliente[i].get_lname());
// 				}
// 				std::cout << "¿Desea editar la edad?. 1 para si, 2 para no." << std::endl;
// 				opcion=pedir_tecla();
// 				if(opcion==1){
// 					std::cout << "Ingrese la edad:" << std::endl;	
// 					scanf("%d",&edad);}
// 				else{
// 					edad=cliente[i].get_edad();
// 				}
// 				std::cout << "¿Desea editar la identificacion?. 1 para si, 2 para no." << std::endl;
// 				opcion=pedir_tecla();
// 				if(opcion==1){
// 					std::cout << "Ingrese la identificacion:" << std::endl;		
// 					scanf("%d",&id);}
// 				else{
// 					id=cliente[i].get_id();
// 				}
// 				cliente[i].actualizar_datos(nombre,apellido,edad,id);
// 				std::cout << "cliente editado correctamente" << std::endl;
// 				std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << std::endl;
// 				std::cout << "" << std::endl;
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 			std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
// 		}

// 	}

// 	void consultar_cliente(){
// 		bandera=0;
// 		std::cout << "Ingrese la identificacion del cliente " << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<numero_cliente; ++i){
// 			if(cliente[i].get_id()==opcion){
// 				std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << " Cuentas: " << cliente[i].numcuenta << std::endl;	
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 			std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
// 		}
// 	}

// 	void crear_cuenta(){
// 		//std::cout << cantidad_cuentas << std::endl;
// 		bandera=0;
// 		std::cout << "Ingrese la identificacion del dueño de la cuenta: " << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<numero_cliente; ++i){
// 			if(cliente[i].get_id()==opcion){
// 				bandera_clave=0;
// 				cuenta[cantidad_cuentas].set_cuenta(numero_cuenta);
// 				std::cout << "Dueño de la cuenta: " << cliente[i].get_fname() << " Identificacion del dueño: "<< cliente[i].get_id() << std::endl;
// 				std::cout << "El numero de la cuenta sera: " << numero_cuenta << std::endl;
// 				numero_cuenta++;
// 				strcpy(estado,"desbloqueada");
// 				cuenta[cantidad_cuentas].set_estado(estado);
// 				std::cout << "Ingrese una clave de 4 digitos:" << std::endl;	
// 				while(bandera_clave==0){
// 					std::cin>>opcion;
// 					clave=std::to_string(opcion);
// 					if(clave.size()!=4)
// 					{
// 						std::cout << "clave invalida, intentelo de nuevo, debe ser de 4 digitos" << std::endl;
// 					}
// 					else{
// 						cuenta[cantidad_cuentas].set_key(clave);
// 						bandera_clave=1;
// 					}
// 				}
// 				std::cout << "¿Desea consignar dinero?. 1 para si, 2 para no." << std::endl;
// 				opcion=pedir_tecla();
// 				if(opcion==1){
// 					std::cout << "¿Que cantidad desea consignar?" << std::endl;
// 					std::cin>>opcion;
// 					opcion=validar(opcion);
// 					cuenta[cantidad_cuentas].set_balance(opcion);
// 				}
// 				else{
// 					cuenta[cantidad_cuentas].set_balance(0);
// 				}

// 				cuenta[cantidad_cuentas].cliente=&cliente[i];
// 				cliente[i].cuentas_cliente[cliente[i].numcuenta]=&cuenta[cantidad_cuentas];
// 				cliente[i].numcuenta++;


// 				std::cout << "cuenta creada con exito, datos de la cuenta:" << std::endl;	
// 				std::cout << "Numero de cuenta: " <<cuenta[cantidad_cuentas].get_cuenta() << " Balance: " << cuenta[cantidad_cuentas].get_balance() << " Clave: " << cuenta[cantidad_cuentas].get_key() << " Estado: " << cuenta[cantidad_cuentas].get_state()<< std::endl;
// 				//std::cout << "direccion: " << cuenta[cantidad_cuentas].cliente << std::endl;
// 				std::cout << "numero de cuentas asociadas a este cliente: " << cliente[i].numcuenta << std::endl;
// 				bandera=1;
// 				cantidad_cuentas++;
// 			}
// 		}
// 		if(bandera==0){
// 		std::cout << "No hay ningun cliente con esa identificacion, es necesario crear primero el cliente" << std::endl;
// 		}
// 	}


// 	void consultar_cuenta(){
// 		bandera_clave=0;
// 		bandera=0;
// 		std::cout << "Ingrese el numero de la cuenta:" << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<cantidad_cuentas; ++i){
// 			if(cuenta[i].get_cuenta()==opcion){		
// 				while(bandera_clave==0){	
// 					std::cout << "ingrese la clave" << std::endl;
// 					std::cin>>opcion;
// 					clave=std::to_string(opcion);
// 					if(cuenta[i].verificar(clave)==true){
// 						std::cout<<"Cuenta: "<<cuenta[i].get_cuenta()<<" Balance: "<<cuenta[i].get_balance()<<" Estado: "<<cuenta[i].get_state()<< " Propietario: " << cuenta[i].cliente->get_fname()<< " Identificacion: " << cuenta[i].cliente->get_id() <<std::endl;
// 						bandera_clave=1;
// 					}
// 					else{
// 						std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
// 					}
// 				}
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 		std::cout << "No hay ningun cliente con esa identificacion o apellido" << std::endl;
// 		}
// 	}

// 	void cambiar_estado(){
// 		bandera=0;
// 		bandera_clave=0;
// 		std::cout << "Ingrese el numero de cuenta que desea verificar: " << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<cantidad_cuentas; ++i){
// 			if(cuenta[i].get_cuenta()==opcion){
// 				while(bandera_clave==0){
// 					std::cout << "ingrese la clave" << std::endl;
// 					std::cin>>opcion;
// 					clave=std::to_string(opcion);
// 					if(cuenta[i].verificar(clave)==true){
// 						std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
// 						if(strcmp(cuenta[i].get_state(),"desbloqueada")==0){
// 							std::cout << "¿Desea bloquear la cuenta?. 1 para si, 2 para no" << std::endl;
// 							opcion=pedir_tecla();
// 							if(opcion==1){
// 								strcpy(estado,"bloqueada");
// 								cuenta[i].set_estado(estado);
// 							}				
// 							std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
// 						}
// 						else if(strcmp(cuenta[i].get_state(),"bloqueada")==0){
// 							std::cout << "¿Desea desbloquear la cuenta?. 1 para si, 2 para no" << std::endl;
// 							opcion=pedir_tecla();
// 							if(opcion==1){
// 								strcpy(estado,"desbloqueada");
// 								cuenta[i].set_estado(estado);
// 							}
// 							std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
// 						}
// 						bandera_clave=1;
// 					}
// 					else{
// 						std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
// 					}
// 				}
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 			std::cout << "No hay ninguna cuenta con ese numero" << std::endl;	
// 		}
// 	}


// 	void depositar(){
// 		bandera=0;
// 		std::cout << "Ingrese el numero de la cuenta en la que desea depositar: " << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<cantidad_cuentas; ++i){
// 			if(cuenta[i].get_cuenta()==opcion){
// 				std::cout << "Saldo actual: " << cuenta[i].get_balance() << std::endl;
// 				while(true){
// 					std::cout << "¿cuanto desea depositar?" << std::endl;
// 					std::cin>>opcion;
// 					if(opcion>0){
// 						cuenta[i].depositar(opcion);
// 						std::cout << "Nuevo saldo: " << cuenta[i].get_balance() << std::endl;
// 						break;
// 					}
// 					else{
// 						std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
// 					}
// 				}
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 			std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
// 		}
// 	}

// 	void retirar(){
// 		bandera=0;
// 		bandera_clave=0;
// 		std::cout << "Ingrese el numero de la cuenta en la que desea retirar: " << std::endl;
// 		std::cin>>opcion;
// 		for(i=0; i<cantidad_cuentas; ++i){
// 			if(cuenta[i].get_cuenta()==opcion){
// 				while(bandera_clave==0){
// 					std::cout << "ingrese la clave" << std::endl;
// 					std::cin>>opcion;
// 					clave=std::to_string(opcion);
// 					if(cuenta[i].verificar(clave)==true){
// 						std::cout << "Saldo actual: " << cuenta[i].get_balance() << std::endl;
// 						while(true){
// 							std::cout << "ingrese el valor a retirar: " << std::endl;
// 							std::cin>>opcion;
// 							if(opcion>0){
// 								cuenta[i].retirar(opcion);
// 								std::cout << "Nuevo saldo: " << cuenta[i].get_balance() << std::endl;				
// 								break;
// 							}
// 							else{
// 								std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
// 							}
// 						}
// 						bandera_clave=1;
// 					}
// 					else{
// 						std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
// 					}
// 				}
// 				bandera=1;
// 			}
// 		}
// 		if(bandera==0){
// 			std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
// 		}
// 	}

// 	void transferir(){
// 		bandera=0;
// 		bandera_clave=0;
// 		std::cout << "Ingrese el numero de la cuenta desde la cual va a transferir: " << std::endl;
// 		std::cin>>opcion;
// 		for(int i=0; i<cantidad_cuentas; ++i){
// 			if(cuenta[i].get_cuenta()==opcion){
// 				while(bandera_clave==0){
// 					std::cout << "ingrese la clave" << std::endl;
// 					std::cin>>opcion;
// 					clave=std::to_string(opcion);
// 					if(cuenta[i].verificar(clave)==true){
// 						std::cout << "Saldo actual: "<< cuenta[i].get_balance()<< std::endl;
// 						std::cout << "Ingrese el valor a transferir:" << std::endl;
// 						std::cin>>valor;
// 						valor=validar(valor);
// 						if(valor<=cuenta[i].get_balance()){
// 							std::cout << "Ingrese el numero de la cuenta a la que desea transferir: " << std::endl;
// 							std::cin>>opcion;
// 							b=0;
// 							for(int j=0; j<cantidad_cuentas;++j){
// 								if(cuenta[j].get_cuenta()==opcion){
// 									std::cout << "Saldo actual de la cuenta desde la que va a transferir: "<< cuenta[i].get_balance()<< std::endl;
// 									std::cout << "Saldo actual de la cuenta a la que se va a transferir: "<< cuenta[j].get_balance() << std::endl;
// 									cuenta[i].retirar(valor);
// 									cuenta[j].depositar(valor);
// 									b=1;
// 									std::cout << ""<< std::endl;
// 									std::cout << "Saldo final de la cuenta desde donde se hizo la transferencia: "<< cuenta[i].get_balance()<< std::endl;
// 									std::cout << "Saldo final de la cuenta a la que se transfirio: "<< cuenta[j].get_balance() << std::endl;
// 								}
// 							}
// 							if(b==0){
// 								std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
// 							}
// 						}
// 						else{
// 						std::cout << "El valor supera al monto de la cuenta" << std::endl;
// 						}
// 						bandera_clave=1;
// 					}
// 					else{
// 						std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;							
// 					}
// 				}
// 				bandera=1;
// 			}

// 		} 
// 		if(bandera==0){
// 			std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
// 		}
// 	}

// 	int validar(int val){
// 		while(true){
// 			if(val>=0){
// 				return val;
// 			}
// 			else{
// 				std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
// 			}
// 			std::cin>>val;
// 		}
// 	}
// };


int main(int argc, char** argv)
{
	int banco_deseado=0, opcion=0, i=0, bandera=0;
	char Nombre_Banco[80];

	BANCOS banco[2];

	strcpy(Nombre_Banco,"Banco de la Gente");
	banco[0].set_BName(Nombre_Banco);
	strcpy(Nombre_Banco,"Banco del Pueblo");
	banco[1].set_BName(Nombre_Banco);

	std::cout << "Buenos dias, ¿A que banco desea ingresar?" << std::endl;
	std::cout << "Banco de la gente (opcion 1) o Banco del pueblo (opcion 2)" << std::endl;	
	banco_deseado=banco[0].pedir_tecla();
	banco_deseado--;

	std::cout << "Banco elegido: "<< banco[banco_deseado].get_Bname() << std::endl;	
	banco[banco_deseado].primeros_clientes();

	std::cout << "Bienvenido al banco "<<banco[banco_deseado].get_Bname()<< std::endl;
	
	while(true){

		banco[banco_deseado].menu();
		opcion=banco[banco_deseado].tecla_menu();
		if(opcion==1){banco[banco_deseado].nuevo_cliente();}
		else if(opcion ==2){banco[banco_deseado].editar_cliente();}
		else if(opcion ==3){banco[banco_deseado].consultar_cliente();}
		else if(opcion ==4){banco[banco_deseado].crear_cuenta();}
		else if(opcion ==5){banco[banco_deseado].consultar_cuenta();}
		else if(opcion ==6){banco[banco_deseado].cambiar_estado();}
		else if(opcion ==7){banco[banco_deseado].depositar();}
		else if(opcion ==8){banco[banco_deseado].retirar();}
		else if(opcion ==9){banco[banco_deseado].transferir();		}
		else if(opcion==10){break;}	


		std::cout << "¿Desea realizar otro procedimiento?. 1 para si, 2 para no" << std::endl;
		opcion=banco[banco_deseado].pedir_tecla();
		if(opcion == 2)
		{
			break;
		}

	}
	std::cout << "" << std::endl;
	std::cout << "Que tenga buen dia :)" << std::endl;
}



