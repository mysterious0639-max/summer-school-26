# Q4. Setting up I2C in TinkerCAD

To set up I2C communication between two Arduino Unos in TinkerCAD, follow these steps:

1. **Hardware Connections**:
   - Connect the **A4 (SDA)** pin of the Master Arduino to the **A4 (SDA)** pin of the Slave Arduino.
   - Connect the **A5 (SCL)** pin of the Master Arduino to the **A5 (SCL)** pin of the Slave Arduino.
   - Connect the **GND** pins of both Arduinos together to share a common ground.

2. **Software Setup**:
   - Include the `<Wire.h>` library in the code for both devices.
   - Initialize I2C in `setup()` using `Wire.begin()` for the Master, and `Wire.begin(slave_address)` for the Slave device.
