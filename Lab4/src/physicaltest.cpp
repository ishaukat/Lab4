//============================================================================
// Name        : Lab4.cpp
// Author      : Iqra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include "physicaltest.hpp"

using namespace std;

//base class main

int myfirst_name;
int mylast_name;
char myprofession;
char D;
char N;
char R;

//Base Class Main (functions)

PhysicalTest :: PhysicalTest() {

first_name = myfirst_name;
last_name = mylast_name;
profession = myprofession;
range = 0;
age = 0;

}

void PhysicalTest :: display() {

cout << "Please enter the first name of the patient:" << endl;
cin >> myfirst_name;

cout << "Please enter the last name of the patient:" << endl;
cin >> mylast_name;

cout << "Please enter (F) if the patient is female and (M) if the patient is male:" << endl;
cin >> gender;

while (!(gender == "F"  )|(gender == "M")){

cout << "Sorry your input is not correct. If the patient is female enter (F) or if male enter (M):" << endl;
cin >> gender;

cout << "What is the patients age:"<< endl;
cin >> age;

}}

void PhysicalTest :: annotation() {

//function will ask the user to select the person who will do a test (doctor/nurse/radiologist)

cout << "****MENU: ANNOTATIONS****" << endl;
cout << "Please select one of the choices:" << endl;
cin >> myprofession;

if (myprofession == D) {
cout << "Doctor will perform the physical test:" << D << endl; }

else if (myprofession == N) {
cout << "Nurse will perform the physical test:" << N << endl; }

else if (myprofession == R) {
cout << "Radiologist will perform the physical test:" << R << endl; }
else {
cout << "Invalid profession:" << endl; }

    //cout << "Comment:";
// comment array code for doctor
//we need this for final project because doctor could perform any of the objects (when we will combined all three test togeather)
}


//1st Derived Class Main (functions) = URINE
                //when we declare variables as protected then we dont need base constructor in derive class constructors
void urine :: check_urine(int pH, int color, int odor) {

// making values by my own to test them
//the acidity of urine, depending on diet, is about 5 to 7
//emove the extra water and water-soluble wastes the kidneys filter from the blood
//The pH value, for example, can be used to find out whether there is an increased risk of developing urinary stones. This is the case for acidic values,
//meaning values below 5. A pH value over 7 can indicate a bacterial urinary tract infection.

cout << "Checking the pH value of urine to find its acitiy:" << endl;
cin >> pH;

while ((pH > 5) | (pH < 7)) {

if ((pH == 0) | (pH !=5)) {
cout << "Abnormal: increased risk of developing urinary stones:" << endl; }

else if ((pH == 5) | (pH == 7)) {
cout << "Normal: There is no such disease" << endl; }

else if (pH > 7) {
cout << "Abnormal: indicate a bacterial urinary tract infection" << endl; }

}

cout << "Checking the color of urine:" << endl;
cin >> color;

switch (color) {

case 0:
color = 'Y'; //yellow
cout << "Normal: color came from pigment 'urochrome'" << endl;
break;

case 1:
color = 'D';   //darker color
//body needs a certain amount of fluid to function
cout << "Abnormal: not drinking enough fluid" << endl;
break;

case 2:
color = 'P'; //pale-yellow
//you're taking a diuretic (a drug that forces the body to get rid of excess water)
cout << "Abnormal: drinking a lot of fluid" << endl;
break;

case 3:
color = 'R'; //reddish
cout << "Abnormal: blood in the urine" << endl;
break;
}

cout << "Checking the order of urine:" << endl;
cin >> odor;
{
//Cloudy or flaky urine can indicate a urinary tract infection
if (odor == 'w') {   //WHIFF: some pungent smell (irritated)
cout << "Abnormal: infection or urinary stones in kidney:" << endl; }
else if (odor == 'S') {  //sweet
cout << "Abnormal: Diabetics" << endl; }   // might notice that their urine smells sweet (because of excess sugarjust indicate that)
else {
cout << "Normal: No smell:" << endl;}   //urine is normal
}

}

void urine :: amount_of_urine(int sugar, int fluid, int Liter) {

//urine control both the amount and the composition of the extracellular fluid in the body
//kidney tubule regulation of the salt and water in our bodies is the most important factor in determining urine volume
//under optimum conditions, the body produces urine at a rate of about 1 ml/min.
//Urine is an aqueous solution of greater than 95% water, with the remaining constituents, in order of decreasing concentration urea 9.3 g/L, chloride 1.87 g/L, sodium 1.17 g/L, potassium 0.750 g/L, creatinine 0.670 g/L
//Consuming beets can result in beeturia (pink/red urine containing betanin) for some 10–14% of the population.[5]
//Average urine production in adult humans is about 1 – 2 L per day, depending on state of hydration, activity level, environmental factors, weight, and the individual's health.
//Producing too much or too little urine needs medical attention.
//Polyuria is a condition of excessive production of urine (> 2.5 L/day), oliguria when < 400 mL are produced, and anuria one of < 100 mL per day.

cout << "Average urine rate in humans is: 1-2L/perday" << Liter << endl;

while ((range == 1) | (range == 2)) {

switch (range) {

case 0:
range = 1 && 2;
cout << "Normal Urine" << endl;
break;

case 1:
if (range > 2.5) {
cout << "Abnormal: Excessive production of urine:" << endl;}
else {
cout << "Invalid!!" << endl; }
break;
}}
}


//FUNCTIONS of 2nd Derived Class (main) = vitalsigns

