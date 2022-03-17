/* problem name: Anton and Danik
 * problem link: https://codeforces.com/problemset/problem/734/A
 *
 * time complexity: Linear time O(n)
 * auother: https://github.com/HamzaYehia
 * CodeForces Acc: https://codeforces.com/profile/HamzaYehia
 */


#include <stdio.h>

int main(void) {
	int Anton = 0, Danik = 0, n = 0;

	scanf("%d", &n);
	char  S[n + 1];

	scanf("%s", S);

	for (int i = 0; i < sizeof(S) - 1; i++) {

		if (S[i] == 'A') {
			Anton += 1;
		}

		else if (S[i] == 'D') {
			Danik += 1;
		}
	}


	if (Anton > Danik) {
		printf("Anton\n");
	}
	else if (Danik > Anton) {
		printf("Danik\n");
	}
	else {
		printf("Friendship\n");
	}

	return 0;
}
