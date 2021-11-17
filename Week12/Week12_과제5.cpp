#include<iostream>
#include<string>

using namespace std;

class Student {
private:
	string rollNo;
	string name;
public:
	string getRollNo() {
		return this->rollNo;
	}

	void setRollNo(string rollNo) {
		this->rollNo = rollNo;
	}

	string getName() {
		return this->name;
	}

	void setName(string name) {
		this->name = name;
	}
};

class StudentView {
public:
	void printStudentDetails(string studentName, string studentRollNo) {
		cout << "Student : " << endl;
		cout << "Name : " << studentName << endl;
		cout << "Roll No : " << studentRollNo << endl;
	}
};

class StudentController {
private:
	Student model;
	StudentView view;
public:
	StudentController(Student model, StudentView view) : model(model), view(view) {}
	
	void setStudentName(string name) {
		this->model.setName(name);
	}

	string getStudentName() {
		return this->model.getName();
	}

	void setStudentRollNo(string rollNo) {
		this->model.setRollNo(rollNo);
	}

	string getStudentRollNo() {
		return this->model.getRollNo();
	}

	void updateView() {
		this->view.printStudentDetails(this->model.getName(), this->model.getRollNo());
	}
};

int main() {

	Student model;
	model.setName("Robert");
	model.setRollNo("10");

	StudentView view;
	StudentController controller = StudentController(model, view);

	controller.updateView();
	controller.setStudentName("John");
	controller.updateView();
	
	return 0;
}