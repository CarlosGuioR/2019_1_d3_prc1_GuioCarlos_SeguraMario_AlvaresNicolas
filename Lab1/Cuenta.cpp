
#include "Cuenta.h"



int CUENTAS::get_cuenta(){return cuenta;};
std::string CUENTAS::get_key(){return key;};
int CUENTAS::get_balance(){return balance;};
char *CUENTAS::get_state(){return state;};

void CUENTAS::set_cuenta(int _cuenta){cuenta=_cuenta;};
void CUENTAS::set_key(std::string _key){key=_key;};
void CUENTAS::set_balance(int _balance){balance=_balance;};
void CUENTAS::set_estado(char *_state){strcpy(state,_state);};

int CUENTAS::verificar(std::string _key){
	if(key.compare(_key)==0){return true;}
	else{return false;}
}

void CUENTAS::depositar(int valor){balance +=valor;}
void CUENTAS::retirar(int valor){
	if(valor>balance){std::cout << "No se puede realizar la solicitud, monto insuficiente" << std::endl;}
	else{balance-=valor;}
}

void CUENTAS::crear_cuentas(int _cuenta, std::string _clave, int _balance, char *_state){
	cuenta=_cuenta;
	key=_clave;
	balance=_balance;
	strcpy(state,_state);
}

