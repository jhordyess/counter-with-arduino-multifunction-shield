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

## Dev Info

- Arduino Uno R3
- Arduino Multifunction Shield (for Arduino Uno R3)
- [Multi Function Shield Library](https://registry.platformio.org/libraries/hpsaturn/MultiFuncShield)
- VSCode with [remote containers](https://code.visualstudio.com/docs/remote/containers) (Docker container with Ubuntu)
- [PlatformIO Core (CLI)](https://docs.platformio.org/en/latest/core/index.html#platformio-core-cli)

## My useful PlatformIO commands

```bash
# Initialize project for Arduino Uno R3
pio project init --board uno --ide vscode
# Build
pio run
# Upload
pio run -t upload
# Connect to the serial port monitor
pio device monitor
```

## License

© 2022 [Jhordyess](https://github.com/jhordyess). Under the [MIT](https://choosealicense.com/licenses/mit/) license.

---

Made with 💪 by [Jhordyess](https://www.jhordyess.com/)
