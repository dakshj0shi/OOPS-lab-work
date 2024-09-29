#include<iostream>
#include<string>
using namespace std;

class employee{
   string name;
   int emp_id;
   double salary;
   public: 
   Employee(){
    name="";
    emp_id=0;
    salary=0.0;
   }

   Employee(string name, int emp_id , double salary){
    this->name=name;
    this->emp_id=emp_id;
    this->salary=salary;
   }
   void calculate_Monthly_Pay(){

   }

};

class employee : public professor{
    
};

class AdminStaff : public professor{

};

class Janitor : public professor{

};

int main(){
    
}

