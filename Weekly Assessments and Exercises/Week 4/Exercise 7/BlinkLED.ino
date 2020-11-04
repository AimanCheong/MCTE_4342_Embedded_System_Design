
class Blinky
{
  private:

  public:

    int x,y,z;
    
    Blinky(int pinNum, int onTime, int offTime)
    {
      x = pinNum;
      y = onTime;
      z = offTime;

      pinMode(x,OUTPUT);               //this line needed so that pin at x will set to OUTPUT to have high output, in this case brighter.
                                       // as initially, all pin is sets as inputs as default thus LOW Current if not se as output
    }

    void Refresh()
    {
      digitalWrite (x,HIGH);
      delay(y);
      digitalWrite (x,LOW);
      delay(z);
    }
};

Blinky led0 (8 ,750,350);
Blinky led1 (9 ,400,600);

void setup ()
{
  Serial.begin (9600);
}


void loop ()
{
    led0.Refresh();
    led1.Refresh();
}
