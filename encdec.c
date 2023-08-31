#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Function to encrypt a message using Caesar cipher
char* encrypt(char message[], int key) {
    int i;
    char ch;
    char *encrypted_message = malloc(sizeof(char) * MAX_SIZE);
    
    for (i = 0; message[i] != '\0'; i++) {
        ch = message[i];
        
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch + key - 'a') % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch + key - 'A') % 26 + 'A';
        }
        
        encrypted_message[i] = ch;
    }
    encrypted_message[i] = '\0';
    
    return encrypted_message;
}

// Function to decrypt a message using Caesar cipher
char* decrypt(char encrypted_message[], int key) {
    int i;
    char ch;
    char *decrypted_message = malloc(sizeof(char) * MAX_SIZE);
    
    for (i = 0; encrypted_message[i] != '\0'; i++) {
        ch = encrypted_message[i];
        
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - key - 'a' + 26) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - key - 'A' + 26) % 26 + 'A';
        }
        
        decrypted_message[i] = ch;
    }
    decrypted_message[i] = '\0';
    
    return decrypted_message;
}

int main() {
    char message[MAX_SIZE], *encrypted_message, *decrypted_message;
    int key;
    
    printf("Enter a message: ");
    fgets(message, MAX_SIZE, stdin);
    message[strcspn(message, "\n")] = '\0';  // remove trailing newline
    
    printf("Enter a key (1-25): ");
    scanf("%d", &key);
    

    
    encrypted_message = encrypt(message, key);
    printf("Encrypted message: %s\n", encrypted_message);
    
    decrypted_message = decrypt(encrypted_message, key);
    printf("Decrypted message: %s\n", decrypted_message);
    
    free(encrypted_message);
    free(decrypted_message);
    
    return 0;
}
