// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<< "enter no ";
//     cin >> a;
//     if(a>0){
//         cout<<"number is positive";
//     }else if(a==0){
//         cout<<"number is zero";
//     }else{
//         cout<<"number is negative";
//     }
//     return 0;
// }
//input year check wheather year is leap year or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter the year";
    cin >> a;
    if (a % 4 == 0 ){
        cout << "year is leap year";
    }else{
        cout<< "Not leap year";
    }
    return 0;
}