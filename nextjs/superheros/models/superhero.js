const mongoose = require('mongoose')

const heroSchema = new mongoose.Schema({
    superHero: {
        type: String,
        required: [true, 'Please name the hero'],
        unique: true,
        trim: true
    },
    realName: {
        type: String,
        required: [true, 'Please name the hero'],
        maxlength: [200, 'please keep realname short']
    }
})


module.exports = mongoose.models.Hero || mongoose.model('Hero', heroSchema)