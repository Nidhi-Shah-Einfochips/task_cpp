#include<iostream>
using namespace std;
int main() 
{
       int rows, cols;
cout<<"rows and cols";
 cin>>rows>>cols;	
   int **ptr=new int*[rows];
   for(int i=0;i<rows;i++){
         ptr[i]=new int[cols];
   }
   for(int i =0;i<rows;i++)
   {
	   for(int j=0;j<cols;j++)
	   {
		   cin>>ptr[i][j];
	   }
	   cout<<endl;

   }
   cout<<endl;
   for(int i =0;i<rows;i++)
   {
           for(int j=0;j<cols;j++)
           {
                   cout<<ptr[i][j];
           }
	   cout<<endl;
   }
   cout<<endl;



    for(int i=0;i<rows;i++){
	    delete[] ptr[i];

   }
   delete []ptr;
   return 0;

}
