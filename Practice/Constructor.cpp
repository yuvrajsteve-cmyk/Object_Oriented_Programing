
#include <iostream>
using namespace std;

class Employee {
    public:
        string Name;
        string Company;
        int Age;
    
    void introduceYourSelf() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("Yuvraj Singh", "YouTube", 25);
    employee1.introduceYourSelf();

    cout << "==================================" << endl;

    Employee employee2 = Employee("Satinderpal Singh", "Satinder Mec", 24);
    employee2.introduceYourSelf();

    cout << "==================================" << endl;

    Employee employee3 = Employee("Jasspreet Singh", "Jass Solutions", 24);
    employee3.introduceYourSelf();
    

    return 0;
}