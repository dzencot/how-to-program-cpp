//урок 3.15
//интерфейс класса Date

class Date {
	public:
		Date( int, int, int );
		void setDay( int );
		void setMonth( int );
		void setYear( int );
		int getDay();
		int getMonth();
		int getYear();
		void displayDate();
	private:
		int day, month, year;
};

