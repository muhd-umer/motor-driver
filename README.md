# Motor Driver
Often times, dedicated Motor Drivers (such as L293D) are not readily available and one may be tempted to implement one of their own from discrete components. This repo aims to act as a reference and aid whosoever may desire making a High Voltage / High Power Motor Driver themselves.
## Schematic
Use design.pdsprj (ProteuS v8.13) to simulate the schematic. Use the hex file in `code` folder to programatically load Arduino board.
![Schematic](resources/schematic.bmp)
## PCB Design
![PCB](resources/pcb.BMP)
## 3D Visualization
![Visualization](resources/vis.png)
## Arduino (.ino) Files for Testing Functionality
`code` folder contains the _.ino_ file that is programmed to run a robot car in all directions using two DC motors. End-user can modify the attached code to their needs.
