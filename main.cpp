#include "Cliente.cpp"
#include <iostream>
using namespace std; 
main(){ 
	string nit,nombres,apellidos,direccion;
	int telefono;
	 
	cout<<"Ingresar Nit; ";
	cin>>nit;
	cout<<"Ingresar Nombres; ";
	cin>>nombres;
	cout<<"Ingresar Apellidos; ";
	cin>>apellidos;
	cout<<"Ingresar Direccion; ";
	cin>>direccion;
	cout<<"Ingresar Telefono; ";
	cin>>telefono;
	
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);

	cout<<"DATOS DEL CLIENTE: "<<obj.getNit()<<";"<<obj.getNombre()<<";"<<obj.getApellidos()<<";"<<obj.getDireccion()<<";"<<obj.getTelefono()<<endl;
	/*	Cliente obj= Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
}

