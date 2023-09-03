# QuirkQuack - Simple Rubber Ducky based on ATtiny85

QuirkQuack is a project that aims to create a simple Rubber Ducky device based on the ATtiny85 microcontroller. It emulates a keyboard to execute predefined scripts, making it useful for various tasks like automating tasks, performing security assessments, and more.

## Features

- Emulates a keyboard to inject predefined scripts into a target computer.
- Compact and cost-effective, using the ATtiny85 microcontroller.
- Compatible with the Digispark libraries and ecosystem.

## Getting Started

These instructions will help you get started with setting up and using your QuirkQuack device.

### Prerequisites

- QuirkQuack board (based on ATtiny85)
- Arduino IDE
- Digispark libraries

### Materials for 1 QuirkQuack

- 1x QuirkQuack PCB
- 1x ATtiny85-20SU
- 1x SMD USB-A Male
- 1x 1N5819 SMD Diode
- 2x SOD-323 Zener Diode +5V
- 2x R0603 45Ω Resistor
- 1x R0603 1kΩ Resistor

## Installing bootloader

-Connect you ISP Programmer to the ISP Pins

-Software: AVRDUDESS
   -https://github.com/ZakKemble/AVRDUDESS/releases
-Settings:
   - Programmer: The one you want to use.
   - Port: Whats ever port the programmer is connected to.
   - MCU: ATtiny85
   - Flash: 
      - Download this hey file: https://github.com/phikshun/micronucleus/blob/master/firmware/releases/t85_default.hex
      - Save it to some location
      - Enter the location into the text field
   - Format: Intel Hex
- Press Go and it should upload the bootloader

### Setting up Arduino IDE

1. In the Preferences tab add this line to the Additional Boardmanager URLS:

http://digistump.com/package_digistump_index.json

3. Go to Tools than Boards then Boardmanager and search "Digispark AVR Boards" and press install.

4. Then Select "Digispark (Default - 16.5Mhz)" as the board.

### Programming

1. Make a new scetch in Arduino IDE.

2. Install the Digispark libraries if you haven't already.

4. Connect your QuirkQuack device to your computer.

5. Happy Coding. 

### Uploading Scripts

1. Press Compile and upload the script to the QuirkQuack device using the Arduino IDE.

2. Digispark Scripts: "https://github.com/CedArctic/DigiSpark-Scripts"

### Usage

1. Plug in your QuirkQuack device into the target computer's USB port.

2. The device will execute the script defined in the arduino code.

## Contributing

Contributions are welcome! If you'd like to contribute to QuirkQuack, please follow these steps:

1. Fork the repository.

2. Create a new branch for your feature or improvement.

3. Make your changes and test thoroughly.

4. Submit a pull request detailing your changes and testing results.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

- The Ducky Script language for keyboard emulation.
- Digispark for the libraries and inspiration.

---

Happy hacking with your QuirkQuack device! If you encounter any issues or have ideas for improvements, feel free to open an issue or contribute to the project.
