int buttonState = 0;
int buttonHistory = 0;
int counter = 0;

task main() {
	while (1) {

		buttonState = vexRT[Btn7U]
		counter = counter + 1:
		if (counter > 50) {
			buttonHistory = buttonState;
			counter = 0;
		}

		if (buttonHistory = 1 && buttonState = 0) {
			// Stop doing
		}
		if (buttonHistory = 0 && buttonState = 1) {
			// Start doing
		}
		if (buttonHistory = 0 && buttonState = 0) {
			// Dont do
		}
		if (buttonHistory = 1 && buttonState = 1) {
			// keep doing
		}
	}
}
