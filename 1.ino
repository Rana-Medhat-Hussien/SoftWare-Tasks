#define led 13
String password;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

 
}

void loop() {
   Serial.println("Enter th password");
   password=Serial.parseInt();
   if (password== 'agi')
  {
   digitalWrite(led,HIGH); 
   }
   else
   {
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);   
    }
   

}
