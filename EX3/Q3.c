#include <stdio.h>

int main(void) {
    int fingerprint_match;
    int retinal_match;
    int access_card_valid;

    printf("Enter fingerprint match (1/0): ");
    scanf("%d", &fingerprint_match);

    printf("Enter retinal match (1/0): ");
    scanf("%d", &retinal_match);

    printf("Enter access card validity (1/0): ");
    scanf("%d", &access_card_valid);

    if ((fingerprint_match && retinal_match) ||
        (fingerprint_match && access_card_valid) ||
        (retinal_match && access_card_valid)) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
