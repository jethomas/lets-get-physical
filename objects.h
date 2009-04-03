/*------------------------------------------------------------------------------

Stuff I want.

- destruction of materials due to stress or whatever
- realistic modeling of object interaction with other objects.
- electromagnetic, gravity forces.
- water where things can sink or float, and swim etc..
- heat transfer, i want to be able to melt an icecube realisticly.


*/------------------------------------------------------------------------------





class Universe
{
        
    protected:

        void gravity();		//computes and applies gravity forces for all objects.
        void air();		// takes care of air pressure on objects and air resistance.      

        void balence_forces();	//creats a list of all forces acting on an object and balences them.
        void update_positions(); 

        //etc...

    public:

        double Gx, Gy;		//gravity force on all objects... earth style
        double X, Y;		// origin of the universe ;
        double temp;		// ambient tempature 
        double p;		// atmospheric air pressure
        
        double dT;		// rate of time passage in unviverse rellative to time in R.L. [Se/Si]


        void Step(const int t)	// move the universe t number of timesteps forward in time
        void clear_objects ();	// delete all objects from the universe
        void delete_object (object *obj) ;
        
	/*
	 * all objects are stored in the universe. the universe is responsable for 
	 * moderating all forces and interactions that occur between objects.
	 */

};


/* 
 * The main object class in which all other physical objects are derived from.
 */

class object
{   
    protected:
   
        //---| Section containing physical properties of the objects material |----

	const double Q;		// specific heat capacity of the material
				// some constant that determines the strength of the material
				// some constant that determines the elasticity of the material
	double temp;		// temperature
        double mass;		// or density maybe... maybe both
        
        double Ks, Kk		// coefficents of friction.
        
        public:

        // ---| Section describing spacial properties of the object | ----

        double x1, y1, z1;	// top left [1] and bottum right[2] vertices units meters
	double x2, y2, z2;	// Etc..
        double Vx, Vy, Vz;	// x, y, z components of the objects velocity. m/s

        /*
	 * etc...
	 * I dont care the this commenting style... its annoying.
	 * You are annoying.  Suck it up and grow a pair.
	 */

	/* Hurrah for only rectangles at this point! */
        void object(const double x,	// X coord
		    const double y,	// Y coord
		    const double z,	// Z coord
		    const double l,	// length
		    const double w,	// width
		    const double d,	// depth
                    string materials	// Predefined materials
				    ); 

        void object(const double x,	// X coord
		    const double y,	// Y coord
		    const double z,	// Z coord
		    const double l,	// length
		    const double w,	// width
		    const double d,	// depth
                    const double q,	// specific heat capacity
		    const double S,	// no idea
		    const double E,	// ...?
		    const double density
				    );

           
} ;



class rectangle : class object
{
    /* 
     * a rectangular block of material.
     * new object type derived from the object class.
     */

};










