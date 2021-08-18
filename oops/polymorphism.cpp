#include<iostream>

using namespace std;

//  for function overloading
class function_overloading{

    public:
        void func(){
            cout<<"this is for function overloading function func"<<endl;
        }

        void func(int a){
            cout<<"this is for function overloading function func(int a) " <<a<<endl;
        }
        void func(int a, int b){
            cout<<"this is for function overloading function func(int a , int b)"<<a<<" and "<<b<<endl;
        }
};


class operator_overloading{
    private:
        int real;
        int img;
    public:
        operator_overloading(){
            real = 0;
            img = 0;
        }
        operator_overloading( int a, int b){
            real = a;
            img = b;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        operator_overloading operator + (operator_overloading &obj){
            operator_overloading res;
            res.real = real + obj.real;
            res.img = img + obj.img;

            return res;
        }
};



class virtual_functions_parent{
    public:
        virtual void get(){
            cout<<"this is function get from class virtual_fuction_parent"<<endl;
        }
        void set(){
            cout<<"this is function get from class virtual_fuction_parent"<<endl;
        }
};


class virtual_functions_child : public virtual_functions_parent{
    public:
        void get(){
            cout<<"this is function get from class virtual_fuction_child"<<endl;
        }
        void set(){
            cout<<"this is function get from class virtual_fuction_child"<<endl;
        }
};

int main(){
// these are the examples of compile time polymorphism
    function_overloading obj;
    obj.func();
    obj.func(3);
    obj.func(5,6);


    operator_overloading a(2,3);
    operator_overloading b(4,5);

    operator_overloading r = a+b;
    r.display();


// this is the example of the commplie time polymorphism

    virtual_functions_parent *ptr ;
    virtual_functions_child obj1;

    ptr = &obj1;

    ptr -> get();

    ptr -> set();
    return 0;
}