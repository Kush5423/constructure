#include<iostream>
using namespace std;
class dateiii
{
    int date;
    int month;
    int year;
    public:
   dateiii()
   {
    
    cout<<"enter date,month and year"<<endl;
    cin>>date;
    cin>>month;
    cin>>year;

   }
   void leap_year()
   {
   if((year % 100 != 0) && (year % 4 == 0) || (year % 400 == 0))
   cout<<"leap year"<<endl;
   else 
   cout<<"not a leap year"<<endl;
   }
   void dob()
   {
    int date1;
    int month1;
    int year1;
    cout<<"enter date of birth"<<endl;
    cin>>date1;
    cin>>month1;
    cin>>year1;

    int mont[] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
    if (date1 > date) 
    {
        date= date + mont[month1 - 1];
        month = month - 1;
    }
    else if (month1 > month) 
    {
        year = year - 1;
        month = month + 12;
    }
    int date2 = date - date1;
    int month2 = month - month1;
    int year2 = year - year1;
    cout<<" Age is-" <<year2<< " years " << month2 << " months and " << "days-"<< date2;
   }
    
    
};
 int main()
    {
        dateiii d1 ;
        d1.leap_year();
        d1.dob();




    return 0;

    }