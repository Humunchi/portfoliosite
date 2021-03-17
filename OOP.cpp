#include <iostream>
using std::string;

class Employee{
private:
    string Name;
    string Company; //class vairbales are called members or attributes 
    int Age;
public:

    string getName() {
        return (Name);
    }
    string getCompany() {
        return (Company);
    }
    int getAge () {
        return (Age);
    }
    
    void setName(string newName) {
        Name = newName;
    }

    void setCompany(string newCompany) {
        Company = newCompany;
    }
    void setAge(int newAge){
        Age = newAge;
    }



    void IntroduceYourself(){ //class functions are methods.
        std::cout << "Name - " << getName() << std::endl  ;
        std::cout << "Company - " << getCompany() << std::endl ;
        std::cout << "Age -" << getAge() << std::endl ;
    }
};
int main ()
{
    Employee Humi;
    Humi.setName("Rehumile");
    employee1.setCompany("YT-Humunchi");
    employee1.setAge(24);
    employee1.IntroduceYourself();

    Employee Jono;
    employee2.setName("Jonathan");
    employee2.setCompany ("YT-Jonathan Pieczara");
    employee2.setAge(23);
    employee2.IntroduceYourself();
    
}
