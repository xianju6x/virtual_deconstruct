#include <iostream>

class A{
	public:
		A(){
			std::cout<<"A construct\n";
			ptr = new char[100];
		}
		virtual ~A(){
			delete ptr;
			std::cout<<"A destruct\n";
		}
	private:
		char *ptr;
};
 
class B:public A{
	public:
		B(){
			std::cout<<"B construct\n";
			name = new char[100];
		}
		virtual ~B(){
			delete name;
			std::cout<<"B destruct\n";
		}
	private:
		char *name;
};

int main(int argc, const char *argv[])
{
	A *a = new B();
	delete a;
	std::cout<<"--------------\n";
	B *b = new B();
	delete b;
	return 0;
}
