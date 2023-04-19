float airpressure ;//1bar=1.01 atm
float cylinderV = 0.4; //liters of air inserting of manifold
float T = 1 ;//0kelvin=-273celsious
float R = 0.082; // atm*L/mol*K
float n; //m/mw mol;
float mw = 28.96 ;//gr/mol
float airgr; // mass of air inserting the cylinder


int potPinm = 3;    // select the input pin for the potentiometer
int potPint = 4;                  


void setup() {


}


void loop() {
 // 0..1023 mapsensor=1=0.005v
 airpressure = (0.66*analogRead(potPinm)*0.005)-0.06; // img MAP-SENSOR_BOSCH_3BAR_5V_26
   T = (-40 + ((analogRead(potPint)*0.005)-2.7)*100)+273;//img temperature sensor datasheet;
  airgr = (airpressure*1.01*cylinderV*mw)/R*T;//
}
