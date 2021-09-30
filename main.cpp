//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include "time.hpp"
#include "date.hpp"
#include <cstdlib>
#include <stdlib.h>

using namespace std;
//Array containing all possible dates in the month of september
//Element 0 represents september 8, element 1, september 9...september 30 is element 21. Recall there is no element 22 because thats an error. 

//Need error checking so that we can only type acceptable integers into the cin. 

int main() {

  TimeRange tr;
  Date d;
/*
  Date September[22];
  d.DateInitializer(September, 8, 30, 9);
  Date October[31];
  d.DateInitializer(October, 1, 31, 10);
  Date November[30];
  d.DateInitializer(November, 1, 30, 11);
  Date December[9];
  d.DateInitializer(December, 1, 9, 12);
*/


 
  
  
 // cout << "The day is:  "<< September[21].getDay() << endl << "December time: " << December[8].getDay() << " of the "<< December[8].getMonth() << "th month" << endl;

  //int month, day;

  //
//Runs the input functions, to set the date and the time. Output is provided for user to see their inputs. 
  cout <<"Available months for booking are September, October, November, December" << endl;
  d.input();
  d.output(cout);
  cout << endl << "Pick a time for your appointment "<< endl;
  tr.input();
  tr.output();
//Initializing variables to use in the setDate function, so that we can change the date. 
  int reinitMonth;
  int reinitDay;

  cout << endl << "Lets use the set function to change our date." << endl << endl;

  cout << "Pick a new month. Available months for booking are September, October, November and December. Make sure to input month as a number." << endl << endl;  
  cin >> reinitMonth; 

  cout << "Pick a new day in said month: ";
  cin >> reinitDay; 

  d.setDate(reinitMonth, reinitDay);
  d.output(cout);

  //Initializing some variables to use in the "set" function
    int reStartHour;
    int reStartMin;
    int reEndHour;
    int reEndMin;
//Provides an interface for users to pass in values to the setTimeRange function. 
   cout << endl << "Lets book another appointment. " << endl << endl;

    cout << "From the displayed open time slots, what is the hour of the starting time: "; 
    cin >> reStartHour;

    cout << endl << "From the displayed open time slots, what is the minute of the starting time: ";
    cin >> reStartMin;

    cout << endl << "From the displayed open time slots, what is the hour of the ending time: ";
    cin >> reEndHour;

    cout << endl << "From the displayed open time slots, what is the minutes of the ending time: ";
    cin >> reEndMin;
 //We pass the user input into the set function to change the time array. 

  tr.setTimeRange(reStartHour, reStartMin, reEndHour, reEndMin); 
  tr.output();

 //d.printAppointedTimeSlots();
  
   return 0;
}

