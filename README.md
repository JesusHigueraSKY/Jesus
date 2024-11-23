The program simulates a simple card management system for a user. The idea is to create a system where a user can own multiple cards (credit and debit), view their details, and perform transactions using these cards. The user can add cards (credit or debit) to their account, view details of all the cards they own, simulate purchases using the cards, if it is a credit card, the system checks whether the purchase exceeds the card’s credit limit, if it is a debit card, the system checks whether there is sufficient balance in the account to complete the purchase. Additionally, the program ensures that all transactions are recorded, including the card type used, the transaction amount, and whether the transaction was successful. 

User: 
Purpose: The User class represents a customer who owns one or more cards. It is responsible for managing the user's information (such as their name) and their own cards. 

Card: 
Purpose: The Card class is an abstract base class that defines common properties and methods for all types of cards (credit and debit). It is not meant to be instantiated directly but serves as a blueprint for derived classes. 

CreditCard: 
Purpose: The CreditCard class is derived from the Card class and represents a credit card. It manages the card's balance, credit limit, and allows for making purchases that either increase the balance (on credit) or decrease the available credit. 

DebitCard:
Purpose: The DebitCard class is also derived from the Card class and represents a debit card. It handles the card’s balance, which is directly linked to the user's available funds, and allows for purchases that reduce the available balance.

Transaction: 
Purpose: The Transaction class is designed to represent individual transactions made using a credit or debit card. It encapsulates details about the transaction, such as the amount, type of transaction (purchase), and the card used.

![CreditCardProject drawio (2)](https://github.com/user-attachments/assets/2ac646a7-d1ae-4e38-9411-c67f332cee93) 



