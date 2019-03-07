#include"Bank.h"





void BANCOS::set_BName(char *_nombre) {strcpy(bname,_nombre);};
char *BANCOS::get_Bname() {return bname;};

void BANCOS::primeros_clientes(){
	numero_cliente=0;
	char nombre[20]="carlos", apellido[20]="guio", estado[20]="desbloqueada";
	int edad=26, id=12345, balance=1000;
	std::string clave="1234";
	cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);
	cuenta[cantidad_cuentas].crear_cuentas(numero_cuenta,clave,balance,estado);
	cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
	cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
	cliente[numero_cliente].numcuenta++;
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
	cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
	cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
	cliente[numero_cliente].numcuenta++;
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
	cuenta[cantidad_cuentas].cliente=&cliente[numero_cliente];
	cliente[numero_cliente].cuentas_cliente[cliente[numero_cliente].numcuenta]=&cuenta[cantidad_cuentas];
	cliente[numero_cliente].numcuenta++;
	numero_cliente++;
	numero_cuenta++;
	cantidad_cuentas++;
} 


void BANCOS::nuevo_cliente(){
	bandera=0;
	std::cout << "Ingrese el nombre:" << std::endl;
	scanf("%s",nombre);
	std::cout << "Ingrese los apellidos:" << std::endl;
	scanf("%s",apellido);
	std::cout << "Ingrese la edad: " << std::endl;
	scanf("%d",&edad);
	std::cout << "ingrese la identifiacion: " << std::endl;
	scanf("%d",&id);
	for(i=0;i<numero_cliente;++i){
		if(id==cliente[i].get_id()){
			std::cout << "¡Operacion Fallida!" << std::endl;
			std::cout << "Ya existe un cliente con esta identificacion" << std::endl;				bandera=1;
			break;
		}
	}
	if(bandera==0){
		cliente[numero_cliente].actualizar_datos(nombre,apellido,edad,id);;
		std::cout << "cliente creado correctamente" << std::endl;
		std::cout<<"nombre: "<<cliente[numero_cliente].get_fname()<<" --Apellido: "<<cliente[numero_cliente].get_lname()<<" --Edad: "<< cliente[numero_cliente].get_edad()<<" --Identificacion: "<<cliente[numero_cliente].get_id() << std::endl;
		numero_cliente++;
		std::cout << "" << std::endl;
	}
}	

void BANCOS::editar_cliente(){
	bandera=0;
	int edad, id;
	char nombre[50], apellido[50];
	std::cout << "Ingrese la identificacion del cliente:" << std::endl;	
	std::cin>>opcion;
	for(i=0; i<numero_cliente; ++i){
		if(cliente[i].get_id()==opcion){
			std::cout<<"nombre: "<<cliente[i].get_fname()<<" Apellido: "<<cliente[i].get_lname()<<" Edad: "<< cliente[i].get_edad()<<" identificacion: "<<cliente[i].get_id() << std::endl;
			std::cout << "¿Desea editar el nombre?. 1 para si, 2 para no." << std::endl;
			opcion=pedir_tecla();
			if(opcion==1){
				std::cout << "Ingrese el nombre:" << std::endl;
				scanf("%s",nombre);}
			else{
				strcpy(nombre,cliente[i].get_fname());
			}
			std::cout << "¿Desea editar el apellido?. 1 para si, 2 para no." << std::endl;
			opcion=pedir_tecla();
			if(opcion==1){
				std::cout << "Ingrese el apellido:" << std::endl;
				scanf("%s",apellido);}
			else{
				strcpy(apellido,cliente[i].get_lname());
			}
			std::cout << "¿Desea editar la edad?. 1 para si, 2 para no." << std::endl;
			opcion=pedir_tecla();
			if(opcion==1){
				std::cout << "Ingrese la edad:" << std::endl;	
				scanf("%d",&edad);}
			else{
				edad=cliente[i].get_edad();
			}
			std::cout << "¿Desea editar la identificacion?. 1 para si, 2 para no." << std::endl;
			opcion=pedir_tecla();
			if(opcion==1){
				std::cout << "Ingrese la identificacion:" << std::endl;		
				scanf("%d",&id);}
			else{
				id=cliente[i].get_id();
			}
			cliente[i].actualizar_datos(nombre,apellido,edad,id);
			std::cout << "cliente editado correctamente" << std::endl;
			std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << std::endl;
			std::cout << "" << std::endl;
			bandera=1;
		}
	}
	if(bandera==0){
		std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
	}

}

void BANCOS::consultar_cliente(){
	bandera=0;
	std::cout << "Ingrese la identificacion del cliente " << std::endl;
	std::cin>>opcion;
	for(i=0; i<numero_cliente; ++i){
		if(cliente[i].get_id()==opcion){
			std::cout<<"nombre: "<<cliente[i].get_fname()<<" --Apellido: "<<cliente[i].get_lname()<<" --Edad: "<< cliente[i].get_edad()<<" --Identificacion: "<<cliente[i].get_id() << " Cuentas: " << cliente[i].numcuenta << std::endl;	
			bandera=1;
		}
	}
	if(bandera==0){
		std::cout << "No hay ningun cliente con esa identificacion" << std::endl;
	}
}

