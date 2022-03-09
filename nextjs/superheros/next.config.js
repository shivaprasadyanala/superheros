/** @type {import('next').NextConfig} */
const nextConfig = {
    reactStrictMode: true,
    env: {
        MONGO_URI: "mongodb+srv://shiva:shiva@cluster0.nqjru.mongodb.net/superheros"
    }
}

module.exports = nextConfig;