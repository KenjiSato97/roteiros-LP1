#ifndef INVOICE_H_
#define INVOICE_H_

class Invoice {
	private:
	    int numero;
	    char descricao;
	    int quantidade;
	    float preco;
	    float InvoiceAmount = quantidade*preco;

	public:
		Invoice(int, char, int, float);
		Invoice();
		virtual ~Invoice();
		int getNumero();
		char getDescricao();
		int getQuant();
		float getPreco();
		void setNumero(int);
		void setDescricao(char);
		void setQuant(int);
		void setPreco(float);
		void getInvoiceAmount();


};

#endif /* INVOICE_H_ */
