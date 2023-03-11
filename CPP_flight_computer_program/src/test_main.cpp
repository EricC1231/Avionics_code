#if (TESTMODE == 1)

	#include "debug_macros.h"
	#include "sensor_fram.h"
	#include "package_fram.h"
	#include "unity.h"


void setup_test_sensor_fram()
	{
		println("a");
		init_fram();
		println("b");
		for (int i = 1; i <= 21; i = i + 1){
			write_data_chunk_to_fram(i+10,i+10,i+10,i+10,i+10,i+10,i+10,i+10,i+10,i+10,i+10);
		}
		//int i = 1;
		// write_data_chunk_to_fram(i,i,i,i,i,i,i,i,i,i,i);
		// write_data_chunk_to_fram(2,2,2,2,2,2,2,2,2,2,2);
		// write_data_chunk_to_fram(3,3,3,3,3,3,3,3,3,3,3);
		// write_data_chunk_to_fram(4,4,4,4,4,4,4,4,4,4,4);

		println("c");
		for (int address = 0; address <= 500; address = address + 0x19){
			read_data_chunk_from_fram(FRAM_INIT_ADDRESS + address);
			println(sensor_chunk.timestamp);
		println(sensor_chunk.current_state);
		println(sensor_chunk.accl_x);
		println(sensor_chunk.accl_y);
		println(sensor_chunk.accl_z);
		println(sensor_chunk.gyro_x);
		println(sensor_chunk.gyro_y);
		println(sensor_chunk.gyro_z);
		println(sensor_chunk.thermocouple_temp);
		}
		// read_data_chunk_from_fram(FRAM_INIT_ADDRESS);
		// println(sensor_chunk.timestamp);
		// println(sensor_chunk.current_state);
		// println(sensor_chunk.accl_x);
		// println(sensor_chunk.accl_y);
		// println(sensor_chunk.accl_z);
		// println(sensor_chunk.gyro_x);
		// println(sensor_chunk.gyro_y);
		// println(sensor_chunk.gyro_z);
		// println(sensor_chunk.thermocouple_temp);
		println("d");

		tearDown();

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


	}

void tearDown(void) // run after each test
	{
		reset_fram_cursor();
		for(int i = 1; i <= 11; i++){
			write_data_chunk_to_fram(0,0,0,0,0,0,0,0,0,0,0);
		}
	}

#endif // TESTMODE
