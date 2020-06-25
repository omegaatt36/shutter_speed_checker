const int IR_rec = 2;
const int LED = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(IR_rec, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int IR_status = digitalRead(IR_rec);
  if (IR_status == 0) { 
    return;
  }
  Serial.println("start");
  unsigned long begin_time = micros();
  while (digitalRead(IR_rec) != 0) {
    //
  }
  Serial.println("end");
  double diff = double(micros()-begin_time);
  Serial.print("diff:");
  Serial.println(diff);
  if (diff > 1000000) {
    Serial.print(diff/1000000);
    Serial.println("\"");
  } else {
    Serial.print("1\\");
    Serial.println(round(1000000/diff));
  }
}
