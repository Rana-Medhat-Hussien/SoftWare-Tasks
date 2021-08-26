#ifndef GUEST_H
#define GUEST_H
#include <string>



class guest
{
    public:
        guest();
        virtual ~guest();

    int getid() { return id; }
    std::string getname() { return name; }
    int getstatus()  { return status; }
    int getRoomID()  { return RoomID; }
    int getNumberOfDays()  { return NumberOfDays; }
    int getTotalCost()  { return TotalCost; }

    void setid(int ID)
    {
        id= ID;
    }

     void setname(std::string NAME)
    {
        name= NAME;
    }

     void setstatus(int STATUS)
    {
        status= STATUS;
    }

      void setRoomID(int ROOMID)
    {
        RoomID= ROOMID;
    }

      void setNumberOfDays(int NUMBEROFDAYS)
    {
        NumberOfDays= NUMBEROFDAYS;
    }

     void setTotalCost(int TotalCost)
    {
        TotalCost= TotalCost;
    }

       static void Remove (guest r1)
    {
        r1.setid(0);
        r1.setNumberOfDays(0);
        r1.setname("");
        r1.setRoomID(0);
        r1.setstatus(-1);
        r1.setTotalCost(0);
    }


    protected:

    private:
        int id;
        std::string name;
        int status;
        int RoomID;
        int NumberOfDays;
        int TotalCost;






};

#endif // GUEST_H

