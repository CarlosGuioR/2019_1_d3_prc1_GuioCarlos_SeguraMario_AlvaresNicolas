#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<string>
#include <sstream>
#include<stdio.h>
using namespace std;


class BankAccount{
private:
	char **State;
	int *Key;
	int *Balance;
	int *Account;

public:
	int i;

	void cuentas_existentes(int clientes){

		Account=new int[clientes];
		State=new char*[clientes];
		Key=new int[clientes];
		Balance=new int[clientes];

		for (i = 0; i < clientes; ++i)
		 {
		 	State[i]= new char[15];
		 } 

		Account[0]=12345;
		Account[1]=12346;
		Account[2]=12347;
		Account[3]=12348;
		Account[4]=12349;

		strcpy(State[0],"locked");
		strcpy(State[1],"not locked");
		strcpy(State[2],"locked");
		strcpy(State[3],"not locked");
		strcpy(State[4],"locked");

		Key[0]=1234;
		Key[1]=1235;
		Key[2]=1236;
		Key[3]=1237;
		Key[4]=1238;

		Balance[0]=10000;
		Balance[0]=5000;
		Balance[0]=100000;
		Balance[0]=120000;
		Balance[0]=300000;
	}

	int get_account(int d) {return Account[d];};
	int get_key(int d) {return Key[d];};
	int get_balance(int d) {return Balance[d];};
//	int *get_account_adrees(int d) {return &Account[d];};

	void set_BName(char *_nombre) {strcpy(State[0],_nombre);};

	void change_state_lock(char *_state,int i){strcpy(State[i],_state);}

	void change_state_notlock(char *_state,int i){strcpy(State[i],_state);}	

	void desposit(int valor,int i){Balance[i]+=valor;};

	void whitdraw(int valor,int i){Balance[i]-=valor;};

};


class BankClient{
	char **LName;
	char **FName;
	int *age;
public:
//	int *puntero=&cuentas.Account[0];
	BankAccount **punteros;
	long *identification;
	int i;
//	*puntero=00000;

	void primeros_clientes(int clientes){



		LName=new char*[clientes];
		FName=new char*[clientes];
		age=new int[clientes];
		identification=new long[clientes];
		punteros=new BankAccount*[clientes];

		for (i = 0; i < clientes; ++i)
		 {
		 	LName[i]= new char[50];
		 	FName[i]= new char[50];
		 	punteros[i] = new BankAccount;
		 } 



		strcpy(FName[0],"Carlos");
		strcpy(FName[1],"Fernando");
		strcpy(FName[2],"Claudia");
		strcpy(FName[3],"Diego");
		strcpy(FName[4],"Felipe");

		strcpy(LName[0],"Infante");
		strcpy(LName[1],"Guio");
		strcpy(LName[2],"Padilla");
		strcpy(LName[3],"Rodriguez");
		strcpy(LName[4],"Rojas");

		strcpy(LName[6],"Rojas");

		age[0]=20;
		age[1]=21;
		age[2]=22;
		age[3]=23;
		age[4]=24;

		identification[0]=1014231528;
		identification[1]=2014231528;
		identification[2]=3014231528;
		identification[3]=4014231528;
		identification[4]=5014231528;
	}

//	string get_BName() {return BName;};
//	void set_BName(char *_nombre) {strcpy(BName,_nombre);};

	
	int get_age(int d) {return age[d];};
	char *get_fname(int d) {return FName[d];};
	char *get_lname(int d) {return LName[d];};
	int get_id(int d) {return identification[d];};

	void change_fname(char *_nombre, int i) {strcpy(FName[i],_nombre);};
	void change_lname(char *_nombre, int i) {strcpy(LName[i],_nombre);};
	void change_age(int nage, int i) {

		age[i]=nage;
	};
	void change_id(int nid, int i) {identification[i]=nid;};
};






class Bank{
	char BName[80];
//	char *clients;
//	char *accounts;

public:
//	Bank(): BName{"bancagalera"}{};
	BankClient cliente;
	BankAccount cuentas;


	string get_BName() {return BName;};
	void set_BName(char *_nombre) {strcpy(BName,_nombre);};

	void create_client(int i){
		string a;
		char lname[60];
		char fname[60];
		int age,age1;
		int id;


		std::cout << "ingrese los nombres porfavor:" << std::endl;
		scanf("%s",fname);
		cliente.change_fname(fname,i);
		std::cout << "ingrese los apellidos porfavor:" << std::endl;
		scanf("%s",lname);
		cliente.change_lname(lname,i);
		std::cout << "ingrese la edad porfavor:"  << std::endl;
		cin>>age;
		cliente.change_age(age,i);
		std::cout << "ingrese la identificacion porfavor:"  << std::endl;
		cin>>id;
		cliente.change_id(id,i);

		for (int i = 0; i < 6; ++i)
		{	
			std::cout << "nombre:"  << cliente.get_fname(i) << std::endl;
			std::cout << "apellido:" << cliente.get_lname(i) << std::endl;
			std::cout << "edad:"  << cliente.get_age(i) << std::endl;
			std::cout << "id:" << cliente.get_id(i) << std::endl;
			
		}
	}

