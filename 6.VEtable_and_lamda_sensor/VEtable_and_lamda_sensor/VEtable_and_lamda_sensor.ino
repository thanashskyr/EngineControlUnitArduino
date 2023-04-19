float lamdaAFR=0; 
int lamdaPin = 1;
float VE[40][12];
int w[i][j]=1;
float lamdaSUM[i][j]=0;
float lamdaCOR[i][j]=0;

void setup() {
  for (int v = 0; v <= 39; v++) {
    for (int e = 0; e <= 11; e++) {
      VE[v][e]=0;
    }
  }
    }
  

void loop() {
  lamdaAFR[i][j] = (2.3750 * analogRead(lamdaPin)) + 7.3125 ;
  if VE[i][j]=0
  {
    VE[i],[j]=(lamdaAFR[i][j]/(AFR[i][j]))*100 //ve is the amount % of the actual airmass in the cylinder divided to theoriticall airmass in the cylinder
  }
 
 
 for w[i][j]=1 w[i][j]++ w[i][j]=50000;
{ 
  if cranktime== 2;
  {lamdaSUM[i][j]= lamdaSUM[i][j]+lamdaAFR[i][j];
   }
  }
  
 lamdaCOR[i][j]= lamdaSUM[i][j]/50000; 

}
