# CS210
Module 5 - Project 2 (Investment Calculator)

1: Summarize the project and what problem it was solving.

The code is a C++ program that serves as an investment calculator. It allows users to input their initial investment amount, monthly deposit, annual interest rate, and the number of years they want to invest for. The program then calculates and displays a table showing the year-end balance for each year.

Here is a summary of the code's main components and functionality:

1. InvestmentCalculator Class:
   - This class represents the investment calculator and has member variables for the initial investment, monthly deposit, annual interest rate, and the number of years.

   - The class includes three main functions:
     - `displayReport()`: Displays a table showing the year-end balance with monthly deposits.
     - `calculateWithoutMonthlyDeposit()`: Displays a table showing the year-end balance without monthly deposits.
     - `calculateWithMonthlyDeposit()`: Displays a table showing the year-end balance with monthly deposits.

   - The `displayFormattedTable()` function allows the user to choose whether they want to see the results with or without monthly deposits.

   - There is also a private function, `getInputValue()`, used to safely get numeric input from the user.

2. Main Function:
   - In the `main` function, the user is prompted to input their initial investment, monthly deposit, annual interest rate, and the number of years.

   - An instance of the `InvestmentCalculator` class is created with the user's input.

   - The program then displays the user's input and waits for the user to press Enter.

   - The `displayFormattedTable()` function is called twice, first to display results without monthly deposits and then with monthly deposits. It handles potential exceptions if the user provides an invalid calculation method.

Overall, the program helps users plan their investments by providing tables of year-end balances based on their inputs. It's a simple financial tool for understanding how investments can grow over time.

2: What did you do particularly well?

The provided code demonstrates several good practices and design choices:

  1. Modularity: The code is well-structured with a clear separation of concerns. It encapsulates related functionality within the `InvestmentCalculator` class, 
  making it easy to understand and maintain.

  2. Error Handling: The code includes error handling through exceptions. If an invalid calculation method is provided, the code raises an `invalid_argument`   
  exception and handles it with a try-catch block in the `main` function. This ensures that the program doesn't crash and provides meaningful error messages to 
  the user.

  3. Input Validation: The `getInputValue()` function ensures that user input is validated. It prompts users for numeric values and handles invalid inputs       
  gracefully by clearing the input stream and asking for input again.

  4. Readability: The code is well-commented, which makes it easier for someone else (or even the original developer) to understand the purpose of each function     and section of code.

  5. User Interaction: The code has user-friendly prompts and informative messages to guide the user through the process of inputting data and understanding the     program's output.

  6. Encapsulation: Member variables in the `InvestmentCalculator` class are encapsulated as private, and access to them is provided through public methods. This 
  encapsulation follows good object-oriented programming principles.

  7. Consistency and Clarity: The use of `setw()`, `fixed`, and `setprecision()` functions in the output formatting ensures that the results are presented 
  consistently and clearly.

Overall, the code demonstrates a good balance between functionality and user-friendliness while adhering to coding best practices.


3: Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

While the provided code is well-structured and functional, there are areas where it can be enhanced to improve efficiency, security, and maintainability:

The four most important enhancements to the code are:

1. Validation and Error Handling:
   - Strengthen input validation and error handling to ensure that user input is within acceptable constraints, making the code more robust and secure.

2. Consolidate Similar Code:
   - Reduce code duplication by consolidating common functionality for displaying tables into a private helper function, improving code maintainability.

3. Use Constants for Magic Numbers:
   - Replace magic numbers with named constants to enhance code readability and maintainability, allowing for easier adjustments in the future.

4. Input Data Sanitization:
   - Implement data sanitization to prevent malicious or unintended data from causing issues, enhancing security and protecting against potential vulnerabilities.

4: Which pieces of the code did you find most challenging to write, and how did you overcome this?

The most challenging part of writing the code is likely to be the input validation and error handling. Ensuring that user inputs are valid and within acceptable constraints can be complex, and handling errors gracefully is crucial for a robust and user-friendly application.

The top three most important choices in writing the code are:

  1. Use Exception Handling: Leveraging exception handling to manage errors effectively and provide clear error messages to users.
  2. Automate Testing: Developing automated unit tests to validate input handling and error management.
  3. Feedback and User-Friendly Messages: Providing clear and informative feedback to users when input validation fails, enhancing the user experience and   
     understanding.

5: What tools or resources are you adding to your support network?

To enhance the support network for developing and maintaining the code, one can consider adding the following tools and resources:

Version Control System (e.g., Git):

Using a version control system allows for collaborative development, tracks changes, and provides a safety net for code recovery. Platforms like GitHub, GitLab, or Bitbucket can be valuable for hosting repositories and managing code changes.
Integrated Development Environment (IDE):

A feature-rich IDE, such as Visual Studio Code, CLion, or JetBrains IntelliJ IDEA, can streamline coding, provide code analysis, and offer debugging tools to improve development efficiency.
Code Linters and Analyzers:

Tools like ESLint (for JavaScript), Pylint (for Python), and Clang-Tidy (for C++) can help identify and fix code quality issues, enhancing code readability and maintainability.

6: What skills from this project will be particularly transferable to other projects or course work?

The top 5 transferable skills from the project:

1. Programming Skills (in C++).
2. Object-Oriented Programming (OOP).
3. Input Validation and Error Handling.
4. Algorithm and Logic Design.
5. Documentation and Comments.

These skills are valuable in a wide range of software development projects and coursework.

7: How did you make this program maintainable, readable, and adaptable?
The program demonstrated maintainability, readability, and adaptability through the following key points:

  1. Modular Design: The code was organized into a class-based structure, making it modular and easy to maintain. Each function had a clear and distinct purpose,
  improving code readability.

  2. Descriptive Variable and Function Names: Meaningful variable and function names were used throughout the code, enhancing readability and making it easier      for other developers to understand the purpose of each element.

  3. Input Validation and Error Handling: The code incorporated input validation and error handling, ensuring robustness and adaptability to handle unexpected      user inputs and exceptions gracefully.

  4. Documentation and Comments: The code included comments and documentation, which aided in understanding the code's functionality and behavior. This 
  documentation supported maintainability by making it easier to update or extend the code.

  5. Flexibility in Output: The program allowed users to choose between two different calculation methods (with or without monthly deposits), demonstrating     
  adaptability and making it versatile for various investment scenarios.
