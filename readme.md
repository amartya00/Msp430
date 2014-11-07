************************************************************************
**                    Temperature sensor project                      **
************************************************************************


Project: 
---------------
This project is about implementing a temperature sensor system 
using the following components:
a) TI MSP430 Launchpad as the microcontroller
b) XBee pro series 2 for communication
c) A temperature sensor package.

The readme contains about the following:
I  . Programming the MSP430
II . Set up and interface the XBee
III. Set up and interface the temperature sensor
IV . References






I. Programming the msp430
----------------------------
The platform in use here is Ubintu 14.10. The toolchain used is the 
(available in official repos) the msp430-gcc toolchain. The necessary 
tools are: [1]
	a) binutils-msp430
	b) gcc-msp430
    c) msp430-libc
    d) mspdebug
To install type the following commands:
sudo apt-get install binutils-msp430 gcc-msp430 msp430-libc mspdebug

The source for project has been written in C. All cod can be found folder 
Code/src. Compile by typing "make". A binary called "bin.elf" will be
generated. To program the microcontroller with the generated binary, we 
use the mspdebug utility.

Type "sudo mspdebug rf2500" to enter the utility.
While in the utility, type: "prog bin.elf" and then "run" to start 
execution on the microcontroller. [3]

Refer to [2] for a complete guide on programming the MSP 430.





II. Setting up the Xbee Pro S2.
--------------------------------
Again the platform here is Ubuntu 14.10. Before the Xbee can be connected 
to our microcontroller, it has to be set up with the desired baud rate 
and pan ID [4]. 

In order to do, that, we have to connect the Xbee to the 
computer. We will use an adapter kit (Xbee Explorer) to do that. We will
also need 2 software packages for the same. One is the  Moltosenso network
manager, an alternative to the Windows only X-CTU. And also we will need 
the drivers for the FTDI FT232RL chip in the Xbee USB Explorer [4].

Both the software packages have been provided in the folder "Packages".


IV. References
-----------------
[1] Programming the MSP430 Launchpad on Ubuntu
	http://www.mycontraption.com/programming-the-msp430-launchpad-on-ubuntu/
	
[2] mspgcc. A port of the GNU tools to the Texas Instruments MSP430 
	microcontrollers
	
[3] How-to: Launchpad programming with Linux
	http://hackaday.com/2010/08/11/how-to-launchpad-programming-with-linux/
	
[4] Xbee Starter Guide
	http://www.tristantech.net/articles/xbee_tutorial/1.php
	
[5]












