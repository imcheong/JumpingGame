#define LED_PIN1 4
#define LED_PIN2 5

double jump_value;
double down_value;

bool jump_flag = false;
bool down_flag = false;

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
        if(!jump_flag){
          //함수호출
        }
        jump_flag = true;
        digitalWrite(LED_PIN1, HIGH);
  }else{
        jump_flag = false;
        digitalWrite(LED_PIN1, LOW);
  }

  if(down_value<=120){
        if(!down_flag){
          //함수호출
        }
        down_flag = true;
        digitalWrite(LED_PIN2, HIGH);
  }else{
        down_flag = false;
        digitalWrite(LED_PIN2, LOW);
  }


 
}
