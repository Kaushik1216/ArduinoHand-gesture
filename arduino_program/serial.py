import serial
import pyautogui

arduino_Serial = serial.Serial('com6',9600)

while l:
    data = arduino_Serial.readline()
    print(type(data))
    
    if data=="Play/Pause":
        pyautogui.hotkey('space')

    data = ''
