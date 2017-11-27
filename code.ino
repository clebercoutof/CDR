int sensorTotalCurrentPin = A0;
int sensorSincronousMotorCurrentPin = A1;
int sensorInverterVoltagePin = A2;
int sensorBusVoltagePin = A3;

void setup(){
    pinMode(sensorBusVoltagePin, INPUT);
    pinMode(sensorInverterVoltagePin,INPUT);
    pinMode(sensorSincronousMotorCurrentPin,INPUT);
    pinMode(sensorTotalCurrentPin,INPUT);
}

void loop(){
    
}