# Birthday Paradox
A program that approximates the probability that two people in the same room have the same birthday, for 2 to 50 people 
in the room.

### Synopsis
The program will use simulation to approximate the answer; that is, over 5,000 trials, birthdays will be randomly assigned 
to everyone in the room.

The number of occurences of at least two people sharing the same birthday will be recorded and then finally divided by the
number of trials to get an estimated probability that two people share the same birthday for a given room size.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/birthday-paradox.git
   ```
    or [download as ZIP](https://github.com/cramaechi/birthday-paradox/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd birthday-paradox
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./birthday_paradox
```

Sample Output:
```
For 2 people, the probability of two birthdays is, 0.0014                                                        

For 3 people, the probability of two birthdays is, 0.0060                                                        

For 4 people, the probability of two birthdays is, 0.0170                                                        

For 5 people, the probability of two birthdays is, 0.0266                                                        

For 6 people, the probability of two birthdays is, 0.0460                                                        

For 7 people, the probability of two birthdays is, 0.0534                                                        

For 8 people, the probability of two birthdays is, 0.0664                                                        

For 9 people, the probability of two birthdays is, 0.0998                                                        

For 10 people, the probability of two birthdays is, 0.1110                                                       

For 11 people, the probability of two birthdays is, 0.1388                                                       

For 12 people, the probability of two birthdays is, 0.1634

...
```
