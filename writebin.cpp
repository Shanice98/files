#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   ofstream myfile{"abc.bin", ios::binary};

   if (myfile)
      {
       //display data to binary file (i.e. as formatted chars)

       myfile.write(reinterpret_cast<char*>(&a), sizeof(a));
       
       myfile.write(reinterpret_cast<char*>(&b), sizeof(b));

       myfile.write(reinterpret_cast<char*>(&c), sizeof(c));
      }
   else
     
      cout << "Error opening abc.bin"<<endl;
   myfile.close();
      
 
   return 0;
}//b6 e5 fa 3e 88 42 4a
