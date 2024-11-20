#include <iostream>
using namespace std;

class Animal {
public:

    virtual void speak() const = 0;
    virtual ~Animal() = default; 
};


class Dog : public Animal {
public:

    void speak() const override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    
    void speak() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    
    Animal* dog = new Dog();
    Animal* cat = new Cat();

 
    cout << "Dog says: ";
    dog->speak();

    cout << "Cat says: ";
    cat->speak();


    delete dog;
    delete cat;
}
