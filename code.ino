int sensorTotalCurrentPin = A0;
int sensorSynchronousMotorCurrentPin = A1;
int sensorInverterVoltagePin = A2;
int sensorBusVoltagePin = A3;
#define TOTAL_CURRENT_CONSTANT 1
#define SYNCHRONOUS_CURRENT_CONSTANT 1
#define INVERTER_VOLTAGE_CONSTANT 1
#define BUS_VOLTAGE_CONSTANT 1

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