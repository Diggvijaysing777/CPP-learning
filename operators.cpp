OPERATORS
Q1 WAP TO TAKE TWO NUMBRES AS IMPUT AND PERFORM ADDITON SUBSTRACTION , MULTIPLICATION  AND DIVISION  
ADDITION
#include<iostream>
using namespace std ;
int main(){
    int a , b ;
    cout<<"enter a";
    cin >> a ;
    cout << "enter b";
    cin >> b ;
    int sum = a+b;
    cout << sum ;
    return 0;
}
SUBSTRACTION
#include <iostream>
int main(){
    int a , b ;
    std::cout << "enter a";
    std::cin >> a;
    std::cout << "enter b "; 
    std::cin >> b;
    int subs = a-b;
    std::cout << subs ;
    return 0;
}
MULTIPLICATION
#include <iostream>
using namespace std ;
int main(){
    int a,b ;
    std::cout<<"enter a";
    std::cin>>a;
    std::cout<<"enter b";
    std::cin>>b;
    int mult = a*b;
    std::cout<<mult;
    return 0;

}
DIVISION
#include<iostream>
using namespace std;
int main(){
   double a,b ;
    std::cout<<"enter a ";
    std::cin>>a;
    std::cout<<"enter b";
    std::cin>>b;
 double div = a/b;
    std::cout<<div;
    return 0;
}
WAP to find remainder when one number is divides by other 
#include<iostream>
using namespace std;
int main(){
   int a , b;
   cout << "enter a";
   cin >> a;
   cout << "enter b";
   cin >> b;
   int remainder = a % b;
   cout << remainder;
   return 0;
}
WAP TO FIND WHEATHER NUMBER IS ODD OR EVEN 
#include <iostream>
using namespace std ;
int main (){
   int a ;
   cout << "enter your number ";
   cin >> a ;
if ( a % 2 == 0 ){
   cout << "number is odd";
}else{
   cout << " number is even";
}
return 0 ;
}
wap to find the greater of two number
#include<iostream>
using namespace std;
int main (){
   int a , b ;
   cout << "enter first number ";
   cin >> a ;
   cout << "enter 2nd number";
   cin >> b ;
   if (a > b  ){
      cout << "greater no is  "<< a ;
   }else{
      cout << "greater no is "<< b ;
   }
   return 0 ;
}
wap take three numbers as input and print their average 
#include <iostream>
using namespace std;
int main(){
int a , b , c ;
cout << "ENTER THREE NO";
cin >> a >> b >> c ;
int sum = a + b + c ;
int avg =  sum / 3 ;
cout << avg ;
return 0 ;
}
take name and age of user as input and print name = , age =
#include <iostream>
#include <string>
using namespace std ;
int main (){
 string name ;
 int age ;
 cout << " enter name ";
cin >> name ;
cout << "enter age";
cin >> age ; 
cout << "name = "<< name << "\n";
cout << "age = "<< age ;
return 0 ;
}
SWAPING THE VALUES 
#include <iostream>
using namespace std;
int main (){
   int a , b ;
   cout << "enter a";
   cin >> a;
   cout << "enter b";
   cin >> b;
   int temp = a ;
   a = b;
   b = temp;
   cout << "a = "<< a << " b = "<< b ;

   return 0 ;
}