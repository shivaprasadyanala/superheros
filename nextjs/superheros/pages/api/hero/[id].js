import dbConnect from '../../../db/dbConnect'

import Hero from '../../../models/superhero'

dbConnect();


//get a uniqute record,edit,delete

export default async(req, res) => {
    const {
        query: { id },
        method
    } = req

    switch (method) {
        case "GET":
            try {
                const hero = await Hero.findById(id)
                if (!hero)
                    res.status(400).json({ success: false })
                res.status(200).json({ success: true, hero: hero })

            } catch (error) {
                res.status(400).json({ success: false })
            }
            break;
        case "PUT":
            try {
                const heros = await Hero.findByIdAndUpdate(id, req.body, {
                    new: true,
                    runValidators: true
                })
                res.status(200).json({ success: true, hero: heros })
            } catch (error) {
                res.status(400).json({ success: false })
            }
            break;

        case "DELETE":
            try {
                const heros = await Hero.deleteOne({ _id: id })
                res.status(200).json({ success: true, hero: heros })
            } catch (error) {
                res.status(400).json({ success: false })
            }
            break;

        default:
            res.status(400).json({ success: false })
            break;
    }
}