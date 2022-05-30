#include <iostream>
using namespace std;


class formula1
{
	private:
		int speed;
		int pickup;


	public:
		formula1(int s, int p)
		{
			cout << "This is constuctor" << endl;
			speed = s;
			pickup = p;
		}
	


	void display()
	{
		cout << "Speed is : "<< speed << endl;
		cout << "Pickup is : "<< pickup << endl;
	}

	~formula1()
	{
		cout << "This is a destructor" << endl;
	}






};




int main()
{	
	formula1 f(370, 4);
	f.display();


	return 0;
}