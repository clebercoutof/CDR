int sensorTotalCurrentPin = A0;
int sensorSynchronousMotorCurrentPin = A1;
int sensorInverterVoltagePin = A2;
int sensorBusVoltagePin = A3;
int TOTAL_CURRENT_CONSTANT = 1;
int SYNCHRONOUS_CURRENT_CONSTANT 1;
int INVERTER_VOLTAGE_CONSTANT;
int BUS_VOLTAGE_CONSTANT;

void setup(){
    pinMode(sensorBusVoltagePin, INPUT);
    pinMode(sensorInverterVoltagePin,INPUT);
    pinMode(sensorSynchronousMotorCurrentPin,INPUT);
    pinMode(sensorTotalCurrentPin,INPUT);
}

void loop(){
    totalCurrentValue = analogRead(sensorTotalCurrentPin)* TOTAL_CURRENT_CONSTANT;
    synchronousCurrentValue = analogRead(sensorSynchronousMotorCurrentPin) *SYNCHRONOUS_CURRENT_CONSTANT;
    

}