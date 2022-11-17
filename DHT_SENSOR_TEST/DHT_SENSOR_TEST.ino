#include <DHT.h> // download the library from library manger


#define DHTTYPE DHT11

#define DHTPIN 9


DHT dht (DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  dht.begin();

  Serial.begin(9600);

  Serial.println("DHT Temp And Humidity");

  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  float T = dht.readTemperature();

  float H = dht.readHumidity();


  Serial.print("Temp:  ");

  Serial.println(T);


  Serial.print("Humidity:  ");

  Serial.println(H);

  delay(500);
  //End code
}
