# Prize-draw

The program will receive the names of the participants, one per line, storing them dynamically in memory, using the PARTICIPANTS string vector. For each participant inserted, the quantity N, initially at 0, must be increased. The list of names is closed when the user enters the word "finished". In the following line, the user will enter the desired random number generation seed S.

The program must perform the draw using the rand function:

participant_index=rand()%N;
If a participant has already been drawn, the result must be ignored. The program ends when all participants have been drawn.
