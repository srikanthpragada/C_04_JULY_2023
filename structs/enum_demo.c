
enum week  {
   MON, TUE, WED, THU, FRI, SAT, SUN
};

enum paymode {
    CASH = 100, CARD, NEFT, UPI
};

struct payment {
   int amount;
   enum paymode mode;
};

main()
{
   enum week workday = MON;
   enum paymode payment;


   payment = UPI;
   printf("%d", payment);


   workday = SAT;

   if(workday == SUN)
   {


   }


}
