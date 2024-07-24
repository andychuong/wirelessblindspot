# Wireless Blindspot Detection System

This project was designed to be an easy to install/use blindspot detection system for motor vehicles. It was inspired by the advances of technology and computed embedded into modern cars. 

This project is comprised of two unites, a receiver and a sensor. The sensor unit is attached to your rear quarter panel with a magnet and has an ultrasonic sensor attached to it. The receiver component is made to sit inside of your car with an array of LED lights to notify the driver of objects in their blindspot. 

## Technology
- Arduino
- Bluetooth
- Eagle CAD

## Hardware
- [2x SparkFun ProMicro 5v](https://www.sparkfun.com/products/12640)
- [2x xBee](https://www.sparkfun.com/products/8665)
- [Weatherproof Ultrasonic Sensor](https://www.amazon.com/Waterproof-Ultrasonic-Distance-Measuring-Transducer/dp/B01J5KZU8M)
- [Individually Addressable LED Strip](https://www.amazon.com/ALITOVE-WS2812B-Individually-Addressable-Waterproof/dp/B00ZHB9M6A)

## Images
More images [here](https://github.com/andychuong/wirelessblindspot/tree/master/Images)
![Complete Units](https://github.com/andychuong/wirelessblindspot/blob/master/Images/blindspot-finish1.jpg?raw=true)
![Circuit boards](https://github.com/andychuong/wirelessblindspot/blob/master/Images/blindspot-pcb.jpg?raw=true)

## Going Futher
### Built in charging solution
Currently, this project has you remove the LiPo batteries and plug them in a charger when they are out of charge. In the future, it woudl be nice to implement some kind of integrated setup to allow users to charge the batteries without disassembling the units. 
### Weather Proofing
The sensor unit that is attached to the exterious of the vehicle would need to have some sort of weatherproofing added to it. The addition of some sort of gaskets would greatly improve this. 
### Size Reduction
The footprint of our units isn't overly large, however I believe the size can be greatly reduced. To improve this, my first though would be to use a microcontroller such as the Adafruit Feather Bluefruit. This would combine our microcontroller with our bluetooth units. This would also solve our charging situation. Another idea would be to completely build our own circuit boards with everything we need implemented into the PCB with surface mounted components. 

---
###### Done in collaboration with Sean Connolly, Elijah Fisk, and Alex Schwartz. 
