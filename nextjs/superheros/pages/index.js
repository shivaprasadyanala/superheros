// import React from 'react'
import { MDBCard, MDBCardBody, MDBCardTitle, MDBCardText, MDBBtn } from 'mdb-react-ui-kit';
import axios from 'axios';
import Link from 'next/link';


const index = ({ heros }) => {
  return (
    <div className='container'>
      <h1 className='display-1=2'>superhero Identity manager</h1>

      <div >
        {/* <h1>hi</h1> */}
        {heros.map((hero) => (

          <MDBCard MDBCard className='border border-2 my-2' style={{ maxWidth: '22rem' }}>
            <MDBCardBody>
              <MDBCardTitle>{hero.superHero}</MDBCardTitle>
              <MDBCardText>
                Reveal Identity
              </MDBCardText>
              <Link href={`${hero._id}`}><MDBBtn className='mx-2'>View Hero</MDBBtn></Link>
              <Link href={`${hero._id}/edit`}><MDBBtn>Edit Hero</MDBBtn></Link>
            </MDBCardBody>
          </MDBCard>


        ))}

      </div>
    </div >
  )
}

export async function getStaticProps() {
  const res = await axios("http://localhost:3000/api/hero")
  console.log(res.data.hero);
  const { hero } = res.data
  return {
    props: { heros: hero }
  }
}

export default index;
