# Test plan

## High Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|HLT1|  Start engine            |Button Press|  Start engine             |   Start engine            |Pass|
|HLT2|  Turn on wiper with 1Hz  |Button press|  Turn on wiper with 1Hz   |  Turn on wiper with 1Hz   |Pass|
|HLT3|  Turn on wiper with 4Hz  |Button press|  Turn on wiper with 4Hz   |  Turn on wiper with 4Hz   |Pass|
|HLT4|  Turn on wiper with 8Hz  |Button press|  Turn on wiper with 8Hz   |  Turn on wiper with 8Hz   |Pass|
|HLT5|  Turn off wiper          |Button press|  Turn off wiper           |  Turn off wiper           |Pass|
|HLT6|  Turn off engine         |Button press|  Turn off engine          |   Turn off engine        |Pass|

## Low Level Test Plan:

| ID | Description | Expected i/p | Expected o/p | Actual o/p | Test Status |
| ----- | ----- | ------- |  ------- | ----- | ----- |
|LLT1| Start engine            |Press the button once    | RED Led ON                  | RED Led ON                 |Pass|
|LLT2| Turn on wiper with 1Hz  |Press the button twice   | ORANGE BLUE GREEN led ON    | ORANGE BLUE GREEN led ON   |Pass|
|LLT3| Turn on wiper with 4Hz  |Press the button thrice  | ORANGE BLUE GREEN Led ON    |   ORANGE BLUE GREEN Led ON |Pass|
|LLT4| Turn on wiper with 8Hz  | Press the button 4 times| ORANGE BLUE GREEN Led ON    |   ORANGE BLUE GREEN Led ON |Pass|
|LLT5| Turn off wiper          | Press the button 5 times| ORANGE BLUE GREEN Led OFF   |  ORANGE BLUE GREEN Led OFF |Pass|
|LLT6|  Turn off engine        | Press the button 6 times| RED Led OFF                 |   RED Led OFF              |Pass|


