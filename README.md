# MacroMacro
a large gaming macro pad that runs on Vial

![](https://i.imgur.com/9tXAabW.jpg)

If you're looking to build one of your own, you can upload the **Macropad-gerber.zip** from the **gerber** folder to JLCPCB. 

If you don't feel like sodering diodes, you can upload the File in the **BOM** folder, along with the **macropad-bottom-pos.csv** in the **PIP** folder. 

You will need to solder in your hot swap sockets though. I didn't use a hot-swap Footprint that was ready for manufacturing, unfortunately. You're welcome to do this if you want to have everything but the MCU assembled by JLCPCB.

This uses a Waveshare RP2040 Zero as its MCU. Please see the image below. As you can see the 2040 is soldered in face down. This is not the conventional way of mounting these. The reason for doing it this way
is to keep the gamepad thin.

![](https://i.imgur.com/B8iK9JO.png)
The firmware can be found in the "Firmware" folder. All you need to do is hold the boot button down while plugging it in, then you drag and drop the .UF2 file into the "drive"
I have also added the Keyboard folder in case you want to compile it yourself.

as always it will also be in the [Keyboard Dweebs Firmware repository](https://github.com/doesntfazer/Keyboard-Dweebs-Firmware-repository/tree/main) as well. 

Case files for 3d printing can be found in the "3d Models" folder as well.
