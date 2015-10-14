#include <LiquidCrystal.h>

LiquidCrystal lcdDisplay(7, 8, 9, 10, 11, 12);

void setup() {
	lcdDisplay.begin(16, 2);
	lcdDisplay.setCursor(0, 0);
	lcdDisplay.print("| Nelson Silva |");
	lcdDisplay.setCursor(0, 1);
	lcdDisplay.print("| @imnsilvadev |");
}

void loop() {}