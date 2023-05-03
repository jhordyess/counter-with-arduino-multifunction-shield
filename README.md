# Counter with Arduino Multifunction Shield

Simple counter and random number generator with Arduino Multifunction Shield.

## Features

Counter from 0 to 9999 with its 7 segment display.
Random number generator from 0 to 9999 with its 7 segment display.

Buttons description:

- 1st button -> Count(short pressed)
- 1st button -> Randomly generate(long pressed)
- 2nd button -> Reset
- 3rd button -> Lock

## Requirements

### Hardware

To build this device, the following items are required:

- Arduino microcontroller (Arduino UNO R3 was used)
- Arduino Multifunction Shield (for Arduino Uno R3)

### Software

This project requires the following libraries to run:

- [Multi Function Shield Library by Hpsaturn](https://registry.platformio.org/libraries/hpsaturn/MultiFuncShield)

### Developer Notes

- Developed using [Visual Studio Code with development containers](https://code.visualstudio.com/docs/devcontainers/containers)(optional). With custom [devcontainer](https://gist.github.com/jhordyess/07f126d2017bb99bcfca9cffc62162bc) configuration file.
- Developed using the [PlatformIO extension](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide).
- If you are running in Linux, you could also need the correct permission ```sudo chmod o+rw /dev/ttyACM0```.

## License

© 2022 [Jhordyess](https://github.com/jhordyess). Under the [MIT](https://choosealicense.com/licenses/mit/) license.

---

Made with 💪 by [Jhordyess](https://www.jhordyess.com/)

