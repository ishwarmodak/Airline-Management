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