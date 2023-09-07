# QuirkQuack - Simple Rubber Ducky based on ATtiny85

QuirkQuack is a project that aims to create a simple Rubber Ducky device based on the ATtiny85 microcontroller. It emulates a keyboard to execute predefined scripts, making it useful for various tasks like automating tasks, performing security assessments, and more.

## Features

- Emulates a keyboard to inject predefined scripts into a target computer.
- Compact and cost-effective, using the ATtiny85-20SU or ATtiny45-20su microcontroller.
- Compatible with the Digispark libraries and ecosystem.

## Getting Started

These instructions will help you get started with setting up and using your QuirkQuack device.

### Prerequisites

- QuirkQuack board (based on ATtiny85-20SU or ATtiny45-20su)
- Arduino IDE
- Digispark libraries

### Materials for 1 QuirkQuack

- 1x QuirkQuack PCB
- 1x ATtiny85-20SU / ATtiny45-20su
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
      - Download this hex file: https://github.com/phikshun/micronucleus/blob/master/firmware/releases/t85_default.hex or https://github.com/phikshun/micronucleus/blob/master/firmware/releases/t45_default.hex
      - Save it to some location
      - Enter the location into the text field
   - Format: Intel Hex in AVRDUDESS
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

## Disclaimer

By using this rubber ducky, you acknowledge and agree to the following terms and conditions:

Assumption of Risk: The use of this rubber ducky involves certain inherent risks. You understand and accept that any damage or harm that may result from the use of this product is entirely your responsibility. We are not responsible for any accidents, injuries, or property damage that may occur.

Proper Use: This rubber ducky is intended for recreational purposes only and should be used in a safe and responsible manner. Misuse of this product may lead to unwanted consequences, and you are solely responsible for any such actions.

Supervision: If this rubber ducky is intended for use by children or individuals who require supervision, it is your responsibility to ensure proper supervision at all times. We do not assume any liability for unsupervised use or any related incidents.

Maintenance and Inspection: Regularly inspect and maintain your rubber ducky to ensure it is in safe and working condition. Any defects or damage should be addressed promptly to avoid potential risks.

Limitation of Liability: To the fullest extent permitted by law, we disclaim any and all liability for any direct, indirect, incidental, consequential, or punitive damages arising from the use of this rubber ducky. This includes but is not limited to damage to personal property, bodily injury, or any other losses or harm.

Compliance with Local Laws: It is your responsibility to ensure that the use of this rubber ducky complies with all applicable local, state, and federal laws and regulations. We are not liable for any legal consequences resulting from non-compliance.

Modification: Any modifications or alterations made to this rubber ducky may compromise its safety and void any warranties or guarantees. We are not responsible for any consequences resulting from unauthorized modifications.

By using this rubber ducky, you acknowledge that you have read, understood, and accepted this disclaimer in its entirety. You agree to release us from any liability for any damages, or losses that may occur during the use of this rubber ducky. If you do not agree with these terms, please refrain from using this rubber ducky.

---

Happy hacking with your QuirkQuack device! If you encounter any issues or have ideas for improvements, feel free to open an issue or contribute to the project.
