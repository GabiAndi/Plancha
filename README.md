<h1 align="center">Plancha para soldar</h1>

<p align="center">
    <a href="https://choosealicense.com/licenses/gpl-3.0"><img alt="GitHub" src="https://img.shields.io/github/license/GabiAndi/FileSyncCenter"></a>
    <a href="https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-2586-AVR-8-bit-Microcontroller-ATtiny25-ATtiny45-ATtiny85_Datasheet.pdf"><img src="https://img.shields.io/badge/mcu-ATTiny85-blue"></a>
    <a><img src="https://img.shields.io/badge/version-v0.0.1--dev-red"></a>
</p>

En muchos casos, es necesario disponer de una plancha caliente para realizar soldaduras en placas PCB o zonas en donde se requiere una temperatura uniforme. Sin embargo uno de estos dispositivos es muy costoso. Es ahí donde surge la necesidad de armar uno casero.

Crear un sistema de soldadura por plancha, no es muy difícil. Se necesita de una resistencia que caliente una superficie metálica y un sistema de control que regule la temperatura a la que se encuentra.

## Sobre el proyecto

### Software

Este programa se desarrollo con:

- [Arduino IDE](https://www.arduino.cc/en/software/) - IDE OpenSource para el desarrollo en microcontroladores utilizando las librerías de Arduino
- [ATTinyCore](https://github.com/SpenceKonde/ATTinyCore) - ArduinoCore para dispositivos ATTiny
- [Extensible hd44780 LCD library](https://github.com/duinoWitchery/hd44780) - Librería para el manejo de LCDs por I2C

### Hardware

- [ATTiny85](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-2586-AVR-8-bit-Microcontroller-ATtiny25-ATtiny45-ATtiny85_Datasheet.pdf) - Microcontrolador AVR de 8bit
- [LCD 20x4 I2C](https://www.todomicro.com.ar/arduino/761-display-lcd-20x4-5v-azul-con-modulo-i2c.html) - Permite controlar el LCD 20x4 a traves de I2C

## Autores

- Fernando Agustín Aguirre - *Estudiante de secundaria*
- [Gabriel Andrés Aguirre](https://www.github.com/GabiAndi) - *Ingeniero en Mecatrónica*

## Licencia

El proyecto es de código abierto y se distribuye bajo una [Licencia GPLV3.](https://choosealicense.com/licenses/gpl-3.0)