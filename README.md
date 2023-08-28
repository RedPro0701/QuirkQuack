# DuckerRubby - Simple Rubber Ducky based on ATtiny85

DuckerRubby is a project that aims to create a simple Rubber Ducky device based on the ATtiny85 microcontroller. It emulates a keyboard to execute predefined scripts, making it useful for various tasks like automating tasks, performing security assessments, and more.

## Features

- Emulates a keyboard to inject predefined scripts into a target computer.
- Compact and cost-effective, using the ATtiny85 microcontroller.
- Compatible with the Digispark libraries and ecosystem.

## Getting Started

These instructions will help you get started with setting up and using your DuckerRubby device.

### Prerequisites

- DuckerRubby board (based on ATtiny85)
- Arduino IDE
- Digispark libraries

### Installation

1. Clone this repository to your local machine.

   ```sh
   git clone https://github.com/RedPro0701/DuckerRubby.git
   ```

2. Open the project in the Arduino IDE.

3. Install the Digispark libraries if you haven't already.

4. Connect your DuckerRubby device to your computer using a compatible USB cable.

5. Configure your script in the `script.txt` file.

### Uploading Scripts

1. Edit the `script.txt` file in the repository to include the desired keyboard commands.

2. Compile and upload the script to the DuckerRubby device using the Arduino IDE.

### Usage

1. Plug in your DuckerRubby device into the target computer's USB port.

2. The device will execute the script defined in the arduino code.

## Contributing

Contributions are welcome! If you'd like to contribute to DuckerRubby, please follow these steps:

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

Happy hacking with your DuckerRubby device! If you encounter any issues or have ideas for improvements, feel free to open an issue or contribute to the project.
```
