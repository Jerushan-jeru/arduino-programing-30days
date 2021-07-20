

int LEDpin = 13;
int waittimeon = 1000;
int waittimeoff = 500;

void setup (){
  pinMode (LEDpin ,OUTPUT);
  }

void loop (){
  digitalWrite (LEDpin,HIGH);
  delay (waittimeon);
  digitalWrite (LEDpin,LOW);
  delay (waittimeoff);
  }
