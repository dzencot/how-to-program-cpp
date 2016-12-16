//урок 3.13
//реализация класса Invoice
#include "invoice.h"

Invoice::Invoice( string art, string des, int qnt, int prc ) {
	setArticul( art );
	setDesc( des );
	setQnty( qnt );
	setPrice( prc );
}

void Invoice::setArticul( string art ) {
	articul = art;
}

void Invoice::setDesc( string des ) {
	desc = des;
}

void Invoice::setQnty( int qnt ) {
	if ( qnt < 0 ) { qnt = 0; }
	qnty = qnt;
}

void Invoice::setPrice( int prc ) {
	if ( prc < 0 ) { prc = 0; }
	price = prc;
}

string Invoice::getArticul() {
	return articul;
}

string Invoice::getDesc() {
	return desc;
}

int Invoice::getQnty() {
	return qnty;
}

int Invoice::getPrice() {
	return price;
}
