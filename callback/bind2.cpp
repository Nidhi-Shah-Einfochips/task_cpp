#include<iostream>
#include<functional>
using namespace std;
class Plus
{
   public:
   	int plus(int a,int b)
   	{
   	    return a+b;
   	}
}
int main()
{
   Plus p;
   
   auto func1 = std::bind(&Plus::plus,&p, placeholders::_1, placeholders::_2);
   auto func2 = std::bind(&Plus::plus,p, placeholders::_1, placeholders::_2);
   cout<<func1(1,2)<<endl; 
   cout<<func2(1,2)<<endl; 
   return 0;
}