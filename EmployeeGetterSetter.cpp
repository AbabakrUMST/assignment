#include <iostream>

#include <string>

using namespace std;

class Employee{
	
	private:

	int em_basic_salary;
	int em_bonus;
	int em_grade;
	int em_trans_allowance;
	int em_housing_allowance;
	int em_ID;
	int em_TI;  //Total TI is  needed (e) to save total Income
	int is_HI;



	public:
	
		
	//Default Constructor to initialize the Employee Grade - initialized to 0 (a)
		Employee()
		{
			this->em_grade = 0;
		}
		
	//parameter Constructor to determine employee_ID (b)	
		Employee(int id)
		{
			this->em_ID = id;
		}
		
	//public member function: to determine the employee Details i.e to print out the employee details (c)
	
	void em_details()
	{
		
		cout<<endl;
		cout<<"The Employee Details are : "<<endl;
		cout<<"Employee Grade: "<<this->em_grade<<endl;
		cout<<"Employee Basic Salary: "<<this->em_basic_salary<<endl;
		cout<<"Employee Bonus: "<<this->em_bonus<<endl;
		cout<<"Employee Transportation Allowance: "<<this->em_trans_allowance<<endl;
		cout<<"Employee Housing Allowance: "<<this->em_housing_allowance<<endl;
		cout<<"Total Salary is:  "<<this->em_TI<<endl;			

	}	
	
	//Detemining the health Insurance: 1 = 500 and 2 = 300 (d)
	//Edit: we are assuming that it is either  1 or 2
	
	int is_Hi(int one_or_two)
	{
		//if one_or_two is greater than 2 (3,4,5 ....) no Health Isuarance
		if (one_or_two > 2) return 0;
		
		return (one_or_two == 1) ? 500 : 300;
	}
	
	
	//public funtion to calculate total Income:  (e and f)
	//use formulae: Ti = BS + Bonus + TransAllow + HouseAllowance - HelthInsuarance -SOCIAL_INSUARANCE (si = 10% 0f BS)
		
	
	void calculate(int hi_code)
	{
		
		this->em_TI = ((this->em_basic_salary + 
				(this->em_bonus * this->em_basic_salary /100) + 
				this->em_trans_allowance + 
				this->em_housing_allowance - 
				this->is_Hi(hi_code) -
				(this->em_basic_salary * 0.1)));
				
	}
	
	
	//SET function Needed for all members (f)
	
	void set_em_basic_salary(int b_salary)
	{
		this->em_basic_salary = b_salary;
	}
	
	void set_em_bonus(int bonus)
	{
		this->em_bonus = bonus;
	}
	
	void set_em_trans_allowance(int transAllowance)
	{
		this->em_trans_allowance = transAllowance;
	}
	
	void set_em_housing_allowance(int house_allowance)
	{
		this->em_housing_allowance = house_allowance;
	}
	
	void set_em_grade(int grade)
	{
		this->em_grade = grade;
	}
	
	
	//Subclass Hourly Employee (j)
	
	class hourlyEmployee{
		private:
			//empty
		public:
			//empty
	};

};

int main()
{
	
	//The five Employee Details... Setting their details using our Setters.
	Employee* ahmad = new Employee(1);
	
	ahmad->set_em_grade(9);
	ahmad->set_em_basic_salary(3500);
	ahmad->set_em_bonus(5);
	ahmad->set_em_trans_allowance(300);
	ahmad->set_em_housing_allowance(600);
	
	ahmad->calculate(2); //Setting the Hospital Allowance to type 2
	ahmad->em_details();
	
	
	
	Employee* mohamed = new Employee(2);
	
	mohamed->set_em_grade(8);
	mohamed->set_em_basic_salary(4200);
	mohamed->set_em_bonus(7);
	mohamed->set_em_trans_allowance(300);
	mohamed->set_em_housing_allowance(600);
	
	mohamed->calculate(1);
	mohamed->em_details();


	
	return 0;
}




