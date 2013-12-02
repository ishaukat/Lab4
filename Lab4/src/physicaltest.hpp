/*
 * physicaltest.hpp
 *
 *  Created on: Nov 23, 2013
 *      Author: Home-Pc
 */

#ifndef PHYSICALTEST_HPP_
#define PHYSICALTEST_HPP_
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//BASE CLASS

class PhysicalTest {
protected:

//variables for base class (will go directly to derived classes)
//common data member variables which will be used directly to other inherited classes from base class
    string gender;   //will tell if it is Female or Male
    string first_name;  //will tell the patient first name (if person come for check-up many times)
    string last_name;   //will tell the patient last name
    char profession; //will select the profession of the tester doctor/nurse/radiologist
    int range;    //estimate the range of each test if it is within range=normal, if not=abnormal
    int age;    //age does matter (as young adults have different rates then olders)


public:

            //constructor of base class (main function)
    PhysicalTest();

    //functions of base class (common in all derived class)
    void display(); //function ask the user to diplay patients (all member variables)
    void annotation(); //function will ask the user to select the person who will do a test (doctor/nurse/radiologist)

};

//First Derived Class
      //regulates the balance of water in the body
      //also check substances that are not needed in the body

class urine: public PhysicalTest {

protected:
//Data member variables for 1st derived class (only specific for urine)

  int pH; //pH value (shows the acidity of the urine)
  int protein; //protein
  int sugar; //Sugar (glucose)
  int fluid; //water level
  int ketone; //Ketone (a metabolic product)

public:

    //functions for 1st derived class = urine (only use for this class)

    void check_urine(int pH, int color, int odor); //check the values of pH/color/odor and decide if they are normal or abnormal
    //void pHvalue(int pH);
    //void color();
    //void odor();
    void amount_of_urine(int sugar, int fluid, int Lite);
 };

//2nd Derived Class = vital sings
//it has further sub-branches which will be use as of functions
//body temperature/pulse rate/respiration rate

class vitalsigns: public PhysicalTest {

protected:

//Data member variables for 2nd derived class (only specific for vital signs)

    int body_cond; //tells person body conditions relax/tense/exercise/resting
    int nutrition;
    int recent_activity;
    int time;
    int heart_rate;
    int num_breath;
    int time_sec;
    int time_min;
    int choice;
    //int range;    //estimate the range of each test if it is within range=normal, if not=abnormal

public:

    //functions for 2nd derived class = vitalsigns (only use for this class)

    void temperature(int recent_activity, int time);
    void pulse_rate(int heart_rate, char body_cond, int time_sec, int time_min, int choice);
    void respiration_rate(int num_breath);

};

//3rd Derived Class = Blood pressure
//it has further two typyes which will be use as of functions

class BloodPressure: public PhysicalTest {

protected:

    //Data member variables for 3rd derive class = Blood pressure

    int number; //tells the lower and upper number of blood pressure

public:

    //functions for 3rd derive class: Blood pressure (only use for this class)

        void check_press(int num); //check systolic/hisostylic body pressures

};

#endif /* PHYSICALTEST_HPP_ */
