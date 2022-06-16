
#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;
    string color;
public:
    Animal() {
        name = "";
        age = 0;
        color = "";
    }
    Animal(string name, int age, string color) {
        this->age = age;
        this->color = color;
        this->name = name;
    }
    virtual void print() = 0;
    ~Animal() {

    }
};

class Tiger : public Animal {
    int speed;
public:
    Tiger(): Animal() {
        speed = 0;
    }
    Tiger(string name, int age, string color, int speed) : Animal(name, age, color) {
        this->speed = speed;
    }
    void print() override {
        cout << name << "\t" << age << "\t" << color << "\t" << speed << endl;
    }
    ~Tiger() {

    }
};

class Snake: public Animal {
    int length;
public:
    Snake() :Animal() {
        length = 0;
    }
    Snake(string name, int age, string color, int length) : Animal(name, age, color) {
        this->length = length;
    }
    void print() override {
        cout << name << "\t" << age << "\t" << color << "\t" << length << endl;
    }
    ~Snake() {

    }
};

int main()
{
    Tiger A("Leva", 15, "Green", 40);
    A.print();
    Snake B("Kaa", 35, "Black", 125);
    B.print();
}

