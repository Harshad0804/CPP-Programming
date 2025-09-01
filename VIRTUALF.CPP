#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		virtual void show()
		{
			cout<<"\nShow From Base";
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"\nShow From Derived";
		}
};

void main()
{
	clrscr();
	Base *p;
	Base b;
	Derived d;
	p=&b;
	p->show();
	p=&d;
	p->show();
	getch();
}
