#include <iostream>
#include <fstream>

int main()
{
//	std::cout << "Всем привет" << std::endl;

	std::string name;
	std::cout << "Как вас зовут?";

	std::getline(std::cin, name);

	std::cout << "Приветствуем тебя, " << name << "!" << std::endl;


	//Записываем имя пользователя в текстовый файл
    //     тип   имя переменной
	//      ||      ||    имя файла      режим доступа к файлу
	//      \/      \/      \/                 \/  (дозапись)
	std::ofstream file("users.txt", std::ios::app);
	file << "у нас побывал " << name << std::endl;
	file << " и ему у нас очень понравилось!";

	return 0;

}

