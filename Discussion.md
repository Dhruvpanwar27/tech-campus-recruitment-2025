## Final Solution

Argument Handling: The date is passed as a command-line argument.
File Streaming (ifstream): Reads the file line by line.
String Matching: Checks if the start of the line matches the target date.
Output Writing (ofstream): Writes matching lines to an output file.
Performance Optimizations
Single-pass scan (O(n)): Only reads and processes each line once.
No extra memory usage: Uses streaming instead of loading the entire file.
Fast comparison: Uses compare() on the first 10 characters (YYYY-MM-DD).
This ensures the solution is fast, memory-efficient, and scalable for a 1TB log file.

## Steps to run 

1. Compile the Code
Open a terminal in the directory where your extract_logs.cpp file is located and run:


g++ test.cpp -o extract_logs


This will generate an executable named extract_logs.

2. Run the Program
Execute the compiled program by providing a date as an argument:


./extract_logs 2024-12-01


Output
The logs for 2024-12-01 will be extracted and saved in:
