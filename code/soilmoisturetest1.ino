
int val = 0; //value for storing moisture value 
int soilPin = A1;//Declare a variable for the soil moisture sensor 
int soilPower = 7;//Variable for Soil moisture 

void setup()
{
  Serial.begin(9600);   // open serial over USB
  analogReadResolution(12);
  pinMode(soilPower, OUTPUT);//Set D7 as an OUTPUT
  digitalWrite(soilPower, LOW);//Set to LOW so no power is flowing through the sensor
  
}

void loop() 
{

soilPower = analogRead(soilPin);
   
//get soil moisture value from the function below and print it

uint8_t percent =(uint8_t) (analogRead(A1)/33.30F);
Serial.print("Bodenfeuchigkeit: "); 
Serial.print(percent);
Serial.print("%");
Serial.print("\n");

//This 1 second timefrme is used so you can test the sensor and see it change in real-time.
//For in-plant applications, you will want to take readings much less frequently.
delay(1000);//take a reading every second
}
//This is a function used to get the soil moisture content
int readSoil()
{

    digitalWrite(soilPower, HIGH);//turn D7 "On"
    delay(10);//wait 10 milliseconds 
    val = analogRead(soilPin);//Read the SIG value form sensor 
    digitalWrite(soilPower, LOW);//turn D7 "Off"
    return val;//send current moisture value
}
