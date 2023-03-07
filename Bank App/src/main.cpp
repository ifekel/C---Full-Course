#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	cout << "\t\t\t\t\tWelcome to City Bank ATM" << endl;
	cout << "\t\t\t\t\t24/7 Services ";

	string firstName;
	string lastName;
	string account_number;
	int age;
	int service;
	int account_balance = 0;
	string acc_num_validator;
	string account_pin;
	int initial_deposit;

	string store_account_numbers[] = {0};

choose_service:
	cout << "Choose a service to connect" << endl;
	cout << "1.Create account\n2.Block card / Account\n3.Transfer\n4.Deposit\n5.Withdraw" << endl;
	cout << ">>> ";
	cin >> service;
	switch (service)
	{
	case 1:
		cout << "\tYou've chosen to create account...." << endl;
		cout << "FIRSTNAME: ";
		cin >> firstName;
		cout << "LASTNAME: ";
		cin >> lastName;
		cout << "AGE: ";
		cin >> age;
		if (age < 18)
		{
			cout << "You are too young to open an account!" << endl;
			break;
		}
		else
		{
			cout << "Proceed!" << endl;
		}
		try
		{
			cout << "CREATE A 4 DIGIT PIN FOR YOUR ACCOUNT" << endl;
			cin >> account_pin;
			if (account_pin.length() == 4)
			{
				cout << "Pin created successfully!" << endl;
				account_number = "2000267629";
				cout << "Your account number is: " << account_number << endl;
				store_account_numbers[0] = account_number;
			}
			else
			{
				throw(account_pin);
			}
		}
		catch (int accNum)
		{
			cout << "Pin is not up to 4 digits!" << endl;
			cout << "Pin is: " << accNum << endl;
		}

		try
		{
			cout << "MAKE AN INITIAL DEPSIT OF N1000 AND ABOVE" << endl;
			cout << "INITIAL DEPSIT: ";
			cin >> initial_deposit;
			if (initial_deposit >= 1000)
			{
				cout << "₦" << initial_deposit << " has been successfully deposited to your account!" << endl;
				account_balance += initial_deposit;
				cout << "Your account balance is: ₦" << account_balance << endl;
			}
			else
			{
				throw(initial_deposit);
			}
		}
		catch (int initialDeposit)
		{
			cerr << "Initial deposit must be more than N1000" << endl;
		}
		cout << "Thanks for creating an account with City Bank..." << endl;
		cout << "Enter 1 to go back to the services option" << endl;
	go_to_services_option:
		cout << ">>> ";
		int go_back;
		cin >> go_back;
		switch (go_back)
		{
		case 1:
			goto choose_service;
			break;

		default:
			cerr << "Invalid option entered!" << endl;
			goto go_to_services_option;
			break;
		}
		break;

	case 2:
		cout << "You've chosen to block a card / account." << endl;
		cout << "Enter the account number of the account you want to block" << endl;
		cout << ">>> ";
		cin >> acc_num_validator;
		for (int i = 0; i < store_account_numbers->length(); i++)
		{
			if (acc_num_validator == store_account_numbers[i])
			{
				cout << "Account owner is " << firstName << " " << lastName << endl;
				cout << "Enter account pin" << endl;
				string confirm_password;
				cin >> confirm_password;
				if (confirm_password == account_pin)
				{
					cout << "Account has been blocked" << endl;
					store_account_numbers[0] = "";
					account_balance = 0;
				}
				else
				{
					cerr << "Wrong password entered" << endl;
				}
			}
			else
			{
				cerr << "The account number you entered seem to be linked to any account!" << endl;
				goto choose_service;
			}
		}
		break;

	case 3:
		cout << "You've chosen to do a transfer." << endl;
		break;

	case 4:
		cout << "You've chosen to deposit." << endl;
		break;

	case 5:
		cout << "You've chosen to withdraw." << endl;
		break;

	default:
		cout << "Invalid option." << endl;
		goto choose_service;
		break;
	}
}