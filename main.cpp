#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Id {
private:
    static int lastid;
    int id;
public:
    Id() : id(lastid++) {}
    const int getId() const {
        return id;
    }
};
template <typename T>
int Id<T>::lastid = 0;

class Person{
private:
    string name;
    int age;
public:
    virtual void display(){
        cout<<name<<" "<<age;
    }
    const void setName(const string name_){
        name = name_;
    }
    const void setAge(const int age_){
        age = age_;
    }

    const string getName(){
        return name;
    }
    const int getAge(){
        return age;
    }

    virtual ~Person();
};

class Fotbalist : public Person, public Id<Fotbalist>{
private:
    string pozitie;
public:
    void display(){
        Person::display();
        cout<<pozitie;
    }
    const void setPoz(const string pozitie){
        this->pozitie = pozitie;
    }
    const string getPoz(){
        return pozitie;
    }
    ~Fotbalist(){}
};

class Baschetbalist : public Person, public Id<Baschetbalist>{
private:
    int aruncaricos;
public:
    const void setAruncari(const int aruncaricos){
        this->aruncaricos = aruncaricos;
    }
    const int getAruncari(){
        return aruncaricos;
    }
    ~Baschetbalist(){}
};

int main() {

    return 0;
}