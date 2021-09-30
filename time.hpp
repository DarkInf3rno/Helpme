//header file time.hpp to declare your class
//Use this command to debug
// g++ -c time.hpp 

/*Notes for tomorrow 

      - Recall that 60 min and 30 min increments can be described in terms of 100 point scale. 0.6*100 is 60 and similarly 0.6*50 is 30. Hence by using a factor of 0.6, we can convert between using a 60 point scale for human use and a 100 point scale for computer use

      - Complete the functions. Diagnose the issues with cin and cout not being recognized. Could be an issue with cout and cin being in the .hpp file

      - See date.cpp and how they use the THIS -> operator. Replicate that in this .h file to make sure that any computer will understand It

      - 

    - 



*/
#include <iostream>
using namespace std; 

class TimeRange {

    public: 

        int b; 

        //Functions 
          //Constructors
            TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute);
            TimeRange();
          //Function functions

          void getTimeRange(); //Gets the time range from the class

            //Functions to help getTimeRange. Also provide more precision
                void input();
                void input(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute); 
                void output();
                int getBeginMin(); 
                int getBeginHour(); 

                int getEndMin(); 
                int getEndHour();

                bool isValid(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute);
            //;c

            void setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute); //Sets the desired time range

             

     private: 
        int beginHour;
        int beginMinute;

        int endHour;
        int endMinute; 

};

/*          void TimeRange::setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {
              
             // int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute

              if (isValid(inBeginHour, inBeginMinute, inEndHour, inEndMinute)) {
                
              beginHour = inBeginHour; 
              beginMinute = inBeginMinute;

              endHour = inEndHour; 
              endMinute = inEndMinute;

              }  
          }

          TimeRange::TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour;
              beginMinute = inBeginMinute;
              endHour = inEndHour; 
              endMinute = inEndMinute; 

              cout << "lets be a potato";

          }

          void TimeRange::getTimeRange() {
            
              getBeginMin();
              getBeginHour();
              getEndHour();
              getEndMin(); 
              
          }

          int TimeRange::getBeginMin() {
      
              return this -> beginMinute; 

          }
          
          int TimeRange::getBeginHour() {

              return this -> beginHour; 
           
          }

          int TimeRange::getEndMin() {

              return this -> endMinute; 

          }
                
          int TimeRange::getEndHour() {

              return this -> endHour; 

          }

          bool TimeRange::isValid(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

            //Each variable must be less than or equal to 60 and be greater than or equal to 0. Must be multiples of 30, ie 0.6*50. 
            //Conditions. Modulus of (inBeginTime/0.6)%50 must be 0. 

              if ((inBeginMinute == 0) || (inBeginMinute==30) && (inEndMinute ==0) || (inEndMinute==30)) {
              
              return true; 
                
              } else {return false;}

          }

  */        




/*[2.5 marks] Implement the TimeRange class. It should have four member variables:
beginHour and beginMinute, endHour and endMinute, all of which are int type. - Done 
Implement the constructor function(s), get and set functions, and output function to print
out the class information. Similarly, implement member function isValid to check if the
user input beginning time and end time are a multiple of 30 minutes and fall within the
valid time range as described in our assumptions.
3) Use const variables to define the three holidays: */

