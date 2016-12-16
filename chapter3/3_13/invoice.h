//урок 3.13
//интерфейс класса Invoice
#include <string>
using std::string;

class Invoice {
	public:
		Invoice( string, string, int, int );
		void setArticul( string );
		void setDesc( string );
		void setQnty( int );
		void setPrice( int );
		string getArticul();
		string getDesc();
		int getQnty();
		int getPrice();
	private:
		string articul;
		string desc;
		int qnty;
		int price;
};
