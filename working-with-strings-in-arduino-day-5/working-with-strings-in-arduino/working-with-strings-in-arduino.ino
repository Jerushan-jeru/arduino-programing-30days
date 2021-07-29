/*
 * Jerushan Sritharan
 * 2021.07.29
 * Arduino lesson - 05 : Working with strings in Arduino   
 */
 
int redLED = 13;                                  // Declare redLED pin an int , and set to pin 13 
int yellowLED = 10;                               // Declare yellowLED pin an int . and set to pin 10 
int redLEDontime = 250;                           // Declare redLED on time an int and set to 250 mseconds
int redLEDofftime = 250;                          // Declare redLEd off time an int and set to 250 mseconds 
int yellowLEDontime = 250;                        // Declare yellow LED on time an int and set to 250 mseconds 
int yellowLEDofftime = 250;                       // Declare yellow LED off time an int and set to 250 mseconds 
int numredLED = 5;                                // Number of time to red LED blink 
int numyellowLED = 5;                             // Number of time to yellow LED blink
String redmessage = "The red LED is blinking";    // Declaring a string variable 
String yellowmessage = "The yellow LEd is bliking"; // Declaring a string variable 


void setup (){
  
  Serial.begin (9600);                            // start the serial begin                            
  String wm1 = "Welcome to " ;                    // Declaring string variable wm1 add to the some text
  String wm2 = "my program";                      // Declaring string variable wm2 add to the some text
  String wm3 ;                                    // Declaring string variable wm1 + wm2 putin the wm3 
  Serial.println (wm1);                           // Just print the wm1 
  Serial.println (wm2);                           // Just print the wm2
  wm1 = wm1+wm2 ;
  Serial.print (wm3);                             // 
  
  pinMode(redLED,OUTPUT);                         // Tell Arduino that redLED pin is a output pin 
  pinMode (yellowLED,OUTPUT);                     // Tel Arduino that yellow LED is a output pin 
  }

  
void loop () {
  Serial.println (redmessage);                     //
  for (int j=1; j<=numredLED; ++j){                //start our for loop 
  Serial.print ("   you are on blink # : ");       //
  Serial.println (j);                              //
  digitalWrite (redLED,HIGH);                      //Red LED turn on 
  delay (redLEDontime);                            //Give the wait time 
  digitalWrite (redLED,LOW);                       //Red LED turn off            
  delay (redLEDofftime);                           //Give the wait time 
  }
  
Serial.println (" ");                              //

  Serial.println (yellowmessage);                  //
  for (int r=1; r<=numyellowLED; ++r){             //Strart the for loop
  Serial.print ("   you are on blink # : ");       //
  Serial.println(r);                               //
  digitalWrite (yellowLED,HIGH);                   //yellow LED turn on 
  delay (yellowLEDontime);                         //Give the wait seconds 
  digitalWrite (yellowLED,LOW);                    //Yellow LED turn off 
  delay (yellowLEDofftime);                        //Give the wait seconds 
}
Serial.println (" ");                              //

  } 
