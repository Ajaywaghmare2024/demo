#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
		public:
		string name;
		int empid,salary;
		

		Employee(string name,int empid,int salary)
		{
			this->name=name;
			this->empid=empid;
			this->salary=salary;
		}
	
	void computesalary()
	{
		int net_salary;
	}	
	
	void display()
	{
		cout<<endl<<name<<endl<<empid<<endl<<salary;
	}
};

class Manager:protected Employee
{
	private:
		int perfbonus,tf,ta,ra,pf;
	
	public:
		Manager()
		{
			this->perfbonus=perfbonus;
			this->tf=tf;
			this->ta=ta;
			this->ra=ra;
			this->pf=pf;
		}
		void display()
		{
			cout<<perfbonus<<tf<<ta<<ra<<pf;
		}
	
	
};

int main ()
{
	Employee emp("Karthik",032,30000);
	emp.display();
	
	Manager mgr();
	
}
