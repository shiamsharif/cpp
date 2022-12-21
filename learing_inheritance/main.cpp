#include "iostream"

using namespace std;

class GrandParent {
   
public:

    static int c;

    static void anotherPrint() 
    {
        printf("%d\n", c);
    }

    void setC(int c) {
        this->c = c;
    }

    void printC () {
        printf("%d\n", c);
    }

};

int GrandParent::c = 0;


class Parent : public GrandParent{
    int a;

public:
    void print() {
        printf("I am from Parent\n");
    }

    void setA (int a) {
        this->a = a;
    }

    void printA () {
        printf("%d\n", a);
    }

    void printC () {
        printf("%d\n", GrandParent::c);
    }
};

class Child: public Parent {
    int b;

public:
    void print()
    {
        GrandParent::anotherPrint();
        printf("I am from Child\n");
    }

    void setC() {
        GrandParent::c = 10;
    }

    void incC() {
        GrandParent::c += 10;
    }
};


int main() {
    // Store in stack
    GrandParent parent = GrandParent();
    GrandParent anotherParent = GrandParent();
    
    parent.printC();

    parent.setC(300);
    
    anotherParent.printC();

    anotherParent.setC(1000);
    
    GrandParent::anotherPrint();
    
    // parent.anotherPrint();

    // Stored in Heap
    // Child* child;
    // child = new Child();
    // child->print();

    return 0;
}