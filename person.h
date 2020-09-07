#include <iostream>
using namespace std;

class Person {
    public:
        string firstName, lastName, address, phone;
        Person(){}
        Person(string fName, string lName, string address, string phone);
        
        void display();

        string getFirstName();
        string getLastName();
};

Person::Person(string fName, string lName, string address, string phone) {
    this->firstName = fName;
    this->lastName = lName;
    this->address = address;
    this->phone = phone;
}

void Person::display() {
    cout << "[ Name: " << this->firstName << " " << this->lastName;
    cout << ", Phone: " << this->phone;
    cout << " Address: " << this->address << " ]" << endl;
}