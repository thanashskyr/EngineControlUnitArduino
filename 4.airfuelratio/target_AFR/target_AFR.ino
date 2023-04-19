int i= 0;
int j=0;


void setup() {

float AFR[40][12] = { {14,14,14,14,14,14,14,14,13.8,13.6,13.5,13.4},            //600
                     {14,14,14,14,14,14,14,14,13.8,13.6,13.5,13.4},                //800 
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13,12.9},    //1000
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //1200
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //1400
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //1600
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //1800
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //2000
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //2200
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //2400
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //2600
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //2800
                     {14,14.4,14.4,14.4,14.4,14.4,14.4,14.2,13.6,13.6,13.0,12.9},  //3000
                     {14,14.6,14.6,14.6,14.6,14.6,14.4,14.2,13.6,13.6,13.0,12.9},  //3200
                     {13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.0,13.0,13.0,12.9},//3400
                     {13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.0,13.0,13.0,12.9},//3600
                     {13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.0,13.0,13.0,12.9},//3800
                     {13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.6,13.0,13.0,13.0,12.9},//4000
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //4200
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //4400 
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //4600 
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //4800 
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //5000
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //5200
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //5400
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //5600
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //5800
                     {13,13,13,13,13,13,13,13,13,13,13,12.9},                      //6000                          
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //6200  
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //6400 
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //6600
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //6800 
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //7000
                     {12.6,12.6,12.6,12.6,12.6,12.5,12.5,12.5,12.4,12.3},          //7200
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2},          //7400
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2},          //7600 
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2},          //7800
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2},          //8000
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2},          //8200
                     {12.4,12.4,12.4,12.4,12.4,12.3,12.3,12.3,12.2,12.2} };          //8400
                     
                      
                     
}

void loop() {
    
    
   if (RPM<601)
  {
    i=0;
  }
   else if (RPM>600 && RPM<801)
  {
    i=1;
  }
  else if (RPM>800 && RPM<1001)
  {
    i=2;
  }
 else if (RPM>1000 && RPM<1201)
  {
    i=3;
  }
  else if (RPM>1200 && RPM<1401)
  {
    i=4;
  } 
   else if (RPM>1400 && RPM<1601)
  {
    i=5;
  }
 else if (RPM>1600 && RPM<1801)
  {
    i=6;
  }
   
   else if (RPM>1800 && RPM<2001)
  {
    i=7;
  }
   else if (RPM>200 && RPM<2201)
  {
    i=8;
  }
   else if (RPM>2200 && RPM<2401)
  {
    i=9;
  }
   else if (RPM>2400 && RPM<2601)
  {
    i=10;
  }
   else if (RPM>2600 && RPM<2801)
  {
   i=11;
  }else if (RPM>2800 && RPM<3001)
  {
    i=12;
  }
 else if (RPM>3000 && RPM<3201)
  {
   i=13;
  }
  else if (RPM>3200 && RPM<3401)
  {
    i=14;
  } 
   else if (RPM>3400 && RPM<3601)
  {
    i=15;
  }
 else if (RPM>3600 && RPM<3801)
  {
    i=16;
  }
   
   else if (RPM>3800 && RPM<4001)
  {
    i=17;
  }
   else if (RPM>4000 && RPM<4201)
  {
    i=18;
  }
   else if (RPM>4200 && RPM<4401)
  {
    i=19;
  }
   else if (RPM>4400 && RPM<4601)
  {
    i=20;
  }
   else if (RPM>4600 && RPM<4801)
  {
    i=21;
  }
  else if (RPM>4800 && RPM<5001)
  {
    i=22;
  }
 else if (RPM>5000 && RPM<5201)
  {
    i=23;
  }
  else if (RPM>5200 && RPM<5401)
  {
    i=24;
  } 
   else if (RPM>5400 && RPM<5601)
  {
    i=25;
  }
   else if (RPM>5600 && RPM<5801)
  {
    i=26;
  }
  else if (RPM>5800 && RPM<6001)
  {
    i=27;
  }
 else if (RPM>6000 && RPM<6201)
  {
    i=28;
  }
  else if (RPM>6200 && RPM<6401)
  {
    i=29;
  }
   else if (RPM>6400 && RPM<6601)
  {
    i=30;
  }
   else if (RPM>6600 && RPM<6801)
  {
    i=31;
  }
  else if (RPM>6800 && RPM<7001)
  {
    i=32;
  }
 else if (RPM>7000 && RPM<7201)
  {
    i=33;
  }
  else if (RPM>7200 && RPM<7401)
  {
    i=34;
  }
   else if (RPM>7400 && RPM<7601)
  {
    i=35;
  }
   else if (RPM>7600 && RPM<7801)
  {
    i=36;
  }
  else if (RPM>7800 && RPM<8001)
  {
    i=37;
  }
 else if (RPM>8000 && RPM<8201)
  {
    i=38;
  }
  else //(RPM>8200 && RPM<8401)
  {
    i=39;
  } 


if (airpressure<10)
{
  j=0;
}
else if (airpressure>=10 && airpressure<20)
{
  j=1;
}
 else if (airpressure>=20 && airpressure<30)
 {
  j=2;
 }
 else if (airpressure>=30 && airpressure<40)
 {
  j=3;
 }
 else if (airpressure>=40 && airpressure<50)
 {
  j=4;
 }
 else if (airpressure>=50 && airpressure<60)
 {
  j=5;
 }
 else if (airpressure>=60 && airpressure<70)
 {
  j=6;
 }
 else if (airpressure>=70 && airpressure<80)
 {
  j=7;
 }
 else if (airpressure>=80 && airpressure<90)
 {
  j=8;
 }
 else if (airpressure>=90 && airpressure<100)
 {
  j=9;
 }
 else if (airpressure>=100 && airpressure<110)
 {
  j=10;
 }
 else //(airpressure>=110);
 {
  j=11;
 }

  
  fuelgr=(VE[i][j]/100)*airgr/AFR[i,j];

}
