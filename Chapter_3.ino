// Chapter 3 - Chasing Lights the Easy Way.

void setup ()                // the setup function runs once
{
  pinMode (6, OUTPUT);       // set pins 6 to 13 as output pins
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);

}

void loop ()              // the loop function runs repeatedly
{
  for (int x = 6; x <=13; x = x+1) //for loop counts from 6 to 13
  {
    digitalWrite (x, HIGH);   // turn pin x on
    delay (1000);             // wait one second
    digitalWrite(x,LOW);      // turn pin x off
  }

  for (int x = 12; x >6; x = x-1) // count down from 12 to 7
  {
    digitalWrite (x, HIGH);   // turn pin x on
    delay (1000);             // wait on second
    digitalWrite (x, LOW);    // turn pin x off
  }
}
