class Dog {
	friend class Person;
private:
	int health_dog = 100;
public:
	void Damage_Dog1(Person& a) {
		a.health_person -= 70;
		cout << "�����:����" << endl;
		cout << "�������� ��������: " << a.health_person << endl;
	}
	void Damage_Dog2(Person& a) {
		a.health_person -= 50;
		cout << "�����:�����" << endl;
		cout << "�������� ��������: " << a.health_person << endl;
	}
	void Kill_Dog(Person& a) {
		a.health_person = 0;
		cout << "������� ����, ��������: " << a.health_person;
	}
};