#include "led.h"
#include <Arduino.h>

Led::Led(int pin) : pin(pin) {
    configurar();
}
void Led::apagar() {
    digitalWrite(pin, LOW);
}
void Led::prender() {
    digitalWrite(pin, HIGH);
}
void Led::verEstado() {
    digitalRead(pin);
}
void Led::configurar() {
    pinMode(pin, OUTPUT);
    apagar();
    Serial.println("Constructor de la clase Led");
}
Led::~Led() {
    Serial.println("Destructor de la clase Led");
    apagar(); // Apagar el LED al destruir el objeto
}
