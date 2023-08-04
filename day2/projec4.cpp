#include <iostream>
#include <iostream>
#include <string>

using namespace std;

class Employee{
public :
	
	int empId;
	char name[80];
	char role[80];
	float salary;
	int experience;
	char com_name[80];
	char email[80];
	char Address[80];
	char contact[10];
	
public :
	void display(){
		cout<<"Enter employee ID = ";
		cin>>empId;
		cout<<"Enter employee name = ";
		cin>>name;
		cout<<"Enter employee role = ";
		cin>>role;
	}
};

class Employee1 : public Employee {
	
public :
	void setData() {
		
		cout<<"Enter salary = ";
		cin>>salary;
		cout<<"Enter experience = ";
		cin>>experience;
	}
};

class Employee2 : public Employee1 {
	

public :
	
public :
	void set_value(){
		cout<<"Enter company name = ";
		cin>>name;
		cout<<"Enter company Address = ";
		cin>>Address;
	}
	
	void get_value()
	{
		cout<< "Employee name = "<<name<<endl;
		cout<< "Employee role = "<<role<<endl;
		cout<< "Employee salary = "<<salary<<endl;
	}
};

class Employee3 : public Employee2{

public :
	
public :
	void stData(){
			cout<< "Enter email = ";
			cin>>email;
			cout<< "Enter contact = ";
			cin>>contact;
			cout<<"================================"<<endl;	
	}
	void printData(){
		cout<< "Employee ID :"<< empId<<endl;
		cout<< "Employee Experience:"<<experience<<endl;
		cout<< "Employee company name :"<< com_name<<endl;
		cout<< "Employee Adress :"<<Address <<endl;
		cout<< "Employee email :"<< email <<endl;
	    cout<< "Employee contact :"<< contact<<endl;
	}

};

int main(){
	Employee3 c;
	c.display();
	c.setData();
	c.set_value();
	c.stData();
	c.printData();
	c.get_value();
	
	return 0;
	}

