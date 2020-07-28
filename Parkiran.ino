    const int pinIR = 2;
    const int pinLed = 4;
    const int led = 7;
    int counter =0;
    void setup() {
      Serial.begin(9600);
      pinMode(pinIR, INPUT);
      pinMode(pinLed, OUTPUT);
      pinMode(led, OUTPUT);
      Serial.println("Deteksi Sensor IR");
      delay(3000);
    }
    void loop() {
      int sensorState = digitalRead(pinIR);
      if (sensorState == LOW) {
        
        counter = counter+1;
        Serial.println(counter);
//        Serial.println("Tedeteksi");
        digitalWrite(pinLed, HIGH);
      } else {
//        Serial.println("Tidak terdeteksi");
        digitalWrite(pinLed, LOW);
        
        digitalWrite(led, HIGH);
      }
      delay(500);
    }
