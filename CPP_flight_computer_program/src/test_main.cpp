#if (TESTMODE == 1)

	#include "debug_macros.h"
	#include "sensor_fram.h"
	#include "package_fram.h"
	#include "unity.h"


void setup_test_sensor_fram()
	{
	init_fram();
	}

void teardown_test_sensor_fram()
	{
	// TODO: restore fram to original state
	}

void test_sensor_fram()
	{
	setup_test_sensor_fram();

	// TODO: write test for fram

	teardown_test_sensor_fram();
	}

int test_main()
	{
	println("[TESTMODE] tests starting");
	println("testing fram...");
	test_sensor_fram();
	println("testing fram...done");
	println("[TESTMODE] tests completed");
	exit(1);
	}

void setUp(void) // run before each test
	{
		for(int i = 1; i = 11; i++){
			write_data_chunk_to_fram(1,1,1,1,1,1,1,1,1,1,1);
		}
	}

void tearDown(void) // run after each test
	{

	}

#endif // TESTMODE
