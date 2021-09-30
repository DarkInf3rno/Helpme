//header file date.hpp to declare your class
class Date {
    public: 


//Constructor Functions
        Date(int month, int day); 
        Date(int month);
        Date();
        Date(bool appointed[48]);
//Member functions
        void setDate(int amonth, int aday);
        void setAppointment(bool *&appointed);
        void input();
        void output(std::ostream& outs);
        int getDay();
        int getMonth();
        void printAppointedTimeSlots();
        void printFreeTimeSlots();
        friend bool equal (const Date date1, const Date date2); 
        void DateInitializer(Date sampleMonth[], int startDay, int endDay, int monthNumber);
//Private Section.
  //Includes the following member variables
    //Month - Refers to the month number. september is 10, october is 11 etc. 
    //day- Refers to the day of the month. Dependant upon the month. 
    private:
        //Month - Refers to the month number. september is 10, october is 11 etc. 
          int month; 
        //day- Refers to the day of the month. Dependant upon the month. 
          int day;
        //Array of appointed values is indicative of the appointments booked. 
          bool appointed[48];
          
          void printDays();
          void isValid();
          void isWeekend();
          void isHoliday() ;
          
         
};  

//Date constructor takes in the month and a day to create a new structure with a user input day and month.
 /*       Date::Date(int amonth, int aday) {

          month = amonth;
          day = aday; 

        }

        Date::Date() {

          month = 0; 
          day = 0; 

        }
        Date::Date(int bmonth) {

          month = bmonth; 
          day = 0; 

        }
//Returns the day
        int Date::getDay() {

          return day; 
          
        }
//Returns month
        int Date::getMonth() {

          return month;

        }

      void Date::setDate(int amonth, int aday) {

        month = amonth;
        day = aday;  

      }

    //september
    //This should go in 
    Date septDates[22];
    void septDateInitializer() {

      for(int i=0; i <= 22; i++) {

        septDates[i] = Date(10, 8+i); 

      }
  }
    
Use friend function to add an equal function for two Date objects: Test whether two
dates are the same based on the month and day, not including the appointed array. When
implementing the friend function, make the function arguments as const parameters. Use
the const variable holidays and equal function to implement the isHoliday member
function in the Date class.

Use const variables to define the three holidays: National Day for Truth and
Reconciliation (Sept 30), Thanksgiving Day (Oct 11), and Remembrance Day (Nov 11).


      */

  /*    void set_time(bool appointed_time[48]) {



      } */
      


 /*     void Date::setDate(int new_month, int new_day);
      // These two ints form a possible date
      // Then it is reset according to arguments

      int Date::get_month();
      // Returns the month

      int Date::get_day();
      // Returns the day of the month 

      void Date::set_time(bool appointed_time[48]); 
      // Pick an appointed time
      // Reset to the arguments

      Date::Date(int amonth, int aday) {
        this -> month = amonth;
        this -> day = aday;
      }
       
    

//For loop for september 8-30; */






  /*    char first_letter; // of month
        char second_letter // of month
        char third_letter // of month */

        //Can replace the char values with string types instead. I initialized the <string> library. On second thought we can just use the number of the month. So september is 10, october is 11 and so on and so forth. 
//};


