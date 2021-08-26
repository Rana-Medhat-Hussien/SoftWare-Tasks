#ifndef ROOM_H
#define ROOM_H


class room
{
    public:
        room();
        virtual ~room();

    int getcostPerNight() { return costPerNight; }
    int getdryClean() { return dryClean; }
    int getSpa()  { return Spa; }
    int gettype()  { return type; }


    void setcostPerNight(int COSTPERNIGHT)
    {
       costPerNight= COSTPERNIGHT;
    }

     void setdryClean(int DRYCLEAN)
    {
        dryClean= DRYCLEAN;
    }

     void setSpa(int SPA)
    {
         Spa= SPA;
    }

      void settype(int TYPE)
    {
        type= TYPE;
    }

        static void Remove (room r1)
    {
        r1.setcostPerNight(0);
        r1.setdryClean(0);
        r1.setSpa(0);
        r1.settype(-1);
    }



    protected:

    private:
        int costPerNight;
        int dryClean;
        int Spa;
        int type;




};

#endif // ROOM_H

