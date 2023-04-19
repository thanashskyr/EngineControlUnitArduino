const int crankSensorPin = 2;
int crankDegree = 1;
int crankSensor = 0;
int cranktime = 0;
int RPM = 0;
unsigned long StartTime = 0;
unsigned long CurrentTime = 0;
unsigned long rotatetime = 0;
void setup() {
  
  pinMode(crankSensorPin,INPUT);
}

void loop() {
  if (crankSensor == HIGH)
  { 
    crankDegree = crankDegree+1;
    cranktime = cranktime+1;
    
    if (crankDegree = 720) ;
   {
    crankDegree = 1;
   }
  }
    if (cranktime == 1);
    {
     StartTime = millis();
 
      
    } 
    if (cranktime == 360);
    {
   
     CurrentTime = millis(); 
     rotatetime = CurrentTime - StartTime;
     RPM = 60000/rotatetime;
     cranktime = 1; 
    
    }
   
  }
