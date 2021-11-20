# HID_Joystick 
> HID Joystick controller with Atmega32-u4.
Currently this code has 6 axis/Analog inputs and 2 buttons. With The help of the used liberaries more analog inputs and a lot more digital buttons can be utilized.

## Table of Contents
* [General Info](#general-information)
* [Library Used](#Library-Used)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [3D Enclosure](#STL-Files)
* [Contact](#contact)
<!-- * [License](#license) -->


## General Information
- Uses Arduino Joystick Library.
- Can get you started with the HID-projects with zero to no effor.
- Personally designed to be used With OpenHD Project.
- The project is only possible because of the Arduino Joystick Library by MHeironimus. 
<!-- You don't have to answer all the questions - just the ones relevant to your project. -->


## Library Used
- https://github.com/MHeironimus/ArduinoJoystickLibrary


## Features
The joystick has the following features:
- Axis (default: 6, can be upto 8)
- Buttons (default: 2, can be upto 32)
- Less than 100ms latency (Tested on GNU/Linux Kernal 5.11.0-38-generic)
- Almost plugh and play.


## Setup
This code can only be used with Arduino IDE 1.6.6 (or above).
Download and install The library https://github.com/MHeironimus/ArduinoJoystickLibrary/archive/master.zip



## Usage
Download this repository open the main.ino and configure the pins according to your hardware setup or 
simply upload and have fun.

`int X1 = A0;`
`int Y1 = A1; ....` Analog pin Configuration.


`float Aux1;` 
`float Aux2;` Analog auxiliray pins.

`int Butt1 = 14;
 int Butt2 = 15; ....` Digital Buttons pins.

`float JoystickX1,` 
`float JoystickY1; ....` X and Y Axis.

You can create more varibles to expand the channels and
going through the liberary documentation is recommanded [Library](https://github.com/MHeironimus/ArduinoJoystickLibrary/blob/master/README.md).


## Project Status
- Project is: _in progress_,.


## Acknowledgements
- Huge thanks to [@MHeironimus](https://github.com/MHeironimus) for this great Library.

## STL Files
- Under Construction, Please wait :-)

## Contact
- Created by [@Vishal01Mehra](https://github.com/Vishal01Mehra) - feel free to contact me!


<!-- Optional -->
<!-- ## License -->
<!-- This project is open source and available under the [... License](). -->

<!-- You don't have to include all sections - just the one's relevant to your project -->
