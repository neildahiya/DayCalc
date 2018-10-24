#include <iostream>
#include <math.h>
using namespace std;

int main(){

int date,month,year;
int k,f,m,D,C,r;
cout <<"Whats the date(1-31)?"<<endl;
cin >>date;
cout <<"What was the month(1-12)?"<<endl;
cin >>month;
cout <<"Whats the year(eg. 1998)"<<endl;
cin >>year;

k = date;
if(month==3||4||5||6||7||8||9||10||11||12){
    m = month-2;
}
if(month==1){
    m = 11;
}
if(month==2){
    m = 12;
}

D=year%100;
C = floor(year/100);
/*cout<<C<<endl;
cout<<D<<endl;
cout<<m<<endl;
cout<<k<<endl;
*/

f = floor(k + floor((13*m-1)/5) + D + floor(D/4) + floor(C/4) - 2*C);
//cout<<f<<endl;

if(f>=0){
f = f%7;

switch(f){
    case 0: cout<<"Sunday"<<endl;
            break;
    case 1: cout<<"Monday"<<endl;
            break;
    case 2: cout<<"Tuesday"<<endl;
            break;
    case 3: cout<<"Wed"<<endl;
            break;
    case 4: cout<<"Thursday"<<endl;
            break;
    case 5: cout<<"Friday"<<endl;
            break;
    case 6: cout<<"Saturday"<<endl;
            break;
    default: cout<<"Error"<<endl;
}
}
if(f<0){
    f = -f;
    r = 7-(f%7);
    cout<<"f is "<<f<<endl;
    cout<<"r is "<<r<<endl;

    switch(r){
    case 0: cout<<"Sunday"<<endl;
            break;
    case 1: cout<<"Monday"<<endl;
            break;
    case 2: cout<<"Tuesday"<<endl;
            break;
    case 3: cout<<"Wed"<<endl;
            break;
    case 4: cout<<"Thursday"<<endl;
            break;
    case 5: cout<<"Friday"<<endl;
            break;
    case 6: cout<<"Saturday"<<endl;
            break;
    default: cout<<"Error"<<endl;
}
return 0;

}}
