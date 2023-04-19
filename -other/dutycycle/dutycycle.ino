 
  long dutycycle = 0;
  long fuelgr = 0;//delay of injection according to throttlepos 
 
  void setup() {

}

void loop() {

  dutycycle = (rotatetime*fuelgr)/100); // microsec of injector open
  
}
