#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(){
	dia = 1;
	mes = 1;
	ano = 2000;
}

Data::Data(int d, int m, int a){
	dia = d;
	mes = m;
	ano = a;

	if (verificaData() == false){
		cout << "Data invalida" << endl;
		dia = 1;
		mes = 1;
		ano = 2000;
	}
}

Data::~Data(){

}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

void Data::setDia(int d){
	dia = d;
}
void Data::setMes(int m){
	mes = m;
}
void Data::setAno(int a){
	ano = a;
}

bool Data::verificaData(){
	if ((dia <= 0) || (dia > 31))
		return false;
	if ((mes <= 0) || (mes > 12))
		return false;
	if ((ano < 0) || (ano > 2018))
		return false;

	return true;
}

void Data::avancarDia(){
	if ((dia >= 1)&&(dia <=30))
        dia++;
	if ((mes >= 1)&& (dia == 31))
		mes++;
	if ((ano >=0) && (mes == 12))
		ano++;

}

