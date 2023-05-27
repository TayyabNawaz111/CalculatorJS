#include <iostream>
#include <string>

 using namespace std;

 
class Book
{

private:
string bookTitle;
  
double price;

 
public:
 
Book ()
  {
  };
  
 
Book (string t, float p)
  {
    
bookTitle = t;
    
price = p;
  
} 
 
void setName (string bookName)
  {
    bookTitle = bookName;
  } 
 
void setPrice (double cost)
  {
    price = cost;
  } 
 
string getName ()
  {
    return bookTitle;
  }
  
 
double getPrice ()
  {
    return price;
  }

};


 
const int BOOK_QTY = 3;

int
main ()
{
  
Book bookCollection[BOOK_QTY] =
  {
  
Book ("C++", 12.25), 
Book ("The Iron Man", 18.99), 
Book ("OOP in C++",
								11.99)};
  
 
    // example calling an object's function
    bookCollection[1].setPrice (17.75);
  
 
cout << "Book Title::Price" << endl;
  
cout << "=================" << endl;
  
 
for (int i = 0; i < BOOK_QTY; i++)
    {
      
cout << bookCollection[i].getName () << "::";
      
cout << bookCollection[i].getPrice () << endl;

} 
}
