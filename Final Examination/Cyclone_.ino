
//***********************************LCD I2C Protocol**************************
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//***********************************Pin Assignment*****************************
const int LED_FIRST = 2;
const int LED_LAST = 8;
const int LED_TARGET = 8;
const int BUTTON = 9;

//***********************************Variables Declaration**********************
int score = 0;                                //for storing score 
int tries = 0;                                //for storing number of attempts

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  //define LCD 

void setup() 
{
  for (int pin = LED_FIRST; pin <= LED_LAST; pin++) 
  {
    pinMode(pin, OUTPUT);
  }
  pinMode(BUTTON, INPUT);
}

// Like delay, except quits and returns true when
// the button matches the supplied state 
bool waitUntil(int ms, uint8_t state) {
  long startTime = millis();
  while(millis() - startTime < ms) {
    delay(5);
    if (digitalRead(BUTTON) == state)
      return true;
  }
  return false;
}

const int NUM_LIGHTS = LED_LAST - LED_FIRST + 1;
const int MAX_DELAY = 300;
const int MIN_DELAY = 10;

//******************************delay of LED function******************************

int computeDelay() 
{
  int delay = MAX_DELAY - score * (MAX_DELAY - MIN_DELAY) / NUM_LIGHTS;
  if (delay < 1)
    delay = 1;
  return delay;
}

// Make the lights turn on and off in a cycle while the button is held.
// Return the light that was on when the button is released.
int cycle() 
{
  int laston = LED_FIRST;
  bool fwd = true;
  
  while(true) {
    // Turn the light on, wait a bit, then turn it off
    digitalWrite(laston, HIGH);
    if (waitUntil(computeDelay(), LOW))
      return laston;
    digitalWrite(laston, LOW);

    // Reverse direction if we've reached one of the ends
    if (laston == LED_LAST)
      fwd = false;
    if (laston == LED_FIRST)
      fwd = true;

    // Update for the next light
    if (fwd)
      laston++;
    else
      laston--;
  }
}

// Turn on the first 'lights' and the rest off
void setLights(int lights) {
  for (int i = 0; i < NUM_LIGHTS; i++) {
    digitalWrite(i + LED_FIRST, i < lights ? HIGH : LOW);
  }
}

//******************************score function******************************

void showscore() {
  if (score >= NUM_LIGHTS) {
    for (int i = 0; i < 50; i++) 
    {
      setLights(score);
      delay(50);
      setLights(0);
      if (waitUntil(50, HIGH))
        break;
    }
  } else {
    setLights(score);
    waitUntil(5000, HIGH);
    setLights(0);
  }   
}

//******************************display score function******************************

void displayScore() 
{
  lcd.setCursor(0,1);
  lcd.print("Tries=");
  lcd.print(tries);
  lcd.setCursor(9,1);
  lcd.print("Score=");
  lcd.print(score);  
  setLights(0);
}

//*****************************speed level display function************************

void speedlvl()
{
  if (computeDelay() == 300)
  {
    lcd.print(" 1");
  }

  else if (computeDelay() == 259)
  {
    lcd.print(" 2");
  }

  else if (computeDelay() == 218)
  {
    lcd.print(" 3");
  }

  else if (computeDelay() == 176)
  {
    lcd.print(" 4");
  }

  else if (computeDelay() == 135)
  {
    lcd.print(" 5");
  }

  else if (computeDelay() == 93)
  {
    lcd.print(" 6");
  }

  else if (computeDelay() == 53)
  {
    lcd.print(" 7");
  }

  else
  {
    lcd.print(" MAX");
  }
}

void loop() 
{
  
  tries = 0;
  score = 0;
//*******************************Main menu*********************************************

  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("  Cyclone! ");
  lcd.setCursor(0,1);
  lcd.print("Press to start");
  setLights(0);
  
  while (tries < 10)
  {
//*****************If the button is pressed, start the cycle.*************************

    if (digitalRead(BUTTON) == HIGH) 
    {
      tries++;
      lcd.clear();
      lcd.print("Speed Lvl: ");
      speedlvl();
      displayScore();
    
      int light = cycle();
      
      waitUntil(1000, HIGH);            // Leave the last light on for a little bit.
      digitalWrite(light, LOW);
      {
//********************* update the score**************************************
          lcd.clear();
        if (light == LED_TARGET) 
        {
          score++;
          if (score > 8)                  // More than 8 points, Win.
          {
            lcd.print(" You Win ");
          } 
          else 
          {
            lcd.print("Fair Enough!");    // 5 - 7 points, Fair Enough
          }
        }
    
        else 
        {
          if(score < 5)
          lcd.print("You're so bad.");    // 4 points and below, Bad at this game
        }
        displayScore();
        showscore();
      }   
    }
 }

  delay (2000);
}
