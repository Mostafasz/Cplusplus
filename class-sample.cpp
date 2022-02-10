#include<iostream>
using namespace std;
class Movie //without counstractor
{
public:
	string title, director;
	int sold;
	void introduceMovie()
	{
		cout << "the title is: " << title << endl;
		cout << "the director is: " << director << endl;
		cout << "it sold: " << sold << endl;
	}
};
class students // with counstrctors
{
public:
	string Name, Family;
	int Age;
	void introduceStudents()
	{
		cout << "the Name is: " << Name << endl;
		cout << "the Family is: " << Family << endl;
		cout << "it Age: " << Age << endl;
	}
	students(string name, string family, int age)
	{
		Name = name;
		Family = family;
		Age = age;
	}
};
int main()
{
	Movie movie1;
	movie1.title = "Adam";
	movie1.director = "John";
	movie1.sold = 500;
	movie1.introduceMovie();

	students student1 = students("Baran", "Soleim", 5);
	student1.introduceStudents();
	return 0;
}