int led=11;
int micro=A0;
void setup() {
  // put your setup code here, to run once:
pinMode(micro, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
//pinMode(8,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
int mic= analogRead(micro);
delay(100);
Serial.println(mic);
if (mic> 736)
 {while(mic > 736)
   { mic = analogRead(micro);
         digitalWrite(led , HIGH);
         delay(1500);
         digitalWrite(led, LOW);
        // delay(100);
      
   }
}
else 
  digitalWrite (led,LOW);
//delay(30);
}


 
