
#include "Cliente.h"


int CLIENTE::get_edad(){return edad;};
int CLIENTE::get_id(){return id;};
char *CLIENTE::get_fname(){return fname;};
char *CLIENTE::get_lname(){return lname;};

void CLIENTE::set_fname(char *_fname){strcpy(fname,_fname);};
void CLIENTE::set_lname(char *_lname){strcpy(lname,_lname);};
void CLIENTE::set_edad(int _edad){edad=_edad;};
void CLIENTE::set_id(int _id){id=_id;};

void CLIENTE::actualizar_datos(char *_fname, char *_lname, int _edad, int _id){
	strcpy(fname,_fname); 
	strcpy(lname,_lname);
	edad=_edad;
	id=_id;
}
