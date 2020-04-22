void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  tone(8, 200, 500);
  delay(250);
  tone(8, 400, 100);
  Serial.begin(9600);
}

int count = 1 ; 
int ledpin = 3;
int time = 100 ;
void loop() {
  for(ledpin = 3 ; ledpin <= 13 ; ledpin++) //ไปหน้า
  {
      if(ledpin == 8 ){
          digitalWrite(ledpin,0); // ledpin 8 off only
          continue;
      }

      digitalWrite(ledpin,1); 
      delay(time);
      digitalWrite(ledpin,0);

      if(digitalRead(2) == 0) {
       
          count = count*2 ;
          Serial.println("Faster X 2 (Current Speed : X" +String(count)+" )");
          tone(8,400,100);
          time = time/2 ;
          delay(100);
          
      }else {}
  }

    for(ledpin = 13 ; ledpin >= 3 ; ledpin--) //กลับหลัง
  {
      if(ledpin == 8 ){
          digitalWrite(ledpin,0); // ledpin 8 off only
          continue;
      }

      digitalWrite(ledpin,1); 
      delay(time);
      digitalWrite(ledpin,0);

      if(digitalRead(2) == 0) {
        
          count = count*2 ;
          Serial.println("Faster X 2 (Current Speed : X" +String(count)+" )");
          tone(8,400,100);
          time = time/2 ;
          delay(100);
          
      }else {}
  }
}

