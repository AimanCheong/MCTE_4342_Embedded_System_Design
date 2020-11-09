
class Blinky
{
  private:

  public:

    int x,y,z;

    void Initialize(int pinNum, int onTime, int offTime)
    {
      x = pinNum;
      y = onTime;
      z = offTime;
      pinMode(x,OUTPUT);
    }

    void Refresh()
    {
      digitalWrite (x,HIGH);
      delay(y);
      digitalWrite (x,LOW);
      delay(z);
    }
};

Blinky leds[8];

void setup ()
{
  Serial.begin (9600);
  leds[0].Initialize(2,781,515);
  leds[1].Initialize(3,2014,1348);
  leds[2].Initialize(4,343,573);
  leds[3].Initialize(5,678,1839);
  leds[4].Initialize(6,342,534);
  leds[5].Initialize(7,1478,326);
  leds[6].Initialize(8,1859,351);
  leds[7].Initialize(9,777,888);
}

void loop ()
{
  for(int i=0; i<8; i++)
  {
    leds[i].Refresh();
  }
}
