#include<iostream>
using namespace std;
class Circle
{
	public:
 //   private:
        double radius;
    public:
        double  compute_area()
        {
            return 3.14*radius*radius;
        }
     
};
int main()
{
    Circle c1;
    c1.radius = 5.5;   
    cout << "Radius is: " << c1.radius <<endl;
    cout << "Area is: " << c1.compute_area()<<endl;
    return 0;
}
//here it is define public class means that it can
// access the data members outside the class.
// now if i make the data member private it will through the error 
// the solution to this is in private.cpp.
