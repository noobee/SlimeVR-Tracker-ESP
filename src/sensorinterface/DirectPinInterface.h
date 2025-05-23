/*
	SlimeVR Code is placed under the MIT license
	Copyright (c) 2024 Eiren Rain & SlimeVR contributors

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
*/
#ifndef _H_DIRECT_PIN_INTERFACE_
#define _H_DIRECT_PIN_INTERFACE_

#include <Arduino.h>
#include <PinInterface.h>

/**
 * Pin interface using direct pins
 *
 */
class DirectPinInterface : public PinInterface {
public:
	DirectPinInterface(uint8_t pin)
		: _pinNum(pin){};

	int digitalRead() override final;
	void pinMode(uint8_t mode) override final;
	void digitalWrite(uint8_t val) override final;

	[[nodiscard]] std::string toString() const final {
		using namespace std::string_literals;
		return "Pin("s + std::to_string(_pinNum) + ")";
	}

private:
	uint8_t _pinNum;
};

#endif  // _H_DIRECT_PIN_INTERFACE_
