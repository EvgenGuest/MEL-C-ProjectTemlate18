//Персональный шаблон проекта С++
#include <iostream>
#include <fstream> // библиотека, позволяющая работать с файловой системой содержит в себе классы:ofstream, ifstream, fstream.
#include <string>
using namespace std;

bool statistic(string str) {
	ofstream out;
	out.open("stat.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.length() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << "Задача 1.\nВведите слово:\n";
	string word;
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n";
	else
		cout << "Ошибка записи\n";
	cout << "Введите слово\n";
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n\n";
	else
		cout << "Ошибка записи\n\n";

	cin.ignore();

	/*string path = "file.txt"; //Строка, содержащая путь к файлу
	ofstream out; // Обьект класса ofstream который позволяет записывать данные файла
	out.open(path, ios::app); // Открываем файл в режиме ios::app чтобы добавлять к нему записи

	if (out.is_open()) { // проверка на то, удалось ли открыть файл
		cout << "Файл открыт для записи\n";
		string input;
		for (int i = 0; i < 3; i++) {
			cout << "Введите строку:\n";
			getline(cin, input);
			out << input << "\n"; // запись данных в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	out.close(); // закрытие файла (обнуление обьекта out)
	cout << endl;

	ifstream in; // обьект класса ifstream, который позволяет считывать данные из файла
	in.open(path); // Открываем файл для считывания

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str;
		//Считывание из файла посимвольно
		/ *char sym; // Символьная переменная хранящая в себе символы из файла
		while (in.get(sym)) // метод get считывает символ из файла и помещает его в sym. Возвращает false если считывание не удалось
			str += sym;
		cout << str;* /
		string tmp;
		//Пословное считывание из файла
		/ *while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}* /
		// Построчное считывание из файла
		while (!in.eof()) {
			getline(in, tmp);
			cout << tmp << endl;
			str += tmp + "\n";
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	in.close();

	if (remove("file.txt")) // 0 - удаление прошло успешно. Любое другое число - удаление не выполнено
		cout << "Ошибка удаления файла\n";
	else
		cout << "Файл удален\n";*/


	return 0;
}
