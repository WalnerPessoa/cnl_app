void setup(void)
{
	pinMode(21, OUTPUT);
}

void loop(void)
{
	digitalWrite(21, HIGH);
	delay(4000);
	digitalWrite(21, LOW);
	delay(4000);
}
