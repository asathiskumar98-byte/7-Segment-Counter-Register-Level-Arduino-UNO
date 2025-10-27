void setup()
{
  DDRD = 0xFF;
  DDRB = 0x01;

}
unsigned char _7SEGMENT[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x6F90},i=0;
void loop()
{
  for(i=0;i<10;i++)
  {
      PORTD = _7SEGMENT[i];
      PORTB = 0X01;
      delay(1000);
  }
}
