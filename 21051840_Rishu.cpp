#include <iostream>
using namespace std;

// base class 
class UniversityClass
{
    public:
    string name;
    int roll_no;
    int age;
    string course;
    string branch;

    UniversityClass(string name, int roll_no, int age, string course, string branch)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->age = age;
        this->course = course;
        this->branch = branch;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Branch: " << branch << endl;
    }

    ~UniversityClass()
    {
        cout << "Destructor called" << endl;
    }

};


// derived class
class Library : public UniversityClass
{
    public:
    int book_id;
    string book_name;
    string author_name;
    int price;

    Library(int book_id, string book_name, string author_name, int price , string name, int roll_no, int age, string course, string branch) : UniversityClass(name, roll_no, age, course, branch)
    {
        this->book_id = book_id;
        this->book_name = book_name;
        this->author_name = author_name;
        this->price = price;
    }

    void display()
    {
        UniversityClass::display();
        cout << "Book ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }

    // friend function
    friend void display(Library &l);

    // static member function
    static void display_static()
    {
        cout << "Static member function called" << endl;
    }

    static int count;   // static data member

    // inline function
    inline void display_inline()
    {
        cout << "Inline function called" << endl;
    }

    // function overloading
    void display(int a)
    {
        cout << "Function overloading called" << endl;
    }

    // function overriding
    void display_overriding()
    {
        cout << "Function overriding called" << endl;
    }


    // operator overloading
    void operator + (Library &l)
    {
        cout << "Operator overloading called" << endl;
    }

    ~Library()
    {
        cout << "Destructor called" << endl;
    }

};


// friend function
void display(Library &l)
{
    cout << "Friend function called" << endl;
}   


int Library::count = 0;   // static data member



int main()
{
    Library l(1, "C++", "Rishu", 100, "Rishu", 1, 20, "B.Tech", "CSE");
    l.display();
    display(l);
    Library::display_static();
    l.display_inline();
    l.display(1);
    l.display_overriding();
    Library l1(2, "Java", "Rishu", 100, "Rishu", 1, 20, "B.Tech", "CSE");
    l + l1;
    return 0;
}
