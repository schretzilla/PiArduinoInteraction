# Send Message to Arduino that turns light on
# Python 2.7
# Use with LightController 

import serial
import struct

#Port may change, check the arduino port
ser = serial.Serial('/dev/ttyACM0', 9600)

print("Telling Arduino to turn light on...")
valueToWrite = struct.pack('>B', 2)
ser.write(valueToWrite)

ser.close

