#ifndef BLINK_H //defino clase led
#define BLINK_H
#include <Led.h>
class Blink : public Led{ // tipo de herencia de led
public: 
    Blink();
    Blink(int pin); // constructor
    void parpadear(int tiempo); // parpadeo
    void parpadear(); // parpadeo sin tiempo
    void setTiempo(int tiempo); // seteo de tiempo
    ~Blink(); // destructor
private:
    int tiempo; // variable de tiempo
};

#endif // BLINK_H