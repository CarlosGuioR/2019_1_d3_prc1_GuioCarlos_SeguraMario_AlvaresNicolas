#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<sstream>
#include<stdio.h>

#include"Cuenta.h"

class CUENTAS; 

class CLIENTE{
private:
	char fname[50];
	char lname[50];
	int edad;

public:
	int id,numcuenta=0;
	CUENTAS *cuentas_cliente[10];	

	int get_edad();
	int get_id();
	char *get_fname();
	char *get_lname();

	void set_fname(char *_fname);
	void set_lname(char *_lname);
	void set_edad(int _edad);
	void set_id(int _id);

	void actualizar_datos(char *_fname, char *_lname, int _edad, int _id);
};

#endif