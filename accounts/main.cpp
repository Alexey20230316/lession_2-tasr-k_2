#include<iostream>

struct accounts
{
	std::string name;      //  ��� ���������
	int balance = 0;      //  ������ 
	float namber = 0;    //  ����� �����
};

void foo(int n, accounts* p ) {   //  ��������� ���� balance
	p->balance = n;
}
//������� ����� ����� : 123456789
//������� ��� ��������� : ������
//������� ������ : 5000
//������� ����� ������ : 6000
//��� ���� : ������, 123456789, 6000

int main() {

	setlocale(LC_ALL, "Russian");

	int n;
	accounts owner;  // ������� ��������� owner
	std::cout << "������� ����� ����� :  " << "\n";
	std::cin >> owner.namber;
	std::cout << "������� ��� ��������� :  " << "\n";
	std::cin >> owner.name;
	std::cout << "������� ������ :  " << "\n";
	std::cin >> owner.balance;
	std::cout << "������� ����� ������ :  " << "\n";
	std::cin >> n;
	accounts* p_owner = &owner;
	foo(n, p_owner);
	std::cout << "��� ����:  " << owner.name << ",  " << owner.namber << ",  " << owner.balance << "\n";



}