int A = 4,B = 5, C = 6, D = 7; 

int A_count = 0, B_count = 0, C_count = 0, D_count = 0;

void countDISP();

void setup() 
{
  Serial.begin(9600);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
}

void loop() 
{
  if (digitalRead(A) == HIGH)
  {
    A_count++;
    countDISP();

    delay(200);
    while(true)
    {
      if(digitalRead(A) == LOW)
        break;
    }
  }

   else if (digitalRead(B) == HIGH)
  {
    B_count++;
    countDISP();

    delay(200);
    while(true)
    {
      if(digitalRead(B) == LOW)
        break;
    }
  }

   else if (digitalRead(C) == HIGH)
  {
    C_count++;
    countDISP();

    delay(200);
    while(true)
    {
      if(digitalRead(C) == LOW)
        break;
    }
  }

  else if (digitalRead(D) == HIGH)
  {
    D_count++;
    countDISP();

    delay(200);
    while(true)
    {
      if(digitalRead(D) == LOW)
        break;
    }
  }
  
}

void countDISP()
{
  
  Serial.print("A = ");
  Serial.print(A_count);
  Serial.print(", B = ");
  Serial.print(B_count);
  Serial.print(", C = ");
  Serial.print(C_count);
  Serial.print(", D = ");
  Serial.println(D_count);

}
