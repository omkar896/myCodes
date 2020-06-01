#include <iostream>
#include <string.h>
using namespace std;

class abc{
	int stud_id;
	char name[20];
	float salary;

	public:
	abc(){
		stud_id = 0;
		strcpy(name,"abc");
		salary = 0.0;	
	}
	
	abc(int a, char *nm, float sl){
		stud_id	= a;
		strcpy(name , nm);
		salary = sl;
	}
	void display();	
};
	void abc::display(void){
	cout << "Name :" << name << endl;
	cout << "id :"<< stud_id << endl;
	cout << "salary :"<< salary << endl;
	}

int main(){
	cout<< "hello world..."<< endl;
	abc a;
	a.display();
	cout << "end of default constructor" << endl;
	abc b(10, "omakra", 78000.10);
	b.display();
	return 0;
}