void BANCOS::crear_cuenta(){
	//std::cout << cantidad_cuentas << std::endl;
	bandera=0;
	std::cout << "Ingrese la identificacion del dueño de la cuenta: " << std::endl;
	std::cin>>opcion;
	for(i=0; i<numero_cliente; ++i){
		if(cliente[i].get_id()==opcion){
			bandera_clave=0;
			cuenta[cantidad_cuentas].set_cuenta(numero_cuenta);
			std::cout << "Dueño de la cuenta: " << cliente[i].get_fname() << " Identificacion del dueño: "<< cliente[i].get_id() << std::endl;
			std::cout << "El numero de la cuenta sera: " << numero_cuenta << std::endl;
			numero_cuenta++;
			strcpy(estado,"desbloqueada");
			cuenta[cantidad_cuentas].set_estado(estado);
			std::cout << "Ingrese una clave de 4 digitos:" << std::endl;	
			while(bandera_clave==0){
				std::cin>>opcion;
				clave=std::to_string(opcion);
				if(clave.size()!=4)
				{
					std::cout << "clave invalida, intentelo de nuevo, debe ser de 4 digitos" << std::endl;
				}
				else{
					cuenta[cantidad_cuentas].set_key(clave);
					bandera_clave=1;
				}
			}
			std::cout << "¿Desea consignar dinero?. 1 para si, 2 para no." << std::endl;
			opcion=pedir_tecla();
			if(opcion==1){
				std::cout << "¿Que cantidad desea consignar?" << std::endl;
				std::cin>>opcion;
				opcion=validar(opcion);
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
			//std::cout << "direccion: " << cuenta[cantidad_cuentas].cliente << std::endl;
			std::cout << "numero de cuentas asociadas a este cliente: " << cliente[i].numcuenta << std::endl;
			bandera=1;
			cantidad_cuentas++;
		}
	}
	if(bandera==0){
	std::cout << "No hay ningun cliente con esa identificacion, es necesario crear primero el cliente" << std::endl;
	}
}


void BANCOS::consultar_cuenta(){
	bandera_clave=0;
	bandera=0;
	std::cout << "Ingrese el numero de la cuenta:" << std::endl;
	std::cin>>opcion;
	for(i=0; i<cantidad_cuentas; ++i){
		if(cuenta[i].get_cuenta()==opcion){		
			while(bandera_clave==0){	
				std::cout << "ingrese la clave" << std::endl;
				std::cin>>opcion;
				clave=std::to_string(opcion);
				if(cuenta[i].verificar(clave)==true){
					std::cout<<"Cuenta: "<<cuenta[i].get_cuenta()<<" Balance: "<<cuenta[i].get_balance()<<" Estado: "<<cuenta[i].get_state()<< " Propietario: " << cuenta[i].cliente->get_fname()<< " Identificacion: " << cuenta[i].cliente->get_id() <<std::endl;
					bandera_clave=1;
				}
				else{
					std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
				}
			}
			bandera=1;
		}
	}
	if(bandera==0){
	std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
	}
}

void BANCOS::cambiar_estado(){
	bandera=0;
	bandera_clave=0;
	std::cout << "Ingrese el numero de cuenta que desea verificar: " << std::endl;
	std::cin>>opcion;
	for(i=0; i<cantidad_cuentas; ++i){
		if(cuenta[i].get_cuenta()==opcion){
			while(bandera_clave==0){
				std::cout << "ingrese la clave" << std::endl;
				std::cin>>opcion;
				clave=std::to_string(opcion);
				if(cuenta[i].verificar(clave)==true){
					std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
					if(strcmp(cuenta[i].get_state(),"desbloqueada")==0){
						std::cout << "¿Desea bloquear la cuenta?. 1 para si, 2 para no" << std::endl;
						opcion=pedir_tecla();
						if(opcion==1){
							strcpy(estado,"bloqueada");
							cuenta[i].set_estado(estado);
						}				
						std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
					}
					else if(strcmp(cuenta[i].get_state(),"bloqueada")==0){
						std::cout << "¿Desea desbloquear la cuenta?. 1 para si, 2 para no" << std::endl;
						opcion=pedir_tecla();
						if(opcion==1){
							strcpy(estado,"desbloqueada");
							cuenta[i].set_estado(estado);
						}
						std::cout << "Estado de la cuenta: " << cuenta[i].get_state() << std::endl;
					}
					bandera_clave=1;
				}
				else{
					std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
				}
			}
			bandera=1;
		}
	}
	if(bandera==0){
		std::cout << "No hay ninguna cuenta con ese numero" << std::endl;	
	}
}


void BANCOS::depositar(){
	bandera=0;
	std::cout << "Ingrese el numero de la cuenta en la que desea depositar: " << std::endl;
	std::cin>>opcion;
	for(i=0; i<cantidad_cuentas; ++i){
		if(cuenta[i].get_cuenta()==opcion){
			std::cout << "Saldo actual: " << cuenta[i].get_balance() << std::endl;
			while(true){
				std::cout << "¿cuanto desea depositar?" << std::endl;
				std::cin>>opcion;
				if(opcion>0){
					cuenta[i].depositar(opcion);
					std::cout << "Nuevo saldo: " << cuenta[i].get_balance() << std::endl;
					break;
				}
				else{
					std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
				}
			}
			bandera=1;
		}
	}
	if(bandera==0){
		std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
	}
}

void BANCOS::retirar(){
	bandera=0;
	bandera_clave=0;
	std::cout << "Ingrese el numero de la cuenta en la que desea retirar: " << std::endl;
	std::cin>>opcion;
	for(i=0; i<cantidad_cuentas; ++i){
		if(cuenta[i].get_cuenta()==opcion){
			while(bandera_clave==0){
				std::cout << "ingrese la clave" << std::endl;
				std::cin>>opcion;
				clave=std::to_string(opcion);
				if(cuenta[i].verificar(clave)==true){
					std::cout << "Saldo actual: " << cuenta[i].get_balance() << std::endl;
					while(true){
						std::cout << "ingrese el valor a retirar: " << std::endl;
						std::cin>>opcion;
						if(opcion>0){
							cuenta[i].retirar(opcion);
							std::cout << "Nuevo saldo: " << cuenta[i].get_balance() << std::endl;				
							break;
						}
						else{
							std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
						}
					}
					bandera_clave=1;
				}
				else{
					std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;
				}
			}
			bandera=1;
		}
	}
	if(bandera==0){
		std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
	}
}

void BANCOS::transferir(){
	bandera=0;
	bandera_clave=0;
	std::cout << "Ingrese el numero de la cuenta desde la cual va a transferir: " << std::endl;
	std::cin>>opcion;
	for(int i=0; i<cantidad_cuentas; ++i){
		if(cuenta[i].get_cuenta()==opcion){
			while(bandera_clave==0){
				std::cout << "ingrese la clave" << std::endl;
				std::cin>>opcion;
				clave=std::to_string(opcion);
				if(cuenta[i].verificar(clave)==true){
					std::cout << "Saldo actual: "<< cuenta[i].get_balance()<< std::endl;
					std::cout << "Ingrese el valor a transferir:" << std::endl;
					std::cin>>valor;
					valor=validar(valor);
					if(valor<=cuenta[i].get_balance()){
						std::cout << "Ingrese el numero de la cuenta a la que desea transferir: " << std::endl;
						std::cin>>opcion;
						b=0;
						for(int j=0; j<cantidad_cuentas;++j){
							if(cuenta[j].get_cuenta()==opcion){
								std::cout << "Saldo actual de la cuenta desde la que va a transferir: "<< cuenta[i].get_balance()<< std::endl;
								std::cout << "Saldo actual de la cuenta a la que se va a transferir: "<< cuenta[j].get_balance() << std::endl;
								cuenta[i].retirar(valor);
								cuenta[j].depositar(valor);
								b=1;
								std::cout << ""<< std::endl;
								std::cout << "Saldo final de la cuenta desde donde se hizo la transferencia: "<< cuenta[i].get_balance()<< std::endl;
								std::cout << "Saldo final de la cuenta a la que se transfirio: "<< cuenta[j].get_balance() << std::endl;
							}
						}
						if(b==0){
							std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
						}
					}
					else{
					std::cout << "El valor supera al monto de la cuenta" << std::endl;
					}
					bandera_clave=1;
				}
				else{
					std::cout << "Clave incorrecta, intentelo de nuevo" << std::endl;							
				}
			}
			bandera=1;
		}

	} 
	if(bandera==0){
		std::cout << "No hay ninguna cuenta con ese numero" << std::endl;
	}
}

int BANCOS::validar(int val){
	while(true){
		if(val>=0){
			return val;
		}
		else{
			std::cout << "Valor incorrecto, debe ser un numero positivo, intentelo de nuevo: " << std::endl;
		}
		std::cin>>val;
	}
}

int BANCOS::pedir_tecla(void){
	int opcion=0;
	while(true){

		std::cin>>opcion;
		if(opcion==1 | opcion==2){
			return opcion;
			//break;
		}
		else{
			std::cout << "Opcion invalida, intentelo de nuevo" << std::endl;
		}
	}

}

int BANCOS::tecla_menu(void){
	int opcion=0;
	while(true){
		std::cout << "Ingrese el numero de la opcion deseada:" << std::endl;
		std::cin>>opcion;
		if(opcion==1 | opcion==2 | opcion==3 | opcion==4 | opcion==5 | opcion==6 | opcion==7 | opcion==8 | opcion==9 | opcion==10){
			return opcion;
			//break;
		}
		else{
			std::cout << "Opcion invalida, intentelo de nuevo" << std::endl;
		}
	}
}

void BANCOS::menu(){
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
}