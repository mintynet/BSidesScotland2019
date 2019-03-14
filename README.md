# BSidesScotland2019
Repository for information for the BSides Scotland 2019 / Car Hacking Village UK Badge
<br>The badge is a cheap device for people to get into car hacking, the sketch that will be below will cause disco mode on PD0 'The Car in a Box'
<br><br><b>BSides Scotland and I take no responsibility for any issues caused if using either the hardware or the code</b>
<br><br>Requires the use of the following Arduino library
<br><br>https://github.com/coryjfowler/MCP_CAN_lib
<br><br>Below is the components which are required to build your own Nano-can Adapter
<br><br>The components shown below are available from aliexpress/ebay/amazon in that order of cost, but delivery is probably highest on the cheaper, search for alice1101983 on ebay for the active components

<br><br>https://github.com/mintynet/nano-can has the other sketches for the device.

<br><b>Schematic</b>
![PCB Schematic](Schematic_nano-can-pcb.png)
Note:
<br>Arduino Nano goes on the top with the URL on.
![Arduino Nano](arduino-nano.jpg)
<br>MCP2515 Module goes on the bottom but DO NOT solder the Terminator Jumper or CAN pin headers to the PCB
<br>You may require a jumper on the Terminator resistor
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
