/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

int main ()
 {
    int user_value = 0;
    while(user_value != 3)
    {
      cout << " 1 - Addition\n";
      cout << " 2 - Subtraction\n";
      cout << " 3 - Exit Program\n";     
      cout << "Insert a number: ";
      cin >> user_value;
      cin.ignore();            
      
       switch (user_value){
           case 1:
              cout << "eJPT Course\n";
              break;
           case 2:
              cout << "eCPPT Course\n";
              break;
       }
    }
    
    cout << "Bye";    
    cin.ignore();
	return 0;
 } 
 
 

