# ✈️ Airline Reservation System (C++ | OOP)

A modular Airline Management System built in C++ using pure Object-Oriented Programming principles. Includes ticket booking, cancellation, and crew management with strong OOP architecture.

## ✅ Features
- Book/cancel tickets (up to 50 seats)
- Generate ticket as `ticket.txt`
- View crew details
- Admin-protected crew edit
- Fully modular structure
- Encapsulated data privacy (e.g., passengers)

## 🧠 OOP Concepts
- Abstraction: Abstract class `Employee`
- Inheritance: `Pilot`, `AirHostess` from `Employee`
- Polymorphism: `show_details()` overridden for each role
- Encapsulation: Private member variables and public accessors

## 📁 Project Structure
```
Airline-System-Mang-OOP-CPP/
├── include/               # All class definitions (.h files)
│   ├── Employee.h
│   ├── Pilot.h
│   ├── AirHostess.h
│   ├── Passenger.h
│   └── Flight.h
├── src/                   # Class implementations (.cpp files)
│   ├── Passenger.cpp
│   └── Flight.cpp
├── main.cpp               # Program entry point
├── ticket.txt             # Auto-generated ticket file
└── README.md              # Project documentation
```

## 🛠️ Build Instructions
```bash
g++ main.cpp src/*.cpp -Iinclude -o airline
./airline
```


## 🔮 Future Scope
- 🌐 Convert the system into a full-stack web application using React (Frontend) and Node.js or Django (Backend)
- 🧾 Add database integration (e.g., MySQL or MongoDB) to persist passengers and flight data
- ✈️ Real-time seat allocation system with GUI
- 🔒 Role-based authentication and dashboards (Admin, Passenger, Staff)
- 📊 Analytics for bookings, earnings, and crew assignment
- ☁️ Deployable on cloud platforms like AWS or Azure for production usage
- 📱 Mobile app version using Flutter or React Native
