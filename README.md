# Welcome to flight service

## Project setup
- Clone project on your local
- Execute `npm install` on the same path as of your root directory of the downloaded project
- Create a `.env` file in your root directory and add the following environment variables
    - `PORT: 3000`
- Inside `src/config` folder create a new file `config.json` and then add the following piece of json

```
{
  "development": {
    "username": "root",
    "password": "<yoursqlpassword>",
    "database": "<nameforyourdb>",
    "host": "127.0.0.1",
    "dialect": "mysql"
  } 
}

```
- Once you've added your db config as listed above, go to the src folder from your terminal and execute `npx sequelize db:create` 
and then execute `npx sequelize db:migrate` 

## DB Design
 - Airplane Table
 - Flight Table
 - Airport Table
 - City Table

## Entity relationships 
### Entity relationships for flight search DB
 - A flight belongs to an airplane but one airplane can be used for multiple flights
 - A city has many airports but an airport belongs to only one city
 - One airport can have many flights, but a flight belongs to one airport.


