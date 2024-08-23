#include <stdio.h>

// Function to move N disks from source_peg to destination_peg using aux_peg
void hanoi(int N, char source_peg, char aux_peg, char destination_peg) {
    if (N == 1) {
        // Base case: move the only disk directly from source_peg to destination_peg
        printf("Move disk 1 from %c to %c\n", source_peg, destination_peg);
    } else {
        // Move the top N-1 disks from source_peg to aux_peg, using destination_peg as auxiliary
        hanoi(N - 1, source_peg, destination_peg, aux_peg);
        
        // Move the remaining disk from source_peg to destination_peg
        printf("Move disk %d from %c to %c\n", N, source_peg, destination_peg);
        
        // Move the N-1 disks from aux_peg to destination_peg, using source_peg as auxiliary
        hanoi(N - 1, aux_peg, source_peg, destination_peg);
    }
}

// Driver code to test the Tower of Hanoi implementation
int main() {
    int N = 3;  // Number of disks
    hanoi(N, 'A', 'B', 'C');  // A, B, C are the names of the rods
    return 0;
}

