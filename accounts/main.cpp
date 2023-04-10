#include<iostream>

struct accounts
{
	std::string name;      //  им€ владельца
	int balance = 0;      //  баланс 
	float namber = 0;    //  номер счета
};

void foo(int n, accounts* p ) {   //  изменение пол€ balance
	p->balance = n;
}
//¬ведите номер счЄта : 123456789
//¬ведите им€ владельца : јндрей
//¬ведите баланс : 5000
//¬ведите новый баланс : 6000
//¬аш счЄт : јндрей, 123456789, 6000

int main() {

	setlocale(LC_ALL, "Russian");

	int n;
	accounts owner;  // создали экземпл€р owner
	std::cout << "¬ведите номер счЄта :  " << "\n";
	std::cin >> owner.namber;
	std::cout << "¬ведите им€ владельца :  " << "\n";
	std::cin >> owner.name;
	std::cout << "¬ведите баланс :  " << "\n";
	std::cin >> owner.balance;
	std::cout << "¬ведите новый баланс :  " << "\n";
	std::cin >> n;
	accounts* p_owner = &owner;
	foo(n, p_owner);
	std::cout << "¬аш счЄт:  " << owner.name << ",  " << owner.namber << ",  " << owner.balance << "\n";



}