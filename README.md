# Push_Swap
This is the completed 42project, Push_Swap

The goal of this project is to sort a stack of random ingetegers both positive and negative using 2 stacks and a predetermided set of operations.
Neccesairy are 2 executables: One that sorts all ingegers in acending order on stack A and one that checks if all ingegers are indeed sorted. 

## Usage 

Since this project is written entirly in C, compiling it is neccesairy, thus a Makefile is included. Simply enter the "make" command in the terminal when you are in the root directory of this project and it will compile bot the push_swap and the checker executables.

### Running the 2 programs

To run push_swap all you need to do is feed it any amount of integers as arguments:

./push_swap 9 1 8 2 7 3 6 5 4 10

The program will then write in the terminal the operations it is executing on the stacks to sort these integers.

The checker program check with the output of the push_swap program if after the performed operations stack A is completely sorted.

./push_swap $ARGS | ./checker $ARGS

this will output:
OK if the stack is sorted
KO if the stack is not sorted or if there is any data left on stack B
or error in any other case.