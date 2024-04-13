def generate_init_function(pin_count):
    code = "#include <avr/io.h>\n\n"
    code += "void init_gpio() {\n"
    code += "    /* Configure GPIO pins */\n"

    for pin in range(pin_count):
        pin_direction = input(f"Enter DDR register value (0 for input, 1 for output) for pin {pin}: ")
        code += f"    DDRB |= ({pin_direction} << {pin});  // Set DDB{pin} direction\n"

    code += "}\n"

    return code


# Prompt the user to enter the number of GPIO pins
pin_count = int(input("Enter the number of GPIO pins: "))

# Generate initialization function for the specified number of GPIO pins
init_function = generate_init_function(pin_count)
print(init_function)