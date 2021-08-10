#include<iostream>
#include<string>

using namespace std;



class student{
    private:
        int age;
        string name;
        bool gender;
    public:
        void setName(string s){
            name=s;
        }
        void setAge(int n){
            age=n;
        }
        void setGender(bool b){
            gender=b;
        }

        student(){
            name="";
            age=0;
            gender =0;
        }// this is a default constructor as there are no values are passed in the parameter
        /*
        If i comment this the invocation of the student object s1 , will fail , as there is a parametrized constructor present but not the default constrauctor. 

        so at the time of intitialization o th object i.e student s1, it fails to get the value from the default constructor, so it shows a error "no default constructor exists for class "student".
        */
        
        student(string s, int n, bool b){
            cout<<"parametrized Constructor invoked"<<endl;
            name=s;
            age=n;
            gender=b;
        }// this is a parametrized constructor

        student(student &a){
            cout<<"this is copy constructer being invoked"<<endl;
            name=a.name;
            age=a.age;
            gender=a.gender;
        }//copy constructor being invoked , which does DEEP COPY , unlike default copy constructor which does shallo copy

        void printInfo(){
            cout<<"Name :- "<<name<<endl;
            cout<<"Age :- "<<age<<endl;
            cout<<"Gender :- "<<gender<<endl;
        }

        ~student(){
            cout<<"destructor is being invoked "<<endl;
        }// this is a destructor

        bool operator ==(student &a){
            if(name==a.name && age==a.age && gender==a.gender){
                return true;

            }
            else
            {
                return false;
            }
            
        }// this function is called operator overloading
};

int main(){
    student s1;
    // s1.printInfo();

    
    student s2(s1);
    
    s1.setName("pranshu sharma");
    s1.setGender(0);
    s1.setAge(25);

    s2.printInfo();

    if(s2 == s1){
        cout<<"both objects are same"<<endl;
    }
    else
    {
        cout<<"both the objects are different"<<endl;
    }
    
    
    return 0;
}