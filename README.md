# ECE387Midterm
For my 387 Midterm, I aimed to get an Arduino Uno or Raspberry Pi touchscreen working, and then add value in some way. 
I managed to get both touchscreens working, though I did not write any code for the Raspberry Pi touchscreen. For the Arduino touchscreen, I used the Paint demo that was linked on the purchase page as my basis. I added additional color options to the demo, then added a "clear" button that was faster and would not reset the chosen color like a reset. Then, because the touchscreen came with a library of its own, I made an additional library that includes a "makeButton" command that allowed a user to input a starting point, font size, and button text to display an automatically-sized button. I then integrated this function into the demo as the "clear" button.

