const int pressurePin = A3;




// You measured the Arduino 5V rail at about 5.01 V
const float ADC_REFERENCE = 5.01;

// Assumed pressure sensor specifications
const float MIN_VOLTAGE = 0.50;     // V at 0 psi
const float MAX_VOLTAGE = 4.50;     // V at 150 psi
const float MAX_PRESSURE = 150.0;   // psi

void setup() {
  Serial.begin(115200);

  // Configure A1 as an input
  pinMode(pressurePin, INPUT);

  delay(1000);
}

void loop() {

  // -----------------------------
  // Read and average ADC samples
  // -----------------------------
  long total = 0;

  for (int i = 0; i < NUM_SAMPLES; i++) {
    total += analogRead(pressurePin);
    delay(2);
  }

  float raw = total / (float)NUM_SAMPLES;

  // -----------------------------
  // Convert ADC reading to voltage
  // -----------------------------
  float voltage =
      raw * (ADC_REFERENCE / 1023.0);

  // -----------------------------
  // Convert voltage to pressure
  // -----------------------------
  float pressure =
      (voltage - MIN_VOLTAGE) *
      (MAX_PRESSURE /
      (MAX_VOLTAGE - MIN_VOLTAGE));

  // -----------------------------
  // Print results
  // -----------------------------
  Serial.print("Raw:");
  Serial.print(raw, 1);

  Serial.print("\tVoltage:");
  Serial.print(voltage, 3);

  Serial.print("\tPressure_calc_psi:");
  Serial.println(pressure, 2);


}