/*
Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, por la motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.  El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.

Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<istream>

using namespace std;

struct empleados{
	int numero[11],num,cant,cantidad;
	int codigo, no, codigo1,dato;
	string nombre, puesto, departamento,dat;
	float salario,datos;
};
void planilla();

int main(){
	int numero[11],num,cant,cantidad;
	int codigo, no, codigo1;
	string nombre, puesto, departamento;
	float salario;
	
	
	cout<<"Bienvenido al programa de NOMINA!!!"<<endl;
	cout<<"___________________________________"<<endl;
	cout<<"Empleados asignados para el area de Gerencia: ";
	cin>>num;
	
			int *punterog = &codigo;
			string *punteroge = &nombre;
			string *punteroger = &puesto;
			string *punterogere = &departamento;
			float *punterogeren = &salario;
	
		for(int i=0;i<num; i++){
			cout<<i+1;
			cout<<"\tIngrese el codigo de empleado: ";
			cin>>codigo;
			fflush(stdin);
			cout<<"\tIngrese el Nombre del empleado: ";
			getline(cin,nombre);
			fflush(stdin);
			cout<<"\tIngrese el puesto que ocupa: ";
			getline(cin,puesto);
			fflush(stdin);
			cout<<"\tIngrese el departamento donde se ubica: ";
			getline(cin,departamento);
			cout<<"\tIngrese el salario asignado: ";
			cin>>salario;
			cout<<"___________________________________________"<<endl;
		}
		
	cout<<"Empleados asignados para el area de Administracion: ";
	cin>>cant;
			
			int *punteroa = &codigo;
			string *punteroad = &nombre;
			string *punteroadm = &puesto;
			string *punteroadmi = &departamento;
			float *punteroadmin = &salario;
			
			for(int i=0;i<cant; i++){
			cout<<i+1;
			cout<<"\tIngrese el codigo de empleado: ";
			cin>>codigo;
			fflush(stdin);
			cout<<"\tIngrese el Nombre del empleado: ";
			getline(cin,nombre);
			fflush(stdin);
			cout<<"\tIngrese el puesto que ocupa: ";
			getline(cin,puesto);
			fflush(stdin);
			cout<<"\tIngrese el departamento donde se ubica: ";
			getline(cin,departamento);
			cout<<"\tIngrese el salario asignado: ";
			cin>>salario;
			cout<<"___________________________________________"<<endl;
		}
				
	cout<<"Empleados asignados para el area de Produccion: ";
	cin>>cantidad;
			int *punterop = &codigo;
			string *punteropr = &nombre;
			string *punteropro = &puesto;
			string *punteroprod = &departamento;
			float *punteroprodu = &salario;
			
			for(int i=0;i<cantidad; i++){
				
			cout<<i+1;
			cout<<"\tIngrese el codigo de empleado: ";
			cin>>codigo;
			fflush(stdin);
			cout<<"\tIngrese el Nombre del empleado: ";
			getline(cin,nombre);
			fflush(stdin);
			cout<<"\tIngrese el puesto que ocupa: ";
			getline(cin,puesto);
			fflush(stdin);
			cout<<"\tIngrese el departamento donde se ubica: ";
			getline(cin,departamento);
			cout<<"\tIngrese el salario asignado: ";
			cin>>salario;
			cout<<"___________________________________________"<<endl;
			/*cout<<codigo<<nombre<<puesto<<departamento<<salario<<endl;
			cin<<[*punterog][*punteroge][*punteroger][*punterogere][*punterogeren];*/
			
			
		}
		
		cout<<"Los datos de la Planilla de la Empresa son:"<<endl;
		cout<<"___________________________________________"<<endl;	
			cout<<"El codigo del empleado es: " <<*punterog<<endl;
			cout<<"El nombre del empleado es: "<<*punteroge<<endl;
			cout<<"El puesto del empleado es: "<<*punteroger<<endl;
			cout<<"El departamento donde se ubica el empleado es: "<<*punterogere<<endl;
			cout<<"El salario devengado del empleado es: "<<*punterogeren<<endl;
			cout<<"___________________________________________"<<endl;			
			cout<<"El codigo del empleado es: " <<*punteroa<<endl;
			cout<<"El nombre del empleado es: "<<*punteroad<<endl;
			cout<<"El puesto del empleado es: "<<*punteroadm<<endl;
			cout<<"El departamento donde se ubica el empleado es: "<<*punteroadmi<<endl;
			cout<<"El salario devengado del empleado es: "<<*punteroadmin<<endl;
			cout<<"___________________________________________"<<endl;	
			cout<<"El codigo del empleado es: " <<*punterop<<endl;
			cout<<"El nombre del empleado es: "<<*punteropr<<endl;
			cout<<"El puesto del empleado es: "<<*punteropro<<endl;
			cout<<"El departamento donde se ubica el empleado es: "<<*punteroprod<<endl;
			cout<<"El salario devengado del empleado es: "<<*punteroprodu<<endl;
			cout<<"___________________________________________"<<endl;
	planilla();

};

void planilla(){
	//char codigo1[] = {codigo};
}


