#include <iostream>
using namespace std;
class Student {
   public:
   int rollno;
   char name[50];
   float marks;
   void display() {
      cout<<"Roll Number: "<< rollno <<endl;
      cout<<"Name: "<< name <<endl;
      cout<<"Marks: "<< marks <<endl;
   }
};
int main() {
   Student s1 = {1, "nidhi", 100};
   s1.display();
   return 0;
}
