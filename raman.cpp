#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
int main()
{
 
 int x,y;
 cout<<"Enter any two integers"<<endl;
 cout<<"the width x = "<<endl;
 cin>>x;
 cout<<"the height y = "<<endl;
 cin>>y;
 
 auto z=sqrt(pow(x,2)+pow(y,2));

 cout<<"The third side = "<<z<<endl;
 std::ofstream myfile;
 myfile.open ("example.txt");
if (myfile<<" Your triangle has three sides that are "<<x<<"  "<<y<< " and"<<z);
 myfile.close();

 return 0;
}