#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
//1
/*	int day;
	cin >> day;
	if (day == 1) {
		cout << "Понедельник" << endl;
	}
	else if (day == 2) {
		cout << "Вторник" << endl;
	}
	else if (day == 3) {
		cout << "Cреда" << endl;
	}
	else if (day == 4) {
		cout << "Четверг" << endl;
	}
	else if (day == 5) {
		cout << "Пятница" << endl;
	}
	else if (day == 6) {
		cout << "Суббота"<< endl;
	}
	else if (day == 7) {
		cout << "Воскресенье" << endl;
	}
	else {
		cout << "Ошибка" << endl;
	}*/
/*	int day;
	cin >> day;
	switch (day) {
	case 1: cout << "Понедельник" << endl;break;
	case 2: cout << "Вторник" << endl;break;
	case 3: cout << "Среда" << endl;break;
	case 4: cout << "Четверг" << endl;break;
	case 5: cout << "Пятница" << endl;break;
	case 6: cout << "Суббота" << endl;break;
	case 7: cout << "Воскресенье" << endl;break;
	default:cout << "Ошибка" << endl;break;
	}*/
//2
/*	int k;
	cin >> k;
	switch (k) {
	case 1: cout << "Плохо" << endl;break;
	case 2: cout << "Неудовлетворительно" << endl;break;
	case 3: cout << "Удовлетворительно" << endl;break;
	case 4: cout << "Хоршо" << endl;break;
	case 5: cout << "Отлично" << endl;break;
	dafult:cout << "Ошибка" << endl;break;
	}*/
//3
/*	int month;
	cin >> month;
	switch (month) {
	case 1:
	case 2:
	case 12: cout << "Зима" << endl; break;
	case 3: 
	case 4:
	case 5: cout << "Весна" << endl; break;
	case 6: 
	case 7: 
	case 8: cout << "Лето" << endl; break;
	case 9: 
	case 10: 
	case 11: cout << "Осень" << endl; break;
	}*/
//4
/*	int month;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:cout << "31" << endl; break;
	case 2:cout << "28" << endl; break;
	case 4:
	case 6:
	case 8:
	case 10:
	case 12:cout << "30" << endl; break;
	}*/
//5
/*	int n, a, b, c;
	cin >> n >> a >> b;
	switch (n) {
	case 1:c = a + b; break;
	case 2:c = a - b; break;
	case 3:c = a * b; break;
	case 4:c = a / b; break;
	default:cout << "Ошибка" << endl;
	}
	cout << c << endl;*/
//1.1
/*	int a, b, c;
	cin >> a >> b >> c;
	bool r = a == b && b == c;
		cout << boolalpha << r << endl;*/
//1.2
/*	int n;
	cin >> n;
	bool r = n % 2 == 0 && n >= 10;
		cout << boolalpha << r << endl;*/
//1.3
/*	int a, b, c;
	cin >> a >> b >> c;
	bool r = a == b && c != b || b == c && a != b || a == c && b != c;
	cout << boolalpha << r << endl;*/
//2.1
/*	int a, b;
	cin >> a >> b;
	if (a + b < 180 && a>0 && b > 0) {
		cout << "Существует" << endl;
	}
	if(a == 90||b==90){
		cout << "Прямой угол" << endl;
	}*/
//2.2
/*	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << "1" << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "4" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "2" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "3" << endl;
	}*/
//4
	int a;
	cin >> a;
	switch (a) {
	case 0:cout << "Zero" << endl; break;
	case 1:cout << "One" << endl; break;
	case 2:cout << "Two" << endl; break;
	case 3:cout << "Three" << endl; break;
	case 4:cout << "Four" << endl; break;
	case 5:cout << "Five" << endl; break;
	case 6:cout << "Six" << endl; break;
	case 7:cout << "Seven" << endl; break;
	case 8:cout << "Eight" << endl; break;
	case 9:	cout << "Nine" << endl; break;
	return 0;
}