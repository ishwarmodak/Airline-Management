# Welcome to Flights Service
### This is a Microservice is of Airline Management System.

## 🔗 Links
Following are the other services [ReminderService](https://github.com/aryan-bhokare/ReminderService), [AirlineBookingService](https://github.com/aryan-bhokare/AirlineBookingService), [Auth-service](https://github.com/aryan-bhokare/Auth-service)

## Project Setup
- clone the project on your local
- Execute `npm install` on the same path as of your root directory of teh downloaded project
- Create a `.env` file in the root directory and add the following environment variable
    - `PORT=3000`
- Inside the `src/config` folder create a new file `config.json` and then add the following piece of json

## Project Structure

```
.
├── README.md
├── main
├── package-lock.json
├── package.json
└── src
    ├── config
    │   ├── config.json
    │   └── serverConfig.js
    ├── controllers
    │   ├── airport-controller.js
    │   ├── city-controller.js
    │   └── flight-controller.js
    ├── index.js
    ├── middlewares
    │   ├── flight-middlewares.js
    │   └── index.js
    ├── migrations
    ├── models
    │   ├── airplane.js
    │   ├── airport.js
    │   ├── city.js
    │   ├── flights.js
    │   └── index.js
    ├── repository
    │   ├── airplane-repository.js
    │   ├── airport-respository.js
    │   ├── city-repository.js
    │   ├── crud-repository.js
    │   ├── flight-repository.js
    │   └── index.js
    ├── routes
    │   ├── index.js
    │   └── v1
    │       └── index.js
    ├── seeders
    ├── services
    │   ├── airport-service.js
    │   ├── city-service.js
    │   ├── crud-service.js
    │   ├── flight-service.js
    │   └── index.js
    └── utils
        ├── error-codes.js
        └── helper.js

```

```
{
  "development": {
    "username": <YOUR_DB_LOGIN_NAME>,
    "password": <YOUR_DB_PASSWORD>,
    "database": "Flights_Search_DB_DEV",
    "host": "127.0.0.1",
    "dialect": "mysql"
  }
}

```
- Once you've added your db config as listed above, go to the src folder from your terminal and execute `npx sequelize db:create`
and then execute

`npx sequelize db:migrate`

```
## DB Design
  - Airplane Table
  - Flight
  - Airport
  - City 
  - A flight belongs to an airplane but one airplane can be used in multiple flights
  - A city has many airports but one airport belongs to a city
  - One airport can have many flights, but a flight belongs to one airport

## Tables

### City -> id, name, created_at, updated_at
### Airport -> id, name, address, city_id, created_at, updated_at
### Relationship -> City has many airports  and Airport belongs to one city (one to many)

```

## Model Generation Code Sequelize
```
    npx sequelize model:generate --name Airport --attributes name:String,address:String,cityId:integer
```
