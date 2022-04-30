//written by Gaurav C. Divecha
const int LMotor_pin1 = 9; // Pin 9 is named as Left
Motor Pin 1
const int LMotor_pin2 = 10; // Pin 10 is named as Left Motor Pin
2
const int RMotor_pin1 = 11; // Pin 11 is named as Right Motor
Pin 1
const int RMotor_pin2 = 12; // Pin 12 is named as Right Motor
Pin 2
const int speaker = 13; // Pin 13 as named as speaker
#define NOTE_C5 523 //Assign a frequency
value to each note
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 988
#define NOTE_C6 1047
int doremifa[]=
{NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5,NOTE_B5,NOTE_C6};
//Create an
int ledPins[] = {1,2,3,4,5,6,7,8}; // Create an array(sequence)of
numbers and call it ledPins
void setup()
{
for(int count = 0; count <= 8; count++){
pinMode(ledPins[count],OUTPUT); // ledPins is replaced by the value 1
to 8 from the array and
// All 8
pins are now set as outputs.
}
pinMode(LMotor_pin1, OUTPUT); // Set Pins 9, 10, 11, 12 as
OUTPUTS
pinMode(LMotor_pin2, OUTPUT);
pinMode(RMotor_pin1, OUTPUT);
pinMode(RMotor_pin2, OUTPUT);
pinMode(speaker, OUTPUT); // Set speaker - pin 13
as an output
pinMode(1, OUTPUT); // Set the LED pins as
OUTPUTS using the pinMode command.
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
}
void loop()
{
// this
is the sequence of mini programs. These can be repeated or rearranged.
rhythm1();
rhythm2();
}
void rhythm1 ()
{
//rhythm 1 starts
chorus (); //refers to chorus
Move_Forward ();
digitalWrite(1, HIGH); // turn Pin 1 ON
tone(speaker, doremifa[3]);
delay(500); // duration the
Speaker stays ON
noTone (speaker);
delay(50);
Move_Backward ();
digitalWrite(2, HIGH);
tone(speaker, doremifa[3]);
delay(500);
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(3, HIGH);
tone(speaker, doremifa[3]);
delay(800);
noTone (speaker);
delay(50);
Spin_Left ();
digitalWrite(4, HIGH);
tone(speaker, doremifa[3]);
delay(500);
noTone (speaker);
delay(50);
digitalWrite(5, HIGH);
tone(speaker, doremifa[2]);
delay(500);
noTone (speaker);
delay(50);
digitalWrite(6, HIGH);
tone(speaker, doremifa[2]);
delay(800);
noTone (speaker);
delay(50);
Spin_Right ();
digitalWrite(7, HIGH);
tone(speaker, doremifa[1]);
delay(500);
noTone (speaker);
delay(50);
digitalWrite(8, HIGH);
tone(speaker, doremifa[1]);
delay(500);
noTone (speaker);
delay(100);
digitalWrite(1, LOW); // turn Pin 1 OFF
digitalWrite(4, LOW); // turn Pin 4 OFF
digitalWrite(7, LOW); // turn Pin 7 OFF
tone(speaker, doremifa[1]);
delay(500);
noTone (speaker);
delay(50);
Turn_Left ();
digitalWrite(2, LOW);
digitalWrite(5, LOW);
digitalWrite(8, LOW);
tone(speaker, doremifa[2]);
delay(500);
noTone (speaker);
delay(50);
Turn_Right ();
digitalWrite(3, LOW);
digitalWrite(6, LOW);
tone(speaker, doremifa[1]);
delay(800);
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(1, HIGH); // turn Pin 1 ON
digitalWrite(2, HIGH); // turn Pin 1 ON
digitalWrite(3, HIGH); // turn Pin 1 ON
digitalWrite(4, HIGH); // turn Pin 1 ON
digitalWrite(5, HIGH); // turn Pin 1 ON
digitalWrite(6, HIGH); // turn Pin 1 ON
digitalWrite(7, HIGH); // turn Pin 1 ON
digitalWrite(8, HIGH); // turn Pin 1 ON
tone(speaker, doremifa[4]);
delay(800);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
noTone (speaker);
delay(50); // rhythm 1 ends
}
void rhythm2 ()
{
chorus ();
for (int count = 0; count <= 1; count++){
Move_Forward ();
digitalWrite(1, HIGH);
digitalWrite(4, HIGH);
digitalWrite(7, HIGH);
tone(speaker, doremifa[3]);
delay(500);
digitalWrite(1, LOW);
digitalWrite(4, LOW);
digitalWrite(7, LOW);
noTone (speaker);
delay(50);
}
Move_Backward ();
digitalWrite(1, HIGH); // turn Pin 1 ON
digitalWrite(4, HIGH); // turn Pin 4 ON
digitalWrite(7, HIGH); // turn Pin 7 ON
tone(speaker, doremifa[3]);
delay(800);
digitalWrite(1, LOW); // turn Pin 1 OFF
digitalWrite(4, LOW); // turn Pin 4 OFF
digitalWrite(7, LOW); // turn Pin 7 OFF
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(1, HIGH);
digitalWrite(4, HIGH);
digitalWrite(7, HIGH);
tone(speaker, doremifa[3]);
delay(500);
digitalWrite(1, LOW);
digitalWrite(4, LOW);
digitalWrite(7, LOW);
noTone (speaker);
delay(50);
Move_Backward ();
digitalWrite(2, HIGH);
digitalWrite(5, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[2]);
delay(500);
digitalWrite(2, LOW);
digitalWrite(5, LOW);
digitalWrite(8, LOW);
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(2, HIGH);
digitalWrite(5, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[2]);
delay(800);
digitalWrite(2, LOW);
digitalWrite(5, LOW);
digitalWrite(8, LOW);
noTone (speaker);
delay(50);
for (int count = 0; count <= 1; count++){ //repeats the code twice
digitalWrite(3, HIGH);
digitalWrite(6, HIGH);
tone(speaker, doremifa[4]);
delay(500);
digitalWrite(3, LOW);
digitalWrite(6, LOW);
noTone (speaker);
delay(50);
}
Rotate_Left ();
digitalWrite(1, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[3]);
delay(500);
noTone (speaker);
delay(50);
Rotate_Right ();
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
tone(speaker, doremifa[1]);
delay(500);
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(1, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[0]);
delay(2000);
noTone (speaker);
delay(50);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
}
void chorus ()
{
for(int count = 0; count <= 1; count++){
Move_Forward ();
digitalWrite(1, HIGH);
digitalWrite(4, HIGH);
digitalWrite(7, HIGH);
tone(speaker, doremifa[2]);
delay(500);
digitalWrite(1, LOW);
digitalWrite(4, LOW);
digitalWrite(7, LOW);
delay(50);
Move_Backward ();
digitalWrite(2, HIGH); // turn Pin 2 ON
digitalWrite(5, HIGH); // turn Pin 5 ON
digitalWrite(8, HIGH); // turn Pin 8 ON
noTone (speaker);
delay(50);
tone(speaker, doremifa[2]);
delay(500);
digitalWrite(2, LOW); // turn Pin 2 OFF
digitalWrite(5, LOW); // turn Pin 5 OFF
digitalWrite(8, LOW); // turn Pin 8 OFF
delay(50); // duration the LED is OFF
Move_Forward ();
digitalWrite(3, HIGH); // turn Pin 3 ON
digitalWrite(6, HIGH); // turn Pin 6 ON
noTone (speaker);
delay(50);
tone(speaker, doremifa[2]);
delay(800);
digitalWrite(3, LOW); // turn Pin 3 OFF
digitalWrite(6, LOW); // turn Pin 6 OFF
delay(50); // duration the LED is OFF
noTone(speaker);
delay (50);
}
Spin_Left ();
digitalWrite(1, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[2]);
delay(500);
digitalWrite(1, LOW);
digitalWrite(8, LOW);
noTone (speaker);
delay(50);
Spin_Right ();
digitalWrite(2, HIGH);
digitalWrite(7, HIGH);
tone(speaker, doremifa[4]);
delay(500);
digitalWrite(2, LOW);
digitalWrite(7, LOW);
noTone (speaker);
delay(50);
Turn_Left ();
digitalWrite(3, HIGH);
digitalWrite(6, HIGH);
tone(speaker, doremifa[0]);
delay(500);
digitalWrite(3, LOW);
digitalWrite(6, LOW);
noTone (speaker);
delay(50);
Turn_Right ();
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
tone(speaker, doremifa[1]);
delay(500);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
noTone (speaker);
delay(50);
Move_Forward ();
digitalWrite(1, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
tone(speaker, doremifa[2]);
delay(800);
digitalWrite(1, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
noTone (speaker);
delay(50);
}
void Move_Forward ()
{
digitalWrite(LMotor_pin1, HIGH); // Left Motor moves Forward
digitalWrite(LMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, HIGH); // Right Motor moves Forward
digitalWrite(RMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
}
void Move_Backward ()
{
digitalWrite(LMotor_pin1, LOW); // Left Motor moves Backwards
digitalWrite(LMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, LOW); // Right Motor moves Backwards
digitalWrite(RMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
}
void Turn_Left ()
{
digitalWrite(LMotor_pin1, LOW); // Left Motor moves One way
digitalWrite(LMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, HIGH); // Right Motor moves the Other way
digitalWrite(RMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
}
void Turn_Right ()
{
digitalWrite(LMotor_pin1, HIGH); // Left Motor moves One way
digitalWrite(LMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, LOW); // Right Motor moves the Other way
digitalWrite(RMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
Page 20
}
void Rotate_Left ()
{
digitalWrite(LMotor_pin1, LOW); // Left Motor moves One way
digitalWrite(LMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, HIGH); // Right Motor moves the Other way
digitalWrite(RMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
}
void Rotate_Right ()
{
digitalWrite(LMotor_pin1, HIGH); // Left Motor moves One way
digitalWrite(LMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, LOW); // Right Motor moves the Other way
digitalWrite(RMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
}
void Spin_Left ()
{
digitalWrite(LMotor_pin1, LOW); // Left Motor moves One way
digitalWrite(LMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, LOW); // Right Motor does not move
digitalWrite(RMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
}
void Spin_Right ()
{
digitalWrite(LMotor_pin1, LOW); // Left Motor does not move
digitalWrite(LMotor_pin2, LOW); // Change the “HIGH” or “LOW” to suit your robot.
digitalWrite(RMotor_pin1, LOW); // Right Motor moves the Other way
digitalWrite(RMotor_pin2, HIGH); // Change the “HIGH” or “LOW” to suit your robot.
}
