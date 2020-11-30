# DHT11-Temparature-and-Humidity-sensor-Arduino 


## DISCRIPTION 
Using DHT11 temperature and humidity sensor to measure the temperature and humidity with Arduino. 

## Components required  
* DHT11 sensor module 
* Arduino UNO 
* Jumper wires 
* Bread board 

## Connections 
Arduino UNO |  DTH11 
-----------|------------- 
5V     |    Vcc 
GND    |    GND 
D4     |    DATA 

![DHT11 Arduino connections.png](https://github.com/akashsjjan/DHT11-Temparature-and-Humidity-sensor-Arduino/blob/main/DHT11%20Arduino%20connections.png) ![DHT11 arduino circuit.jpg](https://github.com/akashsjjan/DHT11-Temparature-and-Humidity-sensor-Arduino/blob/main/DHT11%20arduino%20circuit.jpg)

## Adding DHT11 library 
Download the DHT library from https://github.com/adafruit/DHT-sensor-library.git 

Open Arduino IDE and go to 

Sketch > Include Library > Add .ZIP Library... 

Choose the downloaded file DHT-sensor-library.zip click on OK. 

## Programming Arduino 
open the DHT.ino in Arduino IDE.

go to tools > Board Select Arduino UNO

Select the Port (ex: COM5).

Verify the code and upload the code.
