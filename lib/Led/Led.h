#ifndef LED_H
#define LED_H
class Led 
{
private:
    int pin;
    void configurar();
public:
    Led(int);
    void prender();
    void apagar();
    void verEstado();
    ~Led(); // Destructor
};
#endif