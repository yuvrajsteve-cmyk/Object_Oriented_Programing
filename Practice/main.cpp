#include <iostream>

class Entity
{
public:
  const char *name;

  void printName()
  {
    std::cout << name << "\n";
  }
};

class Entity2 : public Entity
{
public:
  const char *stduent;

  void printStudent()
  {
    std::cout << stduent << "\n";
  }
};

class Student : public Entity2
{
public:
  const char *stream;

  void printStream()
  {
    std::cout << stream << "\n";
  }
};

class Teacher : public Student
{
public:
  const char *teacherName;

  void printTeacher()
  {
    std::cout << teacherName << std::endl;
  }
};

int main()
{

  Entity entity;
  entity.name = "Yuvraj Singh";
  entity.printName();

  std::cout << "==============================================" "\n";

  Entity2 entity2;
  entity2.name = "Satinderpal Singh";
  entity2.printName();
  entity2.stduent = "Yes";
  entity2.printStudent();

  std::cout << "==============================================" "\n";

  Student student;
  student.name = "Jaskarn Singh";
  student.printName();
  student.stduent = "yes";
  student.printStudent();
  student.stream = "CSE";
  student.printStream();

  std::cout << "==============================================" "\n";

  Teacher teacher;
  teacher.name = "The Cherno";
  teacher.printName();
  teacher.stduent = "No";
  teacher.printStudent();
  teacher.stream = "C++";
  teacher.printStream();
  teacher.teacherName = "Master";
  teacher.printTeacher();

  return 0;
}