#define LED_PIN1 4
#define LED_PIN2 5

double jump_value;
double down_value;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  jump_value = analogRead(A0);
  
  down_value = analogRead(A1);
  
  Serial.println(jump_value);
  Serial.println(down_value);

  if(jump_value<=650){
        digitalWrite(LED_PIN1, HIGH);
  }else{
        digitalWrite(LED_PIN1, LOW);
  }

  if(down_value<=120){
        digitalWrite(LED_PIN2, HIGH);
  }else{
        digitalWrite(LED_PIN2, LOW);
  }


 
}
