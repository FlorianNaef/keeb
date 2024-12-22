# Notes

## Powering a Pico from another

If you have two Raspberry Pi Pico WH boards and want to power one from the other using a laptop's USB port, here's how you can do it:

### Step-by-Step Guide:

1. **Power the First Pico:**

   - Connect the first Raspberry Pi Pico WH to your laptop using a USB cable. This will provide power to the first Pico.

2. **Connect the Picos Together:**
   - **VSYS Pin:** Connect the **VSYS pin (pin 39)** of the first Pico to the **VSYS pin (pin 39)** of the second Pico. This will supply power from the first Pico to the second Pico.
   - **Ground Pin:** Connect a **GND pin** (there are multiple GND pins, such as pin 3, pin 8, etc.) from the first Pico to a **GND pin** on the second Pico. This completes the power circuit.

### Wiring Diagram:

Here's a simplified wiring diagram for clarity:

```
First Pico                  Second Pico
----------                  -----------
VSYS (pin 39)  ----->  VSYS (pin 39)
GND (any GND)  ----->  GND (any GND)
```

### Important Considerations:

- **Current Limitation:** Ensure that the total current draw does not exceed the USB port's capability. A standard USB port (5V, 0.5A) can typically handle powering two Pico boards, but if you connect additional peripherals, you may need a powered USB hub or a dedicated power supply.
- **Power Supply Quality:** If you experience instability, consider using a power bank or a more robust power source.

This setup should work for basic projects and running your programs on the second Pico. If you have any specific questions or need further assistance, let me know!