void vitalsigns :: temperature(int recent_activity, int time) {

// Normal body temperature can range from 97.8 degrees F (or Fahrenheit, equivalent to 36.5 degrees C, or Celsius) to 99 degrees F (37.2 degrees C) for a healthy adult
//A fever is indicated when body temperature rises about one degree or more over the normal temperature of 98.6 degrees
//Hypothermia is defined as a drop in body temperature below 95 degrees Fahrenheit
// in women, the stage of the menstrual cycle

//srand(time(NULL));
range = rand () % 98;
//cout << "Our unit of time is:" << x << endl;

cout << "The time when body temperature calculates:" << endl;
cin >> time;

cout << "The patient body condition at that specific time:rest/exercise/stress" << endl;
cin >> recent_activity;

while ((range > 97.8) | (range < 99)) {
cout << "Select any number between this range" << endl;
cin >> range;
}

if (range <= 97 && range >= 99 ) {

cout << "The time when body temperature calculates:" << time <<  endl;
cout << "The patient body condition at that specific time:rest/exercise/stress" << endl;
cout << "Patient has Fever" << endl;  }
else {
cout << "Tray again the range and select a right number" << endl;  }

}

void vitalsigns :: pulse_rate(int heart_rate, char body_cond, int time_sec, int time_min, int choice) {
//just picking a random genders and calculating their pulses at different body positons
//also picking random numbers to test them
//those values are assigned by me and got it from internet
//A normal resting heart rate for adults ranges from 60 to 100 beats a minute
//When you feel your pulse, count the number of beats in 15 seconds.
//Multiply this number by 4 to calculate your beats per minute.
//only testing on "TEENAGES" AGE=18-20
   //srand(time(NULL));     //need a time in seconds
   heart_rate = rand () % 80;

   time_min=0;
time_sec = rand () % 15;    //give a time in seconds (# of beats/sec)
time_min = rand () % 15 * 4;  //give a pulse rate (# of beats/min)

cout << "Our unit of time in min:" << time_min << endl;

cout << "********Menu: Pulse Rate************" << endl;
cout << "Gender\t\t\t Age\t\t\t Resting(heart_rate)\t\t\t Exercising(heart_rate) << endl";
cout << "1. Male\t\t\t 20\t\t\t 60\t\t\t 80" << endl;
cout << "2. Female\t\t\t 20\t\t\t 60\t\t\t 80" << endl;

cout << "Please select any option: 1 or 2";
cin >> choice;

switch (choice) {

case 1:
cout << "Male" << endl;
cout << heart_rate << endl;

if (body_cond == 'R') {
cout << "The person is resting:" << body_cond << endl; }
else if (body_cond == 'E') {
cout << "The person is resting:" << body_cond << endl;  }
else {
cout <<	"NOTHING" << endl; }

break;

case 2:
cout << "Female" << endl;
cout << heart_rate << endl;

   if (body_cond == 'R') {
cout << "The person is resting:" << body_cond << endl; }
   else if (body_cond == 'E') {
cout << "The person is resting:" << body_cond << endl;  }
else {
cout <<	"NOTHING" << endl; }

break;

default:
cout << "Invalid" << endl;
}

}

void vitalsigns :: respiration_rate(int num_breath) {
//Normal respiration rates for an adult person at rest range from 12 to 16 breaths per minute.

while ((range >= 12) | (range <= 16)) {

cout << "The person breathing rate: N or A" << endl;
cin >> range;

if (range == 12) {
cout << "Normal"; }
else if (range == 13) {
cout << "Normal"; }
else if (range ==14) {
cout << "Normal"; }
else if (range==15) {
cout << "Normal"; }
else if (range==16) {
cout << "Normal"; }
else {
cout << "ABNORMAL: SELECT A RIGHT NUMBER AGAIN"; }
}
}

void BloodPressure  :: check_press(int num) {
//there are two types of blood pressure
//systolic= hypertension (high)     &  hisostylic= hypertensive(low)
//Two numbers are recorded when measuring blood pressure
//The higher number, or systolic pressure, refers to the pressure inside the artery when the heart contracts and pumps blood through the body
//The lower number, or diastolic pressure, refers to the pressure inside the artery when the heart is at rest and is filling with blood
//Both the systolic and diastolic pressures are recorded as "mm Hg" (millimeters of mercury)
//normal blood pressure now days = 120/80

num =0;
cout << "SYSTOLIC = HIGH BLOOD PRESSURE  & DISYSTOLIC = LOW BLOOD PRESSURE (N or A)" << endl;
cin >> num;

while ((num > 140) | (num < 80)) {

cout << "INVALID CHOICE: << SELECT NUMBER AGAIN!! << [SYSTOLIC = HIGH BLOOD PRESSURE] << [DISYSTOLIC = LOW BLOOD PRESSURE] <<  (N or A)" << endl;
cin >> num;

switch (num) {

case 0:
if ((num >= 140) | (num >= 90)) {
cout << "ABNORMAL: SYSTOLIC [mm Hg] << & << ABNORMAL: DISYSTOLIC [mm Hg] << (HYPERTENSION)";  }
else {
cout << "NORMAL" << endl; }
break;

case 1:
if (((num >= 120) | (num <= 139)) && ((num >= 80) |  (num <= 89))) {
cout << "ABNORMAL: SYSTOLIC [mm Hg] << & << ABNORMAL: DISYSTOLIC [mm Hg] << (PRE-HYPERTENSION)"; }
else {
cout << "NORMAL" << endl; }
break;

case 2:
if ((num <120) && (num < 80)) {
cout << "NORMAL: SYSTOLIC [mm Hg] << & << NORMAL: DISYSTOLIC [mm Hg] << (NORMAL: DEFINE)"; }
else {
cout << "ABNORMAL" << endl; }
break;

   }
   }
}

