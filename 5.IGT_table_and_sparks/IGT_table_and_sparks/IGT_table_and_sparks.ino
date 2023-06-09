const int spark1 = 3;
const int spark2 = 4;
const int spark3 = 5;
const int spark4 = 6;
//firing order 1342

//i and j are defined at "target_AFR"

void setup() {
  // put your setup code here, to run once:
  pinMode(spark1, OUTPUT);
  pinMode(spark2, OUTPUT);
  pinMode(spark3, OUTPUT);
  pinMode(spark4, OUTPUT);


  float IGT[40][12] = {{16,16,16,16,16,16,16,16,16,16,16,16},  //600
                     {16,16,16,16,16,16,16,16,16,16,16,16},  //800 
                     {16,16,16,16,16,16,16,16,16,16,16,16},  //1000
                     {20,20,20,20,19,19,19,18,18,17,15,14},  //1200
                     {20,20,20,20,19,19,19,18,18,17,15,14},  //1400
                     {20,17,17,17,17,18,19,20,21,20,16,15},  //1600
                     {20,17,17,17,17,18,19,20,21,20,16,15},  //1800
                     {20,17,17,17,17,18,19,20,21,20,16,15},  //2000
                     {23,24,26,28,28,28,28,28,28,24,20,18},  //2200
                     {23,24,26,28,28,28,28,28,28,24,20,18},  //2400
                     {33,33,35,38,39,40,40,38,36,31,27,20},  //2600
                     {33,33,35,38,39,40,40,38,36,31,27,20},  //2800
                     {33,33,35,38,39,40,40,38,36,31,27,20},  //3000
                     {37,38,40,42,42,42,42,40,38,31,29,27},  //3200
                     {37,38,40,42,42,42,42,40,38,31,29,27},  //3400
                     {37,38,40,42,42,42,42,40,38,31,29,27},  //3600
                     {38,40,41,42,42,42,42,40,38,33,30,29},  //3800
                     {38,40,41,42,42,42,42,40,38,33,30,29},  //4000
                     {38,40,41,42,42,42,42,40,38,33,30,29},  //4200
                     {39,40,41,42,42,42,42,40,38,33,31,29},  //4400 
                     {39,40,41,42,42,42,42,40,38,33,31,29},  //4600 
                     {39,40,41,42,42,42,42,40,38,33,31,29},  //4800 
                     {39,40,41,40,40,40,40,40,38,32,31,29},  //5000
                     {39,40,41,40,40,40,40,40,38,32,31,29},  //5200
                     {40,41,41,40,40,39,39,37,36,32,31,30},  //5400
                     {40,41,41,40,40,39,39,37,36,32,31,30},  //5600
                     {40,41,41,40,40,39,39,37,36,32,31,30},  //5800
                     {40,41,41,40,40,39,39,37,36,32,31,30},  //6000                          
                     {40,41,41,40,40,39,39,37,36,32,31,30},  //6200  
                     {42,41,41,40,40,39,38,38,35,32,30,28},  //6400 
                     {42,41,41,40,40,39,38,38,35,32,30,28},  //6600
                     {42,41,41,40,40,39,38,38,35,32,30,28},  //6800 
                     {42,41,41,40,40,39,38,38,35,32,30,28},  //7000
                     {42,41,41,40,40,39,38,38,35,32,30,28},  //7200
                     {43,42,42,41,41,40,39,39,37,34,32,30},  //7400
                     {43,42,42,41,41,40,39,39,37,34,32,30},  //7600 
                     {43,42,42,41,41,40,39,39,37,34,32,30},  //7800
                     {43,43,43,42,42,41,41,41,39,35,34,31},  //8000
                     {43,43,44,45,45,45,43,42,41,39,37,32},  //8200
                     {43,44,45,46,47,46,44,42,41,40,38,33} };//8400
                     
                      
                     

}

void loop() {
  //spark1
  if (crankDegree == 720+IGT[i][j])
  { 
    digitalWrite(spark1,HIGH);
  }
  else
  {
    digitalWrite(spark1,LOW);
  }
 //spark3 
  if (crankDegree == 180+IGT[i][j])
  { 
    digitalWrite(spark3,HIGH);
  }
  else
  {
    digitalWrite(spark4,LOW);
  }

   //spark4
  if (crankDegree == 360+IGT[i][j])
  { 
    digitalWrite(spark4,HIGH);
  }
  else
  {
    digitalWrite(spark4,LOW);
  }
  
 //spark2
  if (crankDegree == 540+IGT[i][j])
  { 
    digitalWrite(spark2,HIGH);
  }
  else
  {
    digitalWrite(spark2,LOW);
  }
}
