// CPP program to print details of employees 
// using Structure
#include <iostream>
using namespace std;
struct employee {
   int empId;
   string name;
   int age;
   string phone_number;
   int salary;
};
void displayDeitals(struct employee emp[], int n) {
   cout<<"\n\n --- Employee "<<n+1<<" ---- \n";
   cout<<"Employee ID: "<<emp[n].empId<<endl;
   cout<<"Employee name: "<<emp[n].name<<endl;
   cout<<"Employee age:"<<emp[n].age<<endl;
   cout<<"Employee phone number: "<<emp[n].phone_number<<endl;
   cout<<"Employee salary : "<<emp[n].salary<<endl;
}
int main() {
   int n = 3;
   struct employee emp[4];
   emp[0].empId = 0121;
   emp[0].name = "Nupur";
   emp[0].age = 22;
   emp[0].phone_number = "942135439";
   emp[0].salary = 100000;
   emp[1].empId = 0322;
   emp[1].name = "Ramesh";
   emp[1].age = 41;
   emp[1].phone_number = "908564363";
   emp[1].salary = 50000;
   emp[2].empId = 023;
   emp[2].name = "Yash";
   emp[2].age = 45;
   emp[2].phone_number = "943299231";
   emp[2].salary = 250000;
   emp[3].empId = 0112;
   emp[3].name = "Zarin";
   emp[3].age = 35;
   emp[3].phone_number = "796892522";
   emp[3].salary = 300000;
   for(int i= 0; i<=n; i++)
   displayDeitals(emp, i);
   return 0;
}
