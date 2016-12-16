//урок 3.12
//интерфейс класса Account
class Account {
	public:
		Account( int value );
		void credit( int value );
		void debit( int value );
		void setBalance( int value );
		int getBalance();
	private:
		int balance;
};
