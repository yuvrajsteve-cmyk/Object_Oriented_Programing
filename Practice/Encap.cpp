// setters and getters 



#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name) {
            Name = name;
        }
        string getName() {
            return Name;
        }

        void setCompany(string company) {
            Company = company;
        }
        string getCompany() {
            return Company;
        }

        void setAge(int age) {
            Age = age;
        }
        int getAge() {
            return Age;
        }


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

    Employee employee2 = Employee("Satinderpal Singh", "Satinder Mec", 24);
    
    Employee employee3 = Employee("Jasspreet Singh", "Jass Solutions", 24);
    

   


    employee1.setAge(25);
    cout << employee1.getName() << " is " << employee1.getAge() << " Years old" << " and his company is " << employee1.getCompany() << endl;
    
    cout << "===============================================================================================================================" << endl;

    employee2.setAge(24);
    cout << employee2.getName() << " is " << employee2.getAge() << " years old " << " and his company is " << employee2.getCompany() << endl;

    cout << "================================================================================================================================" << endl;

    employee3.setAge(24);
    cout << employee3.getName() << " is " << employee3.getAge() << " years old " << " and his company is " << employee3.getCompany() << endl;
 
    cout << "===============================================================================================================================" << endl;
    return 0;
}