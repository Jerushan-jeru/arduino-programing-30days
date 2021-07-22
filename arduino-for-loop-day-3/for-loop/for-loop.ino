
/*
 * for loop programing for the red and yellow led blink programing 
 * Jerushan Sritharan 
 * Date - 2021.07.22
 * 
 */
int redLEDpin = 13; // Declaring redLEDpin as int, and set it to 9
int yellowLEDpin = 10; // declaring yellowLEDpin as int, and set it to 10
int redontime = 1000; // This is the red LED on time 
int redofftime = 100; // This is the red LED off time 
int yellowontime = 1000; // This is the yellow LED on time 
int yellowofftime = 1000; // This is the yellow LED off time 

void setup (){
  pinMode (redLEDpin,OUTPUT);
  pinMode (yellowLEDpin,OUTPUT);
  }

void loop (){
  
for (int j=1; j<=11; j=1+1){
  digitalWrite (redLEDpin,HIGH); // Turn the red LED on
  delay (redontime);             // Wait 
  digitalWrite (redLEDpin,LOW);  // Turn the red LED off 
  delay (redofftime);            // Wait 
  }

for (int j=1; j<=5; ++j){
  digitalWrite (yellowLEDpin,HIGH); // Turn  the yellow LED on 
  delay (yellowontime);             // Wait time 
  digitalWrite(yellowLEDpin,LOW);   // Turn the yellow LED off 
  delay (yellowofftime);            // Wite time
} 
}
