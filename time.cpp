//time.cpp to implement your class
#include "time.hpp"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
   
         void TimeRange::setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {
              
             // int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute

              //if (isValid(inBeginHour, inBeginMinute, inEndHour, inEndMinute)) {
                
              beginHour = inBeginHour; 
              beginMinute = inBeginMinute;

              endHour = inEndHour; 
              endMinute = inEndMinute;
              
           

             //}  
          }
          
//Constructor Functions
          TimeRange::TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour;
              beginMinute = inBeginMinute;
              endHour = inEndHour; 
              endMinute = inEndMinute; 

          

          }


          TimeRange::TimeRange() {

              beginHour = 0;
              beginMinute = 0;
              endHour = 0; 
              endMinute = 0; 

          }



          void TimeRange::getTimeRange() {
            
              getBeginMin();
              getBeginHour();
              getEndHour();
              getEndMin(); 
              
          }



// Takes in the input for our time intervals
          void TimeRange::input() {

              cout << "Enter the hour of your beginning time: "; 
              cin >> beginHour;

              cout << endl << "Enter the minutes past the hour of your starting time time interval. For example if you want your start time to be 13:30, you would have selected 13 as the hour of your beginning time and would proceed to type 30 in the upcoming field: ";
              cin >> beginMinute;

              cout << endl << "Enter the hour of your ending time. Make sure the end time you have in mind is exactly 30 minutes from the start time: " << endl; 
              cin >> endHour;

              cout << endl << "Enter the minutes field of your endtime: ";
              cin >> endMinute;

              /*if (( (((endHour*60)+endMinute)-((beginHour*60)+beginMinute)) == 30 ) &&  ((endMinute == 30 || endMinute == 0)&&(beginMinute == 30 || beginMinute == 0)) ) {

                //if (isValid(beginHour, beginMinute, endHour, endMinute)) {

                  
                  cout << "Great you chose a valid time" << endl << endl;

              }
          
              else{

                cout << "The chosen timeslot is invalid.  Please try again. The time slot should be 30 minutes apart. Refer to the list of open time slots." << endl;

                 input();

              }*/
             
          }
// Checks if the time interval is valid, then it willl output the time.
          void TimeRange::output(){

               bool works = isValid(beginHour, beginMinute, endHour, endMinute);
              if (works == false) {
                exit(1);
              //  input();

              }
              if (works == true)  {
                setTimeRange(beginHour, beginMinute, endHour, endMinute);
              }

            
        
              cout << "Begin time: " << beginHour<< "hrs " << beginMinute << "mins" << endl << "End time: " << endHour <<"hrs "<< endMinute << "mins" << endl;

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

// This function checks if the time ranges that were entered equal to 30 when subtracted from each other
          bool TimeRange::isValid(int beginHour, int beginMinute, int endHour, int endMinute) {

            //Each variable must be less than or equal to 60 and be greater than or equal to 0. Must be multiples of 30, ie 0.6*50. 
            //Conditions. Modulus of (inBeginTime/0.6)%50 must be 0. 

            if (beginHour < 24) {

             if (( (((endHour*60)+endMinute)-((beginHour*60)+beginMinute)) == 30 ) &&  ((endMinute == 30 || endMinute == 0)&&(beginMinute == 30 || beginMinute == 0)) ) {

                //if (isValid(beginHour, beginMinute, endHour, endMinute)) {
                  
                  cout << "Great you chose a valid time" << endl << endl;
                 setTimeRange(beginHour, beginMinute, endHour, endMinute);
                  return true;

              }
          
              else{

                cout << "The chosen timeslot is invalid.  Please try again. The time slot should be 30 minutes apart. Refer to the list of open time slots." << endl;
                return false;
                //input();

              }
            } else {

                cout << "Error. Your input is invalid. Please type in one of the displayed timeslot";
                return false; 
                //input();
            }
          
          
        
  

          }
        
