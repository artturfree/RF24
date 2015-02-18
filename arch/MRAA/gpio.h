/* 
 * TMRh20 2015
 * 
 */

#ifndef H
#define	H

#include <cstdio>
#include <stdio.h>
#include "mraa.hpp"


class GPIO {
public:

	/* Constants */
		
	GPIO();		
	
	/**
	 * Sets up GPIO on the CE & CS pins
     * @param ce_pin
     * @param cs_pin
     */	 
	void begin(uint8_t ce_pin, uint8_t cs_pin);
	
	/**
	 * 
     * @param port
     * @param DDR
     */
	void open(int port, int DDR);
	/**
	 * 
     * @param port
     */
	void close(int port);
	/**
	 * 
     * @param port
     * @param value
     */
	int read(int port);
	/**
	* 
	* @param port
	* @param value
	*/	
	void write(int port,int value);	
	
	virtual ~GPIO();
	
private:
	int gpio_ce_pin; /** ce_pin value of the RF24 device **/
	int gpio_cs_pin; /** cs_pin value of the RF24 device **/
	mraa::Gpio* gpio_0; /** gpio object for ce_pin **/
	mraa::Gpio* gpio_1; /** gpio object for cs_pin **/
};

#endif	/* H */

