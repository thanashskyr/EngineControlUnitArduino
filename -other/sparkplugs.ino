const int buttonPinm = 12;     // the number of the pushbutton pin
const int buttonPinz = 13; 
const int ledPinm1 =  2;
const int ledPinm4 =  8;// the number of the LED pin
const int ledPinz2=  4;
const int ledPinz3 =  6;
const int ledPinInj1 =  3;
const int ledPinInj2 =  5;
const int ledPinInj3 =  7;
const int ledPinInj4 =  9;

// variables will change:
int buttonStatem = 0;         // variable for reading the pushbutton status
int buttonStatez = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPinm1, OUTPUT);
  pinMode(ledPinm4, OUTPUT);
  pinMode(ledPinz2, OUTPUT);
  pinMode(ledPinz3, OUTPUT);
  pinMode(ledPinInj1, OUTPUT);
  pinMode(ledPinInj2, OUTPUT);
  pinMode(ledPinInj3, OUTPUT);
  pinMode(ledPinInj4, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPinm, INPUT);
   pinMode(buttonPinz, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  
  buttonStatem = digitalRead(buttonPinm);
  buttonStatez = digitalRead(buttonPinz);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonStatem == HIGH) {
    // turn LED on:
    digitalWrite(ledPinm1, HIGH);
    digitalWrite(ledPinm4, HIGH);
    delay(200);
    digitalWrite(ledPinInj4, HIGH);
    
    
  } else {
    // turn LED off:
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPinm4, LOW);
    delay(400);//THAT DELAYS THE SECOND IF...SO IT MUST BE EVERYTHING IN ONE IF CONDITION
    digitalWrite(ledPinInj4, LOW);
  }
 if (buttonStatez == HIGH) {
    // turn LED on:
    digitalWrite(ledPinz2, HIGH);
     digitalWrite(ledPinz3, HIGH);
      delay(200);
    digitalWrite(ledPinInj2, HIGH);
    
  } else {
    // turn LED off:
    digitalWrite(ledPinz2, LOW);
     digitalWrite(ledPinz3, LOW);
     delay(400);
    digitalWrite(ledPinInj2, LOW);
    
  }
  // buttonless auto
 /*digitalWrite(ledPinz2, HIGH);
 digitalWrite(ledPinz4, HIGH);
 digitalWrite(ledPinm1, LOW);
 digitalWrite(ledPinm3, LOW);
 delay(30);
 digitalWrite(ledPinz2, LOW);
 digitalWrite(ledPinz4, LOW);
 digitalWrite(ledPinm1, HIGH);
 digitalWrite(ledPinm3, HIGH);
 delay(30);*/
}
