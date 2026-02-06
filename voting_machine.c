#include <stdio.h>
int main() {
    int choice;
    int voteA = 0, voteB = 0, voteC = 0;
    int others = 0;
    int total_voters = 0;
    while (1) {
        printf("\n--- Electronic Voting Machine ---\n");
        printf("1. Vote for Candidate A\n");
        printf("2. Vote for Candidate B\n");
        printf("3. Vote for Candidate C\n");
        printf("4. Show Result\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                voteA++;
                total_voters++;
                break;
            case 2:
                voteB++;
                total_voters++;
                break;
            case 3:
                voteC++;
                total_voters++;
                break;
            case 4:
                printf("\n--- Election Result ---\n");
                printf("Candidate A: %d votes\n", voteA);
                printf("Candidate B: %d votes\n", voteB);
                printf("Candidate C: %d votes\n", voteC);
                printf("Others Votes: %d\n", others);
                printf("Total Votes : %d\n", total_voters);
                break;
            case 5:
                printf("Voting Ended\n");
                return 0;
            default:
                printf("Invalid Vote (Counted as Others)\n");
                others++;
                total_voters++;
        }
    }
}
