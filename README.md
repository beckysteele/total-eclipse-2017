## Total Eclipse 2017
A repository for raw data measured before, during, and after the 2017 Total Eclipse across the United States.

### A few notes:
- I'm just uploading the raw data now. Yes, I know it needs cleaned, and yes, I'll post a more readily useable version this week, in CSV format.  Might convert to JSON if I'm feeling fiesty.
- Observed minimum temperature was recorded shortly after totality, at 84.87 degrees Fahrenheit.  Maximum was before/after partial eclipse started/stopped, at just over 103 degrees Fahrenheit.
- Timezone for timestamp: Central Standard Time (currently UTC -6)
- Location of observed totality: `Latitude: 37.399257`, `Longitude: 88.338721`
- Temperature is provided in Celsius and Fahrenheit (needs split/mapped to a more useful format)


### Circuitry (wiring diagram coming soon):
- Arduino Mega 2560
- DS18B20 waterproof temperature sensor from (Adafruit)[https://www.adafruit.com/product/381] (comes with a 4.7k ohm resistor to use in parallel)
- Check out (this tutorial)[https://www.youtube.com/watch?v=OMNB-4CXxtU] by Arduino My Life Up to see how to wire this all together.
- Program the Arduino (see `eclipseTempLogger.ino` in this repo)
- Download (CoolTerm)[http://freeware.the-meiers.org/], and configure a connection to your serial port (great example of this (found here)[https://www.youtube.com/watch?v=xqdC__jZILk]).
