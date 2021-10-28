#include <iostream>
#include <Windows.h>

using namespace std;

class Person {
	friend class Dog;
private:
	int	health_person = 100;//Здоровье Человека
public:
};
class Dog {
	friend class Person;
private:
	int health_dog = 100;//Здоровье Пса
public:
	void Damage_Dog1(Person &a) {
		a.health_person -= 70;
		cout << "Атака:Укус" << endl;
		cout << "Здоровье человека: "<<a.health_person<<endl;
	}
	void Damage_Dog2(Person &a) {
		a.health_person -= 50;
		cout << "Атака:Когти" << endl;
		cout << "Здоровье человека: " << a.health_person << endl;
	}
	void Kill_Dog(Person &a) {
		a.health_person = 0;
		cout << "Человек умер, Здоровье: " << a.health_person << endl;;
	}
};

enum attack { DogAttack1 = 1, DogAttack2 = 2, DogKill = 3};

int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		Dog Haski;
		Person Vasya;
		int inputattack;
		cin >> inputattack;
		attack var = static_cast<attack>(inputattack);
		switch (var) {
			case DogAttack1:
				Haski.Damage_Dog1(Vasya);
				break;
			case DogAttack2:
				Haski.Damage_Dog2(Vasya);
				break;
			case DogKill:
				Haski.Kill_Dog(Vasya);
				break;
			default:
				cout << "Ошибка" << endl;
		}
		
		
}