const int inj1 = 7;
const int inj2 = 8;
const int inj3 = 9;
const int inj4 = 10;
long injtime = 0; //injection time in micro sec

//firing order 1342
void setup() {
  
  pinMode(inj1, OUTPUT);
  pinMode(inj2, OUTPUT);
  pinMode(inj3, OUTPUT);
  pinMode(inj4, OUTPUT);
}

void loop() {
  
injtime = 60000000*airgr/(115*AFR[RPM]); //115 is injectors flow g/min 1cc gasoline is 0.748g


   //inj1
  if (crankDegree == 360)
  { 
    digitalWrite(inj1,HIGH);


    delayMicroseconds(injtime);
    digitalWrite(inj1,LOW);
  }
 //inj3 
  if (crankDegree == 540)
  { 
    digitalWrite(inj3,HIGH);
     delayMicroseconds(injtime);
    digitalWrite(inj3,LOW);
  }
  

   //inj4
  if (crankDegree == 720)
  { 
    digitalWrite(inj4,HIGH);
     delayMicroseconds(injtime);
    digitalWrite(inj4,LOW);
  }
  
  
 //inj2
  if (crankDegree == 180)
  { 
    digitalWrite(inj2,HIGH);
     delayMicroseconds(injtime);
    digitalWrite(inj2,LOW);
  }
 
  

}
