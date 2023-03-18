#if (TESTMODE == 1)

	#include "debug_macros.h"
	#include "sensor_fram.h"
	#include "package_fram.h"
	#include "sensor_led.h"


void setup_test_sensor_fram()
	{
<<<<<<< HEAD
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

=======
	init_fram_package();
>>>>>>> 7dacb326ba6e5689342138ed09b492f5c215c0bd
	}

void teardown_test_sensor_fram()
	{
	// TODO: restore fram to original state
	}

void test_sensor_fram()
	{
	int test_cursor = FRAM_INIT_ADDRESS + 100;
	fram_cursor     = FRAM_INIT_ADDRESS + 100;
	int count       = 0;

	for (int i = FRAM_INIT_ADDRESS; i < FRAM_INIT_ADDRESS + 50; i += 25)
		{
		println("writing data chunk to fram at position: " + String(i));
		write_data_chunk_to_fram(millis(), 6, 0.12f, 0.24f, 9.8f, 0.0f, 45.5f, 90.0f, 123.456f, 45000.75, 223.56f);

		read_data_chunk_from_fram(i - 25);
		println("reading data chunk from fram at position: " + String(i));

		// print sensor chunk
		println(sensor_chunk.timestamp);
		println(sensor_chunk.current_state);
		println(sensor_chunk.accl_x);
		println(sensor_chunk.accl_y);
		println(sensor_chunk.accl_z);
		println(sensor_chunk.gyro_x);
		println(sensor_chunk.gyro_y);
		println(sensor_chunk.gyro_z);
		println(sensor_chunk.rel_alt);
		println(sensor_chunk.pressure);
		println(sensor_chunk.thermocouple_temp);
		}

	for (int i = FRAM_INIT_ADDRESS; i < FRAM_INIT_ADDRESS + 50; i += 25)
		{
		read_data_chunk_from_fram(i);
		println("reading data chunk from fram at position: " + String(i));

		// print sensor chunk
		println(sensor_chunk.timestamp);
		println(sensor_chunk.current_state);
		println(sensor_chunk.accl_x);
		println(sensor_chunk.accl_y);
		println(sensor_chunk.accl_z);
		println(sensor_chunk.gyro_x);
		println(sensor_chunk.gyro_y);
		println(sensor_chunk.gyro_z);
		println(sensor_chunk.rel_alt);
		println(sensor_chunk.pressure);
		println(sensor_chunk.thermocouple_temp);
		}
	}

int test_main()
	{
	delay(1000);
	println("[TESTMODE] tests starting");

	println("testing fram...");
<<<<<<< HEAD
    test_sensor_fram();
=======
	setup_test_sensor_fram();
	test_sensor_fram();
	teardown_test_sensor_fram();
>>>>>>> 7dacb326ba6e5689342138ed09b492f5c215c0bd
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
