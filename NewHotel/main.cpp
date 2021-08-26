#include <iostream>
#include "room.h"
#include "guest.h"
#include <string>
#include <list>

using namespace std;

int spa(int costOfNights,int Spa);
int dry(int NightsSpa,int dryClean);

int main()
{
    int StatusVar=-1, TypeVar=-1,idVar=0, NumberOfDaysVar=0,spaVar=0,totalCost=0, NightsSpa =0 ;
    int NumberOfRoomMonster=2, NumberOfRoomHuman=1,i=0;
    int costOfNights=0;
    int Spa=0, dryClean=0;
    std::string NameVar ;
    //declare array list guests
   //list<guest>guests;
    cout << "Hello world in my hotel " << endl;
    room room1;
    guest guest1;
    cout << "if you are new enter 1"<<endl;
    cout << "if you are old enter 0"<<endl;
    cin >> StatusVar;
    guest1.setstatus(StatusVar);
    //******************************************************************************************************************************
    if(guest1.getstatus()==1) //new guest
    {
     cout<<"Please enter the type of room you want (0) monister or (1) human"  <<endl;
     cin>> TypeVar;
     room1.settype(TypeVar);
     //*********************************************************************************************************************************
     if(room1.gettype()==0)//0 for monister 1 for human
     {
         cout<<"please enter your name"<<endl;
         cin>> NameVar;
         guest1.setname(NameVar);
         i++;
         guest1.setid(i);
         guest1.setRoomID(0);
         //store guest1 in array list
         cout<<"please enter number of days you want "<<endl;
         cin>> NumberOfDaysVar;
         room1.setcostPerNight(200);
        room1.setSpa(50);
        room1.setdryClean(30);
         costOfNights=NumberOfDaysVar*room1.getcostPerNight();
             cout<<costOfNights<<endl;
         NightsSpa=spa(costOfNights,50);
               cout<<NightsSpa<<endl;
         totalCost=dry(NightsSpa,30);
          cout<<totalCost<<endl;
         guest1.setTotalCost(totalCost);
         cout << guest1.getTotalCost() << endl;



     }
//****************************************************************************************************************************************
       else if (room1.gettype()==1) //human
       {
         cout<<"please enter your name"<<endl;
         cin>> NameVar;
         guest1.setname(NameVar);
          i++;
         guest1.setid(i);
         guest1.setRoomID(1);
         //store guest1 in array list
         cout<<"please enter number of days you want "<<endl;
         cin>> NumberOfDaysVar;

         room1.setcostPerNight(500);
         room1.setSpa(100);
         room1.setdryClean(70);

         costOfNights=NumberOfDaysVar*room1.getcostPerNight();
         cout<<costOfNights<<endl;
         NightsSpa=spa(costOfNights,100);
                  cout<<NightsSpa<<endl;
//or room1.getSpa();
         totalCost=dry(NightsSpa,70);
          cout<<totalCost<<endl;
         guest1.setTotalCost(totalCost);
         cout << guest1.getTotalCost() << endl;
         //number of days * room1. get cost pernight =cost of night
         //print do you want spa 1 or not 0
         //same in dryclean
       }
//****************************************************************************************************
    }
    /*
    else if (guest1.getstatus()==0)//old //
    {
       cout<< "enter the ID"<<endl;
       cin>> idVar ;
       //search using for loop in array list with id
       //if the id found so he is old
       // if not so register
        cout<<"please enter number of days you want "<<endl;
        cin>> NumberOfDaysVar;
    }
    */
    /*
    else  //cancel
    {
        room1.Remove(room1);
        guest1.Remove(guest1);
        cout << room1.gettype() << endl;

    }
    */
    //cout << room1.getcostPerNight() << endl;
    //cout <<guest1.getid() << endl;
    //cout << room1.gettype() << endl;
    //cout << guest1.getname() << endl;
    return 0;
}

int spa(int costOfNights,int Spa)
{
    int spaVar,NightsSpa;
    cout<<"if you want spa please enter 1 else enter 0"<<endl;
    cin>>spaVar;
            if (spaVar==1)
             {
               NightsSpa=costOfNights+Spa;
             }
             else if (spaVar==0)
             {
                 NightsSpa=costOfNights;
             }
             else
             {
                 cout<<"wrong number"<<endl;
             }
             return NightsSpa;
}

int dry(int NightsSpa,int dryClean)
{
    int dryVar,totalcost;
     cout<<"if you want dryclean please enter 1 else enter 0"<<endl;
     cin>>dryVar;
             if (dryVar==1)
             {
               totalcost=NightsSpa+dryClean;
             }
             else if (dryVar==0)
             {
                 totalcost=NightsSpa;
             }
             else
             {
                 cout<<"wrong number"<<endl;
             }
             return totalcost;

}

