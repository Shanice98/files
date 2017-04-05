#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream myfile{"abc.txt"};

   if (myfile)
      {
       myfile <<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

       myfile <<endl<<endl;
      }
 com  else
     
      cout << "Error opening abc.txt"<<endl;
   myfile.close();
      
 
   return 0;
}
//2d 36 37 33 30 20 36 38 2e 31 32 33 20 4a a a
