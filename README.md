# DIY Midi Fighter Thing tutorial.

This is the DIY Midi Fighter project page.
This contains everything needed for you to go through and finish DIY Midi Fighter-ish thing build.

# Item List

 - **Arduino Pro Micro** * 1
Arduino Pro Micro works with atmega 32u4 chip and compatible with Arduino Leonardo, this chip is often used for custom keyboard project since it has capability to directly send key input to PC devices.
You can purchase chinese clone on Aliexpress
[LINK](https://aliexpress.com/item/1005001622051348.html)
 (I purchased "TYPE-C USB 3-6V New" version)
**! Make sure to purhase 5V version to work correctly with LED on buttons**
**! USB C version doesn't contain pullup resistor in it, so it doesn't work with USB-C - USB-C cable without tricks**

 - **Sanwa Compatible Buttons** * 16
 This is clone for Sanwa 30mm arcade button.
 [LINK](https://aliexpress.com/item/4001077002366.html)
 **!Make sure to purchase more than 16 units of this, since quality is poor and can come with bad condition**

 - Some Cables for internal connetions
 
## 3D Printing
Check 2 stl files at [STL File]()
If you don't want to slice on your own, I uploaded .gcode file to here too. [GCODE]()

Files are designed to be printed without support, **no need to add support**, just put faces down and go print.
I printed with conditions below:
 - PLA
 - 0.4mm Nozzle
 - 0.2mm Layer height
It took 8 hours for main body, 6 hours for lid using my printer

## Arduino coding/writing
Download [Arduino IDE]() first.
Also You need to install [Control-Surface](https://github.com/tttapa/Control-Surface) library for my code to work, follow [Their Instruction](https://tttapa.github.io/Control-Surface-doc/Doxygen/d8/da8/md_pages_Installation.html) to install the library.

You can DL my code [here]().
You can burn into Arduino via USB cable using Arduino IDE.
Select "Arduino Leonardo" for device and choose USB device pops up when you plugged in.

## Assembly
Assembly requires patience and little bit of soldering skills.
Here is a basic diagram.

### switch assembly
![image switch]()
|PIN on Button|Function    |Goes to|
|-------------|--------|-|
|1            |Switch +|Arduino PIN & PIN 3
|2            |Switch -|Arduino GND
|3            |LED -|PIN 1
|4            |LED +|+5V (Arduino RAW)
Arduino reads Pin 1 on switch pulldown.
 - Connect Pin 1 and 3 on the switch.
 - GND and 5V+ each share connections with other switches

### Connection to Arduino 
Connect cables coming from Pin1 on switches to Arduino input pins
![Arduino Pinassign]()
Look at the blue numbering on the diagram above.
I assigned:
 - Pin1 to Pin9 correspond with Note C1 to A1 by order **(not pin number order, pin location order)**.
 - Pin 10 to Pin 19 correspond with Note A#1 to D#2 by order **(not pin number order, pin location order)**. 

on the cord, Since C1 is the starting offset for Ableton Live drum rack.
You can customize by editing the cord.

When you finish assembly, it should look like this.
![image finished]()

## Rename Device Name (Optional)
You can change device name from "Arduino Leonardo".
Here is a [instruction](https://liveelectronics.musinou.net/MIDIdeviceName.php)
