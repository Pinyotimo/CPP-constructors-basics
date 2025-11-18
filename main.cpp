#include <iostream>
using std::string;

//creating a class
class Employee {
private:
    string Name;
    string Company;
    int Age;
    string Parent;

public:
    // Setters and Getters
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
        if (age >= 18)
            Age = age;
    }

    int getAge() {
        return Age;
    }

    void setParent(string parent) {
        Parent = parent;
    }

    string getParent() {
        return Parent;
    }

    // Method
    void IntroduceYourself() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
        std::cout << "Parent: " << Parent << std::endl;
        std::cout << "------------------------" << std::endl;
    }

    // Constructor
    Employee(string name, string company, int age, string parent) {
        Name = name;
        Company = company;
        Age = age;
        Parent = parent;
    }
};

int main() {

    Employee employee1("Steve", "CUK", 25, "Paul");
    employee1.IntroduceYourself();

    Employee employee2("Paul", "School", 50, "James");
    employee2.IntroduceYourself();

    // Test encapsulation
    employee1.setAge(15); // age < 18 ? should not change

    std::cout << employee1.getName() << " is "
              << employee1.getAge() << " years old." << std::endl;

    return 0;
}
