#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){

}

Invoice::Invoice(int n, int m, int a){
	numero = n;
	descricao = d;
	quantidade = q;
	preco = p;


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

void Invoice::getInvoiceAmount(){
    return p*q
}

void Data::avancarDia(){
	if ((dia >= 1)&&(dia <=30))
        dia++;
	if ((mes >= 1)&& (dia == 31))
		mes++;
	if ((ano >=0) && (mes == 12))
		ano++;

}
