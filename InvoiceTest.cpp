#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
    Invoice produto(1,"pillha AA",3,4.00);

	cout << "numero: " << produto.getNumero()
            <<  "  " << "produto:" << "  " << produto.getDescricao()
            << "  " << "quantidade:" << "  " << produto.getQuant()
            << "  " << "preco:" << "  " << produto.getPreco() << endl;


	cout << "fatura: " << produto.getInvoiceAmount() << endl;

}
