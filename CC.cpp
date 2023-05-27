#include <iostream>
#include <cstring>
using namespace std;

 
class A
{

private:
char *c;

public:
A (const char *c)
  {
    
cout << "constructor A" << endl;
    
this->c = new char[strlen (c) + 1];
    
strcpy (this->c, c);
  
} 
    /*   
       A(const A &a) {
       cout << "copy constructor A" << endl;     
       c = new char[strlen(a.c) + 1];
       strcpy(c, a.c);
       } */ 
  
void display ()
  {
    
cout << c << endl;
  } 
~A ()
  {
    
cout << "destructor A" << endl;
    
delete[]c;

} 
};


int
main ()
{
  
A a ("test");
  
  {
    
A b = a;
  
} 
a.display ();
  
return 0;

}
