import { db } from '../models/superhero';

const mongoose = require('mongoose')

const connection = {}


async function dbConnect() {
    if (connection.isConnected) {
        return;
    }
    const db = await mongoose.connect(process.env.MONGO_URI, {
        useNewUrlParser: true,
        UseUnifiedTopology: true
    })
    connection.isConnected = db.connections[0].readyState
}

export default dbConnect;