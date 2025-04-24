#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*10) The amount of R$ 780,000.00 will be divided among three winners of a contest, as follows:
i. The first winner will receive 46% of the total.
ii. The second winner will receive 32% of the total.
iii. The third winner will receive the remainder. */

int main (){
        float first_winner, second_winner, third_winner;
        const float prize = 780000.00;
        first_winner = prize * 0.46;
        second_winner = prize * 0.32;
        third_winner = prize - (first_winner + second_winner);
        printf("First winner receives: R$ %.2f\n", first_winner);
        printf("Second winner receives: R$ %.2f\n", second_winner);
        printf("Third winner receives: R$ %.2f\n", third_winner);

        return 0;
}
