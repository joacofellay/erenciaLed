#include "Blink.h"
#include <Arduino.h> // libreria de arduino
Blink::Blink() : Led() { // constructor por defecto
    tiempo = 1000; // tiempo por defecto
    Serial.println("Constructor Blink por defecto"); // mensaje de constructor por defecto
}
Blink::Blink(int pin) : Led(pin) { // constructor con pin
    tiempo = 1000; // tiempo por defecto
    Serial.println("Constructor Blink con pin"); // mensaje de constructor con pin
}
void Blink::parpadear(int tiempo) { // parpadeo con tiempo
    this->tiempo = tiempo; // seteo de tiempo
    prender(); // enciende led
    delay(tiempo); // espera
    apagar(); // apaga led
    delay(tiempo); // espera
}
void Blink::parpadear() { // parpadeo sin tiempo
    prender(); // enciende led
    delay(tiempo); // espera
    apagar(); // apaga led
    delay(tiempo); // espera
}
void Blink::setTiempo(int tiempo) { // seteo de tiempo
    this->tiempo = tiempo; // seteo de tiempo
}
Blink::~Blink() { // destructor
    Serial.println("Destructor Blink"); // mensaje de destructor
}