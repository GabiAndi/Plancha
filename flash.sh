#!/bin/sh

sudo avrdude -c usbasp -p t85 -U flash:w:build/Plancha.ino.hex:i