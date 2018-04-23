#ifndef INVOICE_H_
#define INVOICE_H_

using namespace std;
class Invoice {
	private:
	    int numero;
	    string descricao;
	    int quantidade;
	    float preco;
	    float InvoiceAmount = quantidade*preco;

	public:
		Invoice(int, string, int, float);
		Invoice();
		virtual ~Invoice();
		int getNumero();
		string getDescricao();
		int getQuant();
		float getPreco();
		void setNumero(int);
		void setDescricao(string);
		void setQuant(int);
		void setPreco(float);
		float getInvoiceAmount();


};

#endif /* INVOICE_H_ */
