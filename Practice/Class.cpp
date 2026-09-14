
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
};

int main() {
    Employee employee1;
    employee1.Name = "Yuvraj Singh";
    employee1.Company = "YouTube";
    employee1.Age = 25;
    employee1.introduceYourSelf();

    cout << "==================================" << endl;

    Employee employee2;
    employee2.Name = "Satinderpal Singh";
    employee2.Company = "Satinder Mec";
    employee2.Age = 24;
    employee2.introduceYourSelf();

    cout << "==================================" << endl;

    Employee employee3;
    employee3.Name = "Jasspreet  Singh";
    employee3.Company = "Jass Solutions";
    employee3.Age = 24;
    employee3.introduceYourSelf();
    

    return 0;
}