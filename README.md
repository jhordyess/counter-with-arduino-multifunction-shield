# Counter with Arduino Multifunction Shield

Simple counter with Arduino Multifunction Shield.

## Features

Count from 0 to 9999 with its 4 digit 7 segment display.

Buttons description:

- 1st button -> Count
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

---
@2022 Jhordyess
