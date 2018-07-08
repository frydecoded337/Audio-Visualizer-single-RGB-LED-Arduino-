int red = A3; //defining rgb pins
int blue =A2;
int green = A1;

float hut; //defining variable which stores current voltage value
void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);


}

void loop() {
  hut = analogRead(4); //initializing current value of voltage 
 

  if(hut < 130) //series of conditional statements for a range of voltage values corresponding to the frequencies of the audio playing
  {
    analogWrite(blue, 255); // assigning custom color to the rgb led with respect to the voltage range
    analogWrite(green, 255);
    Serial.print(hut); Serial.println("    red"); // printing voltage and color on the serial monitor(optional)
  }
  if(hut < 250 && hut >= 130)
  {
    analogWrite(green, 255);
    analogWrite(blue, 0);
    analogWrite(red, 0);
    Serial.print(hut); Serial.println("  pink");
  }
  if(hut < 400 && hut >= 250)
  {
    analogWrite(green, 255);
    analogWrite(red, 255);
    analogWrite(blue, 0);
    Serial.print(hut); Serial.println("   blue");
  }
  if(hut < 575 && hut >= 400)
  {
    analogWrite(red, 255);
    analogWrite(blue, 255);
    analogWrite(green, 0);
     Serial.print(hut); Serial.println("    green mid");

  }
  if(hut < 650 && hut >= 575)
  {
     analogWrite(red, 0);
    analogWrite(blue, 0);
    analogWrite(green, 255);
     Serial.print(hut); Serial.println("    pink mid");
  }
  if(hut < 710 && hut >= 650)
  {
    analogWrite(red, 255);
    analogWrite(green, 0);
    analogWrite(blue, 0);
    Serial.print(hut); Serial.println("   cyan");
  }
  if(hut < 780 && hut >= 710)
  {
    analogWrite(green, 0);
    analogWrite(red, 0);
    analogWrite(blue, 0);
     Serial.print(hut); Serial.println("   white");
  }
  if(hut < 840 && hut >= 780)
  {
    analogWrite(blue, 255);
    analogWrite(green, 0);
    analogWrite(red, 0);
    Serial.print(hut); Serial.println("   yellow");
  }
  if(hut >= 840)
  {

    analogWrite(blue, 255);
    analogWrite(red, 255);
    analogWrite(green, 0);
    Serial.print(hut); Serial.println("    green");
  }
   
  delay(50); //delay of 50 milliseconds in between mapping voltage values

}
