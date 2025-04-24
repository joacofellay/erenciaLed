#include <Arduino.h>
#include <Blink.h>


void setup() {
Serial.begin(9600); // inicializa la comunicacion serial a 9600 bps
}

void loop() {
  {Blink led(13); // objeto led de la clase Blink en el pin 13}
led.parpadear(); // parpadeo de led con tiempo por defecto  
  }
}

