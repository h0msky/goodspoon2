#include <iostream>
#include <fstream>

int main()
{
//	std::cout << "���� ������" << std::endl;

	std::string name;
	std::cout << "��� ��� �����?";

	std::getline(std::cin, name);

	std::cout << "������������ ����, " << name << "!" << std::endl;


	//���������� ��� ������������ � ��������� ����
    //     ���   ��� ����������
	//      ||      ||    ��� �����      ����� ������� � �����
	//      \/      \/      \/                 \/  (��������)
	std::ofstream file("users.txt", std::ios::app);
	file << "� ��� ������� " << name << std::endl;
	file << " � ��� � ��� ����� �����������!";

	return 0;

}

