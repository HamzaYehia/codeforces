/**
 * @problem name: George and Accommodation
 * @problem link: https://codeforces.com/problemset/problem/467/A
 *
 * @time complexity: O(n)
 * @space comlexity: O(1)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Aug-5
 */


#include <stdio.h>

int numberOfRooms() {

    int n = 0, // number of rooms to check
        p = 0, // number of people in a room
        q = 0, // the capacity of that room
        availableRooms = 0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &p, &q);
        if (p <= (q - 2)) availableRooms++;
    }

    return availableRooms;
}


int main(void) {
    printf("%d", numberOfRooms());

    return 0;
}