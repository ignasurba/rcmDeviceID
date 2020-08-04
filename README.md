# rcmDeviceID
Get the Nintendo Switch device ID from fuses

## Usage
 1. Send the `rcmDeviceID.bin` to your Switch running in RCM mode with `TegraRcmSmash.exe -w /out/romdump.bin BOOT:0x0`
 2. Receive the device ID over USB to TegraRcmSmash window.

## Credits
Almost entirely based on [romdump](https://github.com/rajkosto/romdump) by rajkosto

## Changes
This section is required by the GPLv2 license

 * main.c has been modified to readout fuse_get_device_id() and send the over USB to the host.
 
