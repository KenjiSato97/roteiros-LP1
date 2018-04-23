#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(){


}

Invoice::Invoice(int n, string d, int q, float p){
	numero = n;
	descricao = d;
	quantidade = q;
	preco = p;

}

Invoice::~Invoice(){

}

int Invoice::getNumero(){
	return numero;
}

string Invoice::getDescricao(){
	return descricao;
}

int Invoice::getQuant(){
	return quantidade;
}

float Invoice::getPreco(){
	return preco;
}

void Invoice::setNumero(int n){
	numero = n;
}
void Invoice::setDescricao(string d){
	descricao = d;
}
void Invoice::setQuant(int q){
	quantidade = q;
}

void Invoice::setPreco(float p){
	preco = p;
}

float Invoice::getInvoiceAmount(){
    return quantidade*preco;

}


