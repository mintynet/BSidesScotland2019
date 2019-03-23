# BSidesScotland2019
Repository for information on the BSides Scotland 2019 / Car Hacking Village UK Badge
<br>The badge is a cheap device for people to get into car hacking, the sketch that will be below will cause disco mode on PD0 'The Car in a Box'
<br><br><b>BSides Scotland and I take no responsibility for any issues caused if using either the hardware or the code</b>
<br><br>Requires the use of the following Arduino library
<br><br>https://github.com/coryjfowler/MCP_CAN_lib
<br><br>Below is the components which are required to build your own BSides Scotland 2019 Badge
<br><br>The components shown below are available from aliexpress/ebay/amazon in that order of cost, but delivery time is probably highest on the cheaper.
<br>[Arduino Nano](https://www.ebay.co.uk/itm/USB-Nano-V3-0-ATMEGA328P-CH340G-5V-16M-Micro-Controller-Board-For-Arduino/201649419996)
<br>[MCP2515 Module](https://www.ebay.co.uk/itm/For-Arduino-MCP2515-CAN-Bus-Module-TJA1050-Receiver-SPI-Module/311520457612)
<br>I have used the above links from alice1101983 myself and delivery is normally 3 weeks to UK
<br>[OBD2 Plug](https://www.aliexpress.com/item/Car-Diagnostic-Tool-OBD-Male-Plug-16Pin-OBD2-Connector-OBD-2-16-Pin-OBD-II-Adaptor/32790225414.html)
<br>I have also used the above link, delivery has been varied from 9 to 40 days, but that may because I was ordering bulk.

<br><br>https://github.com/mintynet/nano-can has the other sketches for the device.

<br><b>Schematic</b>
![PCB Schematic](Schematic_nano-can-pcb.png)
Note:
<br>Arduino Nano, the square at one end denote the position of the USB connector.
<br><b>TIP</b><br>Add extra solder to the sides of the USB connector or you may rip the USB connector of the board
![Arduino Nano](arduino-nano.jpg)
<br>MCP2515 Module goes below the nano but <b>DO NOT</b> solder the Terminator Jumper or CAN pin headers to the PCB
<br>You may require a jumper on the Terminator resistor if using back to back.
<br>To solder the CAN module to the board, add extra solder to the back of the pins, then heat the pins and push through so that the pins are on the rear, then remove the plastic pin spacer left on the top and add extra solder to the pins.
![MCP2515](mcp2515.JPG)
<br>L goes to OBD2 pin 14
<br>H goes to OBD2 pin 6
<br><b>Completed Bottom</b>
![Completed BOTTOM](bottom-complete.jpg)
<br><b>OBD2 connector</b>
![OBD2 connector](obd2-connector.jpg)
<br><b>PCB Top</b><br>
![PCB TOP](top-pcb.jpg)
<br><b>PCB Bottom</b><br>
![PCB BOTTOM](bottom-pcb.jpg)
