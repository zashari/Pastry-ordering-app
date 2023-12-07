# First Semester Project: Pastry ordering app

### Introduction

This C program is a simple console-based application designed to simulate a food ordering system for a pastry shop. It is a good example of a beginner-level project in C, showcasing fundamental programming concepts such as conditional statements, loops, user input handling, and basic arithmetic operations.

### Program Breakdown

1. **Variable Declaration**: 
   - `int menu, makan, minum, qty`: Variables to store user choices and quantity.
   - `float harga1, harga2, hasil, total1, total2`: Variables to store prices and totals.

2. **User Interface**: 
   - The program starts by displaying a welcome message and the menu items with their prices.
   - Users are prompted to choose whether they want only food, only drinks, or both.

3. **Input Handling**:
   - Depending on the user's choice, they are asked to select specific items from either the food menu (`1-5`) or the drink menu (`6-8`).
   - The program uses `switch` statements to handle different menu selections and calculates the total price based on the quantity ordered.

4. **Calculations**: 
   - For each selection, the program calculates the total cost (`total1` for food, `total2` for drinks) based on the item's price and the quantity ordered.
   - If both food and drink are selected, it calculates the combined total (`hasil`).

5. **Output**: 
   - Finally, the program outputs the total amount to be paid by the customer.

### Program Flow

1. **Initial Display**: Show menu items with their prices.
2. **Menu Selection**: Ask the user to choose an option (food, drink, or both).
3. **Order Processing**: 
   - If food is selected, prompt for food item and quantity, then calculate the total.
   - If drink is selected, prompt for drink item and quantity, then calculate the total.
   - If both are selected, repeat the above steps for both food and drink.
4. **Final Calculation**: Sum up the totals of food and drink orders.
5. **Display Total**: Show the final amount to be paid.

### Possible Improvements

1. **Input Validation**: Adding checks to ensure that the user enters valid menu item numbers.
2. **Repeat Orders**: Allow users to order multiple items in one session.
3. **Dynamic Menu**: Store menu items and prices in arrays or structures for easier management and scalability.
4. **Error Handling**: Include error messages for invalid inputs and exceptions.
5. **User Interface**: Improve the user interface for better readability and experience.

### Conclusion

This C program is a straightforward implementation of a command-line ordering system. It is well-suited for beginners looking to understand basic programming constructs in C. With potential improvements, it could be developed into a more robust application.
