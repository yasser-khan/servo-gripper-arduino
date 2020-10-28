#include <Servo.h>

Servo myservo; 

int start_gap = 30;     // start gap in mm
int end_gap = 6;        // end gap in mm
int freq = 1;          // open close per sec
int sval;
void setup()
{
  myservo.attach(9);    // attaches the servo on pin 9 to the servo object
}

void loop() 
{ 
  //myservo.write(0); //for resetting to 30mm. Open the gripper to 30mm then connect to the servo; comment out the rest
  sval = -4.5*start_gap + 114.53; // 30mm at serv 0, 0mm at serv 115
  myservo.write(sval);
  //float delay_time = (60/(freq*2))*1000;      
  float delay_time = (500/freq);           
  delay((int) delay_time);   
     
  sval = -4.5*end_gap + 114.53;
  myservo.write(sval);                  
  delay((int) delay_time);                       

} 
