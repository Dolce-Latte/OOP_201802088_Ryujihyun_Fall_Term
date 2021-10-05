#include<iostream>

class My_cat {
	char* name;
	int weight;


public:
	My_cat();
	My_cat(const char* name);
	My_cat(const My_cat& cat);
	~My_cat();

	//eat �Լ� �����Ͻÿ�
	int& eat(int w);
	void show_status() const;
};

My_cat::My_cat() :name(NULL), weight(10) { }

My_cat::My_cat(const char* cat_name) : weight(10) {
	name = new char[strlen(cat_name) + 1];
	strcpy(name, cat_name);
}

My_cat::My_cat(const My_cat& cat) : weight(10) { //Copy constructor
	std::cout << "Copy constructor invocation ! " << std::endl;
	name = new char[strlen(cat.name) + 1];
	strcpy(name, cat.name);
}

My_cat::~My_cat() {		//Destructor
	if (name) delete[] name;
}

int& My_cat::eat(int w) {
	weight += w;
	return weight;
}
//eat �Լ��� �����ϼ���.
void My_cat::show_status() const {
	std::cout << " Weight : " << weight << std::endl;
}
int main() {
	My_cat cat1("Nabi");	//Cat 1 ����
	cat1.show_status();

	cat1.eat(4);
	cat1.show_status();

	cat1.eat(4);
	cat1.show_status();

	cat1.eat(4).eat(5).eat(6); //hint: �̷� ������ ���� ������ ���ؼ��� this Ű����� ���۷��� Ȱ���� �䱸��
	cat1.show_status();

	getchar();
	return 0;
}