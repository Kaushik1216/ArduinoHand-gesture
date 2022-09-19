const int trigPin1 = 3; // the number of the trigger output pin ( sensor 1 Left )
const int echoPin1 = 2; // the number of the echo input pin ( sensor 1 Left )     
const int trigPin2 = 5;  // the number of the trigger output pin ( sensor 2 Right ) 
const int echoPin2 = 4;  // the number of the echo input pin ( sensor 2 Right ) 
const int redPin= 11;
const int greenPin = 8;
const int bluePin = 9;

int distance_cm1 = 0;
int diatance_cm2 = 0;
float c_time = 0;
int cm11 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trigger2,OUTPUT);
  pinMode(echo2,INPUT);
}

long calculate_distance(int trigger, int echo)
{
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2); // Wait for 1 millisecond(s)
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10); // Wait for 10 millisecond(s)
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);
  return (0.01723 * pulseIn(echo,HIGH));
}

void loop()
{
  diatance_cm1 = calculate_distance(trigger1,echo1);
  distance_cm2 = calculate_distance(trigger2,echo2);

//  Serial.print("Left Sensor, Right Sensor");
//  Serial.print(distance_cm1);
//  Serial.print(" cm, ");
//  Serial.print(distance_cm2);
//  Serial.println(" cm");
  delay(100);
  
  if (cm1 <= 35 and cm1>=5)
  {
    c_time = millis();
    while(millis()<=(c_time+2000))
    {
      cm11 = calculate_distance(trigger1 , echo1);
      if ( (cm1-3)<=cm11 && (cm1+3)>=cm11 )
      {
        Serial.println("Play/Pause");
      }
    }
  }
}
