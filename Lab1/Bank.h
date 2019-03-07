#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<sstream>
#include<stdio.h>

#include"Cliente.h"
#include"Cuenta.h"

class CUENTAS;
class CLIENTE;

class BANCOS{
public:
	CLIENTE cliente[30];
	CUENTAS cuenta[30];

	char bname[80],estado[10];
	std::string clave;
	char *lista_clientes;
	int *lista_cuentas;
	int numero_cliente=0, i=0, b=0, cantidad_cuentas=0, numero_cuenta=2000, opcion=0, bandera=0, bandera_clave=0, valor=0;
	int edad, id;
	char nombre[50], apellido[50];

	void set_BName(char *_nombre);
	char *get_Bname();

	void primeros_clientes(); 


	void nuevo_cliente();	

	void editar_cliente();
	

	void consultar_cliente();

	void crear_cuenta();


	void consultar_cuenta();

	void cambiar_estado();

	void depositar();

	void retirar();

	void transferir();

	int validar(int val);


	int pedir_tecla(void);

	int tecla_menu(void);

	void menu();
};


#endif
