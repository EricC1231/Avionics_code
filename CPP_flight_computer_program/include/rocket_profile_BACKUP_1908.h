#ifndef ROCKET_PROFILE_H
#define ROCKET_PROFILE_H

// flight profile
#define _FLIGHT_MONTH        9
#define _FLIGHT_TIME_HOUR    11
#define _FLIGHT_TIME_MINUTES 3

// rocket params
#define ROCKET_HEIGHT        1 // in metres

<<<<<<< HEAD
#if TESTPROFILE == 1
	#define LIFTOFF_THRESHOLD 2.00f // in ms^-2
#else
	#define LIFTOFF_THRESHOLD 10.5f // in ms^-2
#endif                              // TESTPROFILE
    =======
#define LIFTOFF_THRESHOLD 11.0f // in ms^-2
    >>>>>>> 335a286b9bcf7270843e04e1ea59682690a6713e

#define DESCENT_CHECK_AMOUNT          2

#define APOGEE_CONFIRMATION_THRESHOLD 0.50f // in meters

#define ALTITUDE_CHANGE               0.600f
#define PARACHUTE_DEPLOYMENT_HEIGHT   200.0f // in meters
#define LANDING_ALTITUDE              1.000f // in meters

#endif // ROCKET_PROFILE_H