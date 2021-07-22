/*
 * Jerushan Sritharan
 * 2021.07.22
 * Arduino lesson - 04 : printing ove the serial port  
 */
 
int redLED = 13;                                  // Declare redLED pin an int , and set to pin 13 
int yellowLED = 10;                               // Declare yellowLED pin an int . and set to pin 10 
int redLEDontime = 250;                           // Declare redLED on time an int and set to 250 mseconds
int redLEDofftime = 250;                          // Declare redLEd off time an int and set to 250 mseconds 
int yellowLEDontime = 250;                        //Declare yellow LED on time an int and set to 250 mseconds 
int yellowLEDofftime = 250;                       //Declare yellow LED off time an int and set to 250 mseconds 


void setup (){
  Serial.begin (9600);                            //
  pinMode(redLED,OUTPUT);                         // Tell Arduino that redLED pin is a output pin 
  pinMode (yellowLED,OUTPUT);                     // Tel Arduino that yellow LED is a output pin 
  }

  
void loop () {
  Serial.println ("The red led is blinking $");
  for (int j=1; j<=5; ++j){                        //start our for loop 
  Serial.print ("   you are on blink # : ");       //
  Serial.println (j);                              //
  digitalWrite (redLED,HIGH);                      //Red LED turn on 
  delay (redLEDontime);                            //Give the wait time 
  digitalWrite (redLED,LOW);                       //Red LED turn off            
  delay (redLEDofftime);                           //Give the wait time 
  }
Serial.println (" ");                              //

for (int r=1; r<=14; ++r){                         //Strart the for loop
  Serial.println(r);                               //
  digitalWrite (yellowLED,HIGH);                   //yellow LED turn on 
  delay (yellowLEDontime);                         //Give the wait seconds 
  digitalWrite (yellowLED,LOW);                    //Yellow LED turn off 
  delay (yellowLEDofftime);                        //Give the wait seconds 
}
Serial.println (" ");                              //

  } 
