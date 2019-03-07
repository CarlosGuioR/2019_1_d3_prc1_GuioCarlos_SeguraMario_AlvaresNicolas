#ifndef CUENTA_H
#define CUENTA_H

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<sstream>
#include<stdio.h>

#include"Cliente.h"

class CLIENTE;

class CUENTAS{
private:
	int cuenta;
	std::string key;
	int balance;

public:
	char state[20];
	CLIENTE *cliente;

	int get_cuenta();
	std::string get_key();
	int get_balance();
	char *get_state();

	void set_cuenta(int _cuenta);
	void set_key(std::string _key);
	void set_balance(int _balance);
	void set_estado(char *_state);

	int verificar(std::string _key);

	void depositar(int valor);
	void retirar(int valor);

	void crear_cuentas(int _cuenta, std::string _clave, int _balance, char *_state);
};

#endif