	void modificar_cliente(int id){
		char mod[80];
		int desicion;
		int pos;

		for(int i=0;i<10;i++){
			if(id==cliente.identification[i])
			{	pos=i;
				break;
			}
		}
		std::cout << "¿Desea editar los nombres?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if(desicion==1){
			std::cout << "ingrese el nuevo nombre porfavor" << std::endl;
			cin>>mod;
			cliente.change_fname(mod,pos);
		}
		std::cout << "¿Desea editar los apellidos?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if(desicion==1){
			std::cout << "ingrese el nuevo apellido porfavor" << std::endl;
			cin>>mod;
			cliente.change_lname(mod,pos);
		}
		std::cout << "¿Deseas editar la edad?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if(desicion==1){
			std::cout << "ingrese la edad porfavor" << std::endl;
			cin>>desicion;
			cliente.change_age(desicion,pos);
		}
		std::cout << "¿Deseas editar la identificacion?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if(desicion==1){
			std::cout << "ingrese la nueva identificacion porfavor" << std::endl;
			cin>>desicion;
			cliente.change_id(desicion,pos);
		}

	}
};






int main(int argc, char** argv){

	int numero_clientes=10;
	int banco_deseado=0, desicion=0;
	char Nombre_Banco[80];

	Bank banco[2];

	int y=5;

	banco[0].cliente.primeros_clientes(numero_clientes);
	banco[0].cuentas.cuentas_existentes(numero_clientes);
	banco[1].cliente.primeros_clientes(numero_clientes);
	banco[1].cuentas.cuentas_existentes(numero_clientes);


	strcpy(Nombre_Banco,"Banco de la gente");
	banco[0].set_BName(Nombre_Banco);

	strcpy(Nombre_Banco,"Banco del pueblo");
	banco[1].set_BName(Nombre_Banco);

	std::cout << "Buenos dias, ¿A que banco desea ingresar?" << std::endl;
	std::cout << "Banco de la gente (opcion 1) o Banco del pueblo (opcion 2)" << std::endl;	
	cin>>banco_deseado;
	banco_deseado--;

	if(banco_deseado==0){
		std::cout << "Bienvenido a = " << banco[banco_deseado].get_BName() << std::endl;
		std::cout << "¿Desea crear un usuario?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if (desicion==1)
		{
			banco[banco_deseado].create_client(y);
		}
		std::cout << "¿Desea modificar un cliente?. 1 para si, 2 para no." << std::endl;
		cin>>desicion;
		if (desicion==1)
		{
			std::cout << "por favor ingrese la identification" << std::endl;
			cin>>desicion;
			banco[banco_deseado].modificar_cliente(desicion);
		}

	}
	else if(banco_deseado==1){
		std::cout << "Bienvenido a = " << banco[banco_deseado].get_BName() << std::endl;
	}
	else{
		std::cout << "opcion errada" << std::endl;
	}









//	string nombres[10];
//	nombres[0]="perra0";
//	nombres[1]="perra1";
//	nombres[2]="perra2";
//	std::cout << "nombre del banco = " << cliente.get_fname(1) << std::endl;
//	std::cout << "nombre del banco = " << cliente.get_lname(1) << std::endl;
//	std::cout << "nombre del banco = " << cliente.punteros[0] << std::endl;
//	std::cout << "nombre del banco = " << cliente.punteros[1] << std::endl;

//	std::cout << "nombre del banco = " << cuentas.Account[2] << std::endl;
	std::cout << "nombre del banco = " << cliente.punteros << std::endl;
	std::cout << "nombre del banco = " << banco[0].cuentas.Account[2] << std::endl;

	//std::cout << "nombre del banco = " << cliente.punteros[1] << std::endl;
//	std::cout << "nombre del banco = " << cliente.identification[3] << std::endl;
//	std::cout << "nombre del banco = " << cliente.identification[4] << std::endl;




	
	

//	std::cout << "nombre del banco =" << banco.get_BName() << std::endl;

	
//	std::cout << "nombre del banco prueba =" << Nombre_Banco << std::endl;
//	std::cout << "nombre del banco =" << banco.get_BName() << std::endl;
//	std::cout << "nombre del banco =" << banco1.get_BName() << std::endl;
//	std::cout << "nombre del banco =" << banco.set_BName(Nombre_Banco) << std::endl;
}
