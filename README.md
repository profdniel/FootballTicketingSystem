# ⚽ Football Ticketing System – C++ Console Application

This is a console-based **Football Ticketing System** written in **C++**, designed for basic ticket booking operations. It allows users to choose a football match, select ticket types (e.g., child, adult, senior), purchase merchandise and food items, and calculates the final price with optional discounts based on payment methods and membership.

---

## 📌 Features

- ✅ Select from 4 types of football matches
- ✅ Choose seat types (Single, Couple, VIP, Deluxe)
- ✅ Support for various ticket categories:
  - Child
  - Adult
  - Senior Citizen
  - Persons with Disabilities
- ✅ Optional purchase of items (whistle, scarf, mask, T-shirt)
- ✅ Optional food menu with pricing
- ✅ Discount handling:
  - Membership-based discount
  - Cashless payment discount
- ✅ Full calculation of:
  - Ticket price
  - Item price
  - Food price
  - Total and final price with discounts
- ✅ Basic input validation
- ✅ Modular design using user-defined functions

---

## 🧩 Program Structure

### 1. **User Details Input**
Collects name, phone number, and IC number.

### 2. **Football Match Selection**
Prompts user to choose from 4 matches:
- AFC Champions League
- Malaysian Super League
- Premier League
- M3 League

### 3. **Ticket Category**
Each match includes four types of ticket categories:
- Child
- Adult
- Senior Citizen
- Disabilities

Prices are set depending on the match and category.

### 4. **Seat Class**
Users can choose seating options:
- Single
- Couple
- VIP
- Deluxe

Each with different price tiers.

### 5. **Optional Add-ons**
Users can also purchase:
- Items (Whistle, Scarf, Mask, T-Shirt)
- Food items (via FoodMenu function)

### 6. **Discounts**
- **Membership** discount applied when applicable
- **Cashless** payment gets an additional discount

### 7. **Final Output**
The system calculates:
- Ticket subtotal
- Merchandise and food subtotal
- Total price
- Discounts
- Final amount due

---

## 🛠️ How It Works

All core functionalities are divided into **modular functions**:

| Function Name           | Purpose                                                  |
|------------------------|----------------------------------------------------------|
| `list()`               | Display football match types                             |
| `SeatClass()`          | Display seating classes and prices                       |
| `listcategory1()` - `listcategory4()` | Display category options based on match        |
| `display()`            | Displays system heading                                  |
| `ItemList()`           | Lists available merchandise                              |
| `FoodMenu()`           | Displays food items and prices                           |
| `calculateItemPrice()` | Calculates total price of selected items                 |
| `calculateFoodPrice()` | Calculates total food price                              |
| `calculateExactAmount()`| Combines all prices and applies discounts               |

---

## 🔄 Example Flow

1. User enters name, phone number, IC.
2. Selects a football match → chooses ticket category → inputs quantity.
3. Chooses seat class.
4. Optionally adds merchandise and food.
5. Chooses membership & payment method.
6. Final amount is calculated and displayed.

---

## 💻 Technologies Used

- **Language:** C++
- **Compilation:** Any standard C++ compiler (e.g., g++, MSVC)
- **Platform:** Console/Terminal

---

## 🚀 Getting Started

### Compile:
```bash
g++ -o ticketing ticketing.cpp
