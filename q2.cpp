#include <iostream>
using namespace std;

struct Student {
	char name[50];
	int id;
	float score;
};

void input(Student* s){
	cin >> s->name >> s->id >> s->score;
}

void display(Student* s) {
	cout << "姓名:" << s->name << endl;
	cout << "学号:" << s->id << endl;
	cout << "成绩:" << s->score << endl;
}

int main2() {
	Student* p = new Student;
	input(p);
	display(p);
	delete p;
	return 0;
}
