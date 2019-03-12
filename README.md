# 2019_1_d3_prc1_GuioCarlos_SeguraMario_AlvaresNicolas
Laboratorio 1 Digitales 3

En este laboratorio se simula la funcion de dos bancos los cuales deben ser capaces de almacenar clientes con sus respectivas cuentas, tambien se debe
poder acceder a estos datos si se cumplen condiciones como la identificacion del cliente o la clave de la cuenta.

El proyecto consta de 7 archivos (Bank.h, Bank.cpp, Cliente.h, Cliente.cpp, Cuenta.h, Cuenta.cpp, Lab.cpp).

En los archivos Cuenta.h y Cuenta.cpp se creo una clase llamada CUENTAS en la que se almacena el numero de la cuenta, el balance, la clave, el estado y
un apuntador a el dueño de la cuenta. Tambien se tienen metodos para modificar estos datos si se conoce el numero de la cuenta y la clave, crear una nueva cuenta,
consignar y retirar dinero, consultar estado y consultar balance.

En los archivos Cliente.h y Cliente.cpp se creo una clase llamada CLIENTE en la que se almacena el nombre, apellido, numero de identificacion, edad yun apuntador a
todas las cuentas que tiene el cliente. En esta clase se tiene el metodo para modificar los datos del cliente.

En los archivos Bank.h y Bank.cpp se crea una clase llamada BANK en la que se guarda el nombre del banco y un arreglo con todos los clientes y cuentas que este tiene.
tiene metodos para acceder a los metodos de las clases CUENTA y CLIENTE y poder modificar sus atributos.

 



