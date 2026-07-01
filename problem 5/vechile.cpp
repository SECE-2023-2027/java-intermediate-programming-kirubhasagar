#include<iostream>
using namespace std;
class Vechile{
    public:
      virtual string startEngine(){
         return "Vechile engine started";
      }
};

class Car: public Vechile{
    public:
      string startEngine() override{
         return "Car engine started";
      }
};

class Motorcycle: public Vechile{
    public:
      string startEngine() override{
         return "Motorcycle engine started";
      }
};

int main(){
    Vechile *v1 = new Car();
    Vechile *v2 = new Motorcycle();

    cout << v1->startEngine() << endl;
    cout << v2->startEngine() << endl;

}
