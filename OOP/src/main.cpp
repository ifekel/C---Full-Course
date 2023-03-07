#include <iostream>
using namespace std;

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{

private:
	string Name;
	string Company;
	int Age;

public:
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	void setCompany(string company)
	{
		Company = company;
	}
	string getCompany()
	{
		return Company;
	}
	void setAge(int age)

	{
		if (age >= 18)
			Age = age;
	}
	int getAge()
	{
		return Age;
	}
	void IntroduceYourself()
	{
		cout << "Name: " << Name << endl;
		cout << "Company: " << Company << endl;
		cout << "Age: " << Age << endl;
	}

	Employee(string name, string company, int age)
	{
		Name = name;
		Company = company;
		Age = age;
	}

	void AskForPromotion()
	{
		if (Age >= 30)
			cout << Name << " got a promotion!" << endl;
		else
			cout << Name << ", sorry NO promotion!" << endl;
	}

	virtual void Work()
	{
		cout << getName() << " is checking email, backlog, and performing the tasks..." << endl;
	}
};

class Developer : public Employee
{
private:
	string chooseLanguage;

public:
	Developer(string name, string company, int age, string choose_language) : Employee(name, company, age)
	{
		chooseLanguage = choose_language;
	}

	void fixBug()
	{
		cout << getName() << " is fixing the bug using " << chooseLanguage << "!" << endl;
	}

	void Work()
	{
		cout << getName() << " is writing codes with " << chooseLanguage << endl;
	}
};

class Teacher : public Employee
{
public:
	string subject;
	void PrepareLesson()
	{
		cout << getName() << " is preparing " << subject << " lessons!" << endl;
	}

	Teacher(string name, string company, int age, string course) : Employee(name, company, age)
	{
		subject = course;
	}

	void Work()
	{
		cout << getName() << " is teaching " << subject << endl;
	}
};

main(int argc, char *argv[])
{
	Employee employee1 = Employee("Anthony", "TonyCodes.Tech", 17);
	Employee employee2 = Employee("Ifeanyi", "TonyCodes.Tech", 31);
	// employee1.IntroduceYourself();

	// employee1.setAge(16);
	// cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

	// employee1.AskForPromotion();
	// employee2.AskForPromotion();

	Developer developer1 = Developer("Ifeanyi", "Codemate", 31, "C++");
	// developer1.fixBug();
	// developer1.AskForPromotion();

	Teacher teacher1 = Teacher("James", "Aptech", 25, "Python programming");
	// teacher1.PrepareLesson();

	// employee1.Work();
	// developer1.Work();
	// teacher1.Work();

	// Pointers
	Employee *e1 = &employee1;
	Employee *e2 = &developer1;

	e1->Work();
	e2->Work();
}