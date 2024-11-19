The project essentially consists of a credit card simulator, designed to help users understand how debt accumulates and is paid off on a credit card. The main idea is for the simulator to allow users to perform similar operations to a real credit card: record purchases and payments, calculate monthly accrued interest, and display a detailed statement that reflects the current balance and transaction history. This type of simulator is useful for visualizing how interest impacts the balance and how payments affect the debt over time.

To achieve this, the project is structured around three main components. First, there is the credit card, which represents the outstanding balance, credit limit, and annual interest rate. This card is the core of financial operations, as it manages interest calculations and maintains a record of each purchase or payment. Second, each card transaction is saved as a separate event, allowing for a detailed history of each purchase and payment, which helps users analyze their activities in an organized way. Finally, the user, as the cardholder, can interact with the card, perform purchase or payment operations, and review the statement to stay updated on their balance. 

Class User: 
Purpose:
It represents the users of the system, who will be owners of the credit cards. This class centralizes basic user information, such as name and age. 

Class Transaction: 
Purpose:
Record and manage transactions made with the card, such as purchases or payments. This allows for a detailed trading history.

Class CreditCard: 
Purpose:
Manages credit card financial operations, such as purchases, payments, balance calculation, and maintains a transaction history.

Class InterestManager:
Purpose:
Calculate and apply monthly interest, also apply additional charges such as late or overflow fees

Class Simulator:
Purpose:
Orchestrate interactions between user, credit card and interest manager. Simulate a flow of operations such as purchases, payments and application of charges.

![CreditCardProject drawio (1)](https://github.com/user-attachments/assets/2e125c99-6038-4068-8690-bb46528e3121)



