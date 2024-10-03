# LeetCode Training
## What is it?
This is a LeetCode training repository solved by me alone in order to achieve strong c++ skills

## How to build and run the code
### In Windows
1. Go into the specified exercise directory
   ```
   cd "exercise\directory\name"
   ```
3. Run this script:
   ```
   (if not exist "build" mkdir build) && g++ *.cpp -o build/main.exe -I . && build\main.exe
   ```

   or to debug the program:

   ```
   (if not exist "build" mkdir build) && g++ -g *.cpp -o build/main.exe -I . && gdb .\build\main.exe
   ```
   > This script is used for: create a build folder, compile the cpp code and build the main.exe file, then run the main.exe file
