byte seconds = 0;
byte minutes = 0;
byte hours = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //  setting date and time
 Serial.print("Enter the hours passed : ");
 while (!Serial.available());
 hours = Serial.readString().toInt();
 Serial.println(hours);
 
 Serial.print("Enter the minutes passed : ");
 while (!Serial.available());
 minutes = Serial.readString().toInt();
 Serial.println(minutes);
}

void loop() {
  // put your main code here, to run repeatedly:
  time_check();
  delay(1000);
 String time = "Time : " + String(hours) + ":" + String(minutes) +
               ":" + String(seconds);
 
   Serial.println(time);
 seconds++;
}

void time_check(){
 if (seconds >= 60){
   seconds = 0;
   minutes++;
 }
 if (minutes >= 60){
   minutes = 0;
   hours++;
 }
 if (hours >= 24){
   hours = 0;
 }
}