const int buttonPinm = 12;     // the number of the pushbutton pin
const int buttonPinz = 13; 
const int ledPinm1 =  2;
const int ledPinm3 =  6;// the number of the LED pin
const int ledPinz2=  4;
const int ledPinz4 =  8;
// variables will change:
int buttonStatem = 0;         // variable for reading the pushbutton status
int buttonStatez = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPinm1, OUTPUT);
  pinMode(ledPinm3, OUTPUT);
  pinMode(ledPinz2, OUTPUT);
  pinMode(ledPinz4, OUTPUT);
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
    digitalWrite(ledPinm3, HIGH);
    
  } else {
    // turn LED off:
    digitalWrite(ledPinm1, LOW);
    digitalWrite(ledPinm3, LOW);
    
  }
 if (buttonStatez == HIGH) {
    // turn LED on:
    digitalWrite(ledPinz2, HIGH);
     digitalWrite(ledPinz4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPinz2, LOW);
     digitalWrite(ledPinz4, LOW);
  }
}
