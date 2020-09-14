#include <iostream>






using namespace std;


class Employee{
	
	
	int employeeSalary;

	
	public:
		
		
		void setSalary(int salary)
		{
			this->employeeSalary = salary;
			
		}
		
		
		int getSalary()
		{
			return employeeSalary;
		}

	
		Employee(){}
		
		
		void employeeDetails()
		{
				cout<<"Employee Basic Salary: "<<employeeSalary<<endl;
		}
};

int main()
{
	
	Employee ababakr;
	
	ababakr.setSalary(200);
	ababakr.employeeDetails();
	


	
	return 0;
}